/**************************
 * Description:
   Reset and re-enable display

 * Reference Codes
 * abl/edk2/QcomModulePkg/Library/BootLib/UpdateDeviceTree.c

 - License:
 * Copyright (c) 2015-2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2024. Woa-msmnile Authors. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided
 *  with the distribution.
 *   * Neither the name of The Linux Foundation nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 * Changes from Qualcomm Innovation Center are provided under the following license:
 *
 * Copyright (c) 2022-2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted (subject to the limitations in the
 *  disclaimer below) provided that the following conditions are met:
 *
 *      * Redistributions of source code must retain the above copyright
 *        notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials provided
 *        with the distribution.
 *
 *      * Neither the name of Qualcomm Innovation Center, Inc. nor the names of its
 *        contributors may be used to endorse or promote products derived
 *        from this software without specific prior written permission.
 *
 *  NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE
 *  GRANTED BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT
 *  HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
 *   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 *  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 *  IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 *  IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**************************/
/*-------------------------Headers------------------------------*/
#include <Library/BaseLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <Library/UefiLib.h>
#include <Library/DebugLib.h>
#include <Library/PrintLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/PcdLib.h>
#include <Protocol/EFIDisplayPwr.h>

/*-------------------------Functions------------------------------*/
STATIC
EFI_STATUS
DisableDisplay (EFI_DISPLAY_POWER_PROTOCOL *pDispPwrProtocol)
{
    return pDispPwrProtocol->SetDisplayPowerState (pDispPwrProtocol, EfiDisplayPowerStateOff);
}

STATIC
EFI_STATUS
EnableDisplay (EFI_DISPLAY_POWER_PROTOCOL *pDispPwrProtocol)
{
    return pDispPwrProtocol->SetDisplayPowerState (pDispPwrProtocol, EfiDisplayPowerStateOn);
}

VOID
EFIAPI
DisableDisplayEvent(
  IN EFI_EVENT  Event,
  IN VOID       *pDispPwrProtocol
) {
    DisableDisplay(pDispPwrProtocol);
}


//
// Driver Entry Point
//
EFI_STATUS
EFIAPI
DisplayCallerDxeInitialize(
  IN EFI_HANDLE ImageHandle,
  IN EFI_SYSTEM_TABLE *SystemTable
) {
    EFI_STATUS Status = EFI_SUCCESS;
    EFI_EVENT  ExitBootServicesEvent;
    EFI_DISPLAY_POWER_PROTOCOL    *pDispPwrProtocol = NULL;

    /* Try get display power state protocol */
    Status = gBS->LocateProtocol(&gEfiDisplayPowerStateProtocolGuid, NULL, (VOID **)&pDispPwrProtocol);
    if ((Status != EFI_SUCCESS) || (NULL == pDispPwrProtocol)){
        DEBUG((EFI_D_ERROR, "[DisplayCaller]: Failed to locate DisplayPowerState Protocol!\n"));
        goto exit;
    }

    /* Close Display */
    Status = DisableDisplay(pDispPwrProtocol);
    if (Status != EFI_SUCCESS){
        DEBUG((EFI_D_ERROR, "[DisplayCaller]: Failed to Disable Display!\n"));
        goto exit;
    }

    /* Waiting 100us for it finishing */
    gBS->Stall(FixedPcdGet64(PcdDisplayCallerStallBeforeEnable));

    /* Re-Enable Dispplay */
    Status = EnableDisplay(pDispPwrProtocol);
    if (Status != EFI_SUCCESS){
        DEBUG((EFI_D_ERROR, "[DisplayCaller]: Failed to Enable Display!\n"));
        /* Exit */
//        goto exit;
    }

    // Hook Exit boot service if device needs disable display after booting.
    if(FixedPcdGetBool(PcdDisplayCallerExitDisableDisplay))
        Status = gBS->CreateEventEx (
                    EVT_NOTIFY_SIGNAL,
                    TPL_NOTIFY,
                    DisableDisplayEvent,
                    pDispPwrProtocol,
                    &gEfiEventExitBootServicesGuid,
                    &ExitBootServicesEvent
                );

    if (EFI_ERROR (Status))
        DEBUG ((DEBUG_ERROR, "[DisplayCallerDxe]: Failed to power off display while exit boot service Status=%r\n", Status));

exit:
    return Status;
}

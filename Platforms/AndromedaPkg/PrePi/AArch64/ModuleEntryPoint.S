//
//  Copyright (c) 2011 - 2020, Arm Limited. All rights reserved.<BR>
//
//  SPDX-License-Identifier: BSD-2-Clause-Patent
//
//

#include <AsmMacroIoLibV8.h>

.text
.align 3

.set CTRL_SPAN_BIT, (1 << 23)

ASM_FUNC(_ModuleEntryPoint)
  // Do early platform specific actions
  bl    ASM_PFX(ArmPlatformPeiBootAction)

  // Get ID of this CPU in multi-core system
  bl    ASM_PFX(ArmReadMpidr)
  // Keep a copy of the MpId register value
  mov   x10, x0

_SetSVCMode:
  mov x0, #0
  mov x1, #0

  /* First ensure all interrupts are disabled */
  bl ASM_PFX(ArmDisableInterrupts)

  /* Ensure that the MMU and caches are off */
  bl ASM_PFX(ArmDisableCachesAndMmu)

  /* Invalide I-Cache */
  bl ASM_PFX(ArmInvalidateInstructionCache)

  /* Invalidate TLB */
  bl ASM_PFX(ArmInvalidateTlb)

  mrs x0, sctlr_el1
  orr x0, x0, #CTRL_SPAN_BIT
  msr sctlr_el1, x0

_SetupExceptionVector:
  ldr x0, =FixedPcdGet64(PcdCpuVectorBaseAddress)
  bl ArmWriteVBar

  ldr x1, _NeverReturn
  add x2, x0, #0x800
  mov x3, x0

_FillVectors:
  stp     x1, x1, [x3], #16 /* Fill every 16 byte */
  cmp     x3, x2
  b.lt    _FillVectors

_DonNotTrap_VFP_SIMD:
  mrs x0, CPACR_EL1
  /* Bit 20 and 21 */
  orr x0, x0, #0x300000
  msr CPACR_EL1, x0
  isb sy

_SetupPrimaryCoreStack:
  ldr x0, =FixedPcdGet32(PcdPrePiStackBase)     /* Stack base arg0 */
  ldr x1, =FixedPcdGet32(PcdPrePiStackSize)     /* Stack size arg1 */

  /* Zero Init stack */
  add x2, x0, x1         /* End of Stack */
  add sp, x2, xzr                                /* Initalize SP */

_EnableCache:
  bl ArmInvalidateDataCache
  bl ASM_PFX(ArmEnableInstructionCache)
  bl ASM_PFX(ArmEnableDataCache)

_PrepareArguments:
  mov   x0, x10
  mov   x1, x11
  mov   x2, x12

  // Move sec startup address into a data register
  // Ensure we're jumping to FV version of the code (not boot remapped alias)
  ldr   x4, =ASM_PFX(CEntryPoint)

  // Set the frame pointer to NULL so any backtraces terminate here
  mov   x29, xzr

  // Jump to PrePiCore C code
  //    x0 = MpId
  //    x1 = UefiMemoryBase
  //    x2 = StacksBase
  blr   x4

.align 3
_NeverReturn:
  b _NeverReturn

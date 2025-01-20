# Patched Binaries
### Dxes Here should be Platfrom generic DXE.

This file aims to provide further information about the different patches applied to Surface Duo stock firmware UEFI DXEs.

## Reasoning behind each patch

<!--- DisplayDxe: Panels get deinitialized partially on exit boot services by the stock firmware, it is thus needed to reinitialize them, but due to them being partially deinitialized, running some routines again will break the platform. An MMU Domain is already setup by the previous firmware and gets re-set again, causing a crash.-->

- HALIOMMUDxe: The USB MMU Domain is already setup by the previous firmware and gets re-set agaion, causing a crash.

- UFSDxe: An MMU Domain is already setup by the previous firmware and gets re-set again, causing a crash.

- UsbConfigDxe: Important to get USB to work after exit boot services for KdNet or DeveloperMenu or FFULoader.

- ButtonsDxe: to help navigating menus more easily.

<!--- FmpDxe: so the driver loads and provides firmware manegement interfaces to FrontPage.-->

## UFSDxe & DisplayDxe

MMU related setup routine was patched to not recreate already existing MMU domains.

## UsbConfigDxe

Exit BootServices routine was patched to not deinit USB after exit boot services.

## ButtonsDxe

Key code was patched for the power button to be mapped as ENTER instead of SUSPEND.

#include <Library/BaseLib.h>
#include <Library/PlatformConfigurationMapLib.h>

static CONFIGURATION_DESCRIPTOR_EX gDeviceConfigurationDescriptorEx[] = {
    {"AbnormalResetOccurredOffset", 0x24},
    {"DBIDumpDDRBase", 0x80000000},
    {"EnableSDHCSwitch", 0x1},
    {"EnableShell", 0x1},
    {"GCCResetValueAddress", 0x066BF028},
    {"MassStorageCookieAddr", 0x007B3000},
    {"MassStorageCookieOffset", 0x0},
    {"MassStorageCookieSize", 0x4},
    {"MaxLogFileSize", 0x800000},
    {"MemoryCaptureModeOffset", 0x1C},
    {"NumActiveCores", 1},
    {"NumCpus", 4},
    {"NumCpusFuseAddr", 0x5C04C},
    {"PCIeRPNumber", 0x0101},
    {"PSHoldOffset", 0xB000},
    {"PSHoldSHFT", 0x0},
    {"PwrBtnShutdownFlag", 0x0},
    {"RpmbHalfSectorGranularity", 2},
    {"Sdc1GpioConfigOff", 0xA00},
    {"Sdc1GpioConfigOn", 0x1E92},
    {"Sdc2GpioConfigOff", 0xA00},
    {"Sdc2GpioConfigOn", 0x1E92},
    {"SecurityFlag", 0x7F},
    {"SerialPortBufferSize", 0x8000},
    {"SharedIMEMBaseAddr", 0x066BF000},
    {"UsbFnIoRevNum", 0x00010001},
    {"USBHS1_Config", 0x0},
    /* Terminator */
    {"Terminator", 0xFFFFFFFF}};

CONFIGURATION_DESCRIPTOR_EX *GetPlatformConfigurationMap()
{
  return gDeviceConfigurationDescriptorEx;
}

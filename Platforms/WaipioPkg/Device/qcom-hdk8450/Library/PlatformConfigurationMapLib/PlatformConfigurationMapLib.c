#include <Library/BaseLib.h>
#include <Library/PlatformConfigurationMapLib.h>

static CONFIGURATION_DESCRIPTOR_EX gDeviceConfigurationDescriptorEx[] = {
    {"AbnormalResetOccurredOffset", 0x24},
    {"AllowNonPersistentVarsInRetail", 0x1},
    {"DDRInfoNotifyFlag", 0x0},
    {"DetectRetailUserAttentionHotkey", 0x00},
    {"DetectRetailUserAttentionHotkeyCode", 0x17},
    {"DloadCookieAddr", 0x01FD3000},
    {"DloadCookieValue", 0x10},
    {"EarlyInitCoreCnt", 2},
    {"EnableACPIFallback", 0x0},
    {"EnableDisplayImageFv", 0x1},
    {"EnableDisplayThread", 0x0},
    {"EnableLogFsSyncInRetail", 0x1},
    {"EnableMultiThreading", 0},
    {"EnableMultiCoreFvDecompression", 0},
    {"EnableOEMSetupAppInRetail", 0x0},
    {"EnablePXE", 0x0},
    {"EnableSDHCSwitch", 0x1},
    {"EnableShell", 0x1},
    {"EnableUefiSecAppDebugLogDump", 0x0},
    {"EnableUfsIOC", 0x1},
    {"EnableVariablePolicyEngine", 0},
    {"MaxCoreCnt", 8},
    {"MaxLogFileSize", 0x400000},
    {"NumActiveCores", 8},
    {"NumCpus", 8},
    {"PwrBtnShutdownFlag", 0x0},
    {"PilSubsysDbgCookieAddr", 0x146AA6DC},
    {"PilSubsysDbgCookieVal", 0x53444247},
    {"SecPagePoolCount", 0x800},
    {"Sdc1GpioConfigOff", 0xA00},
    {"Sdc1GpioConfigOn", 0x1E92},
    {"Sdc2GpioConfigOff", 0xA00},
    {"Sdc2GpioConfigOn", 0x1E92},
    {"SecurityFlag", 0xC4},
    {"SharedIMEMBaseAddr", 0x146AA000},
    {"ShmBridgememSize", 0xA00000},
    {"UefiMemUseThreshold", 0x1900},
    {"UfsSmmuConfigForOtherBootDev", 1},
    {"UsbFnIoRevNum", 0x00010001},
    {"USBHS1_Config", 0x0},
    /* Terminator */
    {"Terminator", 0xFFFFFFFF}};

CONFIGURATION_DESCRIPTOR_EX *GetPlatformConfigurationMap()
{
  return gDeviceConfigurationDescriptorEx;
}

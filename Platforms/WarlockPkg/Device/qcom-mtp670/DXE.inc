INF AndromedaPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/FontDxe/FontDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HashDxe/HashDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/RNGDxe/RngDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
INF WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf

# Patched Binaries
INF QcomPkg/PatchedBinaries/HALIOMMUDxe.inf

# DXE without depex
FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
    SECTION PE32 = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DiskIoDxe/DiskIoDxe.efi
    SECTION UI = "DiskIoDxe"
}

FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d {
    SECTION PE32 = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.efi
    SECTION UI = "GraphicsConsoleDxe"
}

FILE DRIVER = 1fa1f39e-feff-4aae-bd7b-38a070a3b609 {
    SECTION PE32 = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PartitionDxe/PartitionDxe.efi
    SECTION UI = "PartitionDxe"
}

# Raw Files
FILE FREEFORM = A91D838E-A5FA-4138-825D-455E2303079E {
    SECTION UI = "BDS_Menu.cfg"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BDS_Menu.cfg
}

FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030794 {
    SECTION UI = "logo1.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/logo1.bmp
}

FILE FREEFORM = 3E5584ED-05D4-4267-9048-0D47F76F4248 {
    SECTION UI = "battery_symbol_Soc10.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Soc10.bmp
}

FILE FREEFORM = 4753E815-DDD8-402D-BF69-9B8C4EB7573E {
    SECTION UI = "battery_symbol_NoBattery.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_NoBattery.bmp
}

FILE FREEFORM = 03DED53E-BECD-428F-9F79-5ABA64C58445 {
    SECTION UI = "battery_symbol_Nocharger.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Nocharger.bmp
}

FILE FREEFORM = 8B86CD38-C772-4FCF-85AA-345B2B3C1AB4 {
    SECTION UI = "battery_symbol_LowBatteryCharging.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_LowBatteryCharging.bmp
}

FILE FREEFORM = 3FD97907-93F1-4349-AF3C-3B68B0A5E626 {
    SECTION UI = "battery_symbol_LowBattery.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_LowBattery.bmp
}

FILE FREEFORM = E2EA5A4F-98BD-4203-AB49-399505DDFB7D {
    SECTION UI = "tsens_thermal_symbol.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/tsens_thermal_symbol.bmp
}

FILE FREEFORM = C72FB1A9-5527-4E13-BAC4-F671D0330145 {
    SECTION UI = "tsens_thermal_err_symbol.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/tsens_thermal_err_symbol.bmp
}

FILE FREEFORM = B0F8D1BE-5353-4812-B1F6-07E7768204CC {
    SECTION UI = "battery_symbol_DebugBoot.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_DebugBoot.bmp
}

FILE FREEFORM = F9E8F683-E065-4E09-B4F9-0230D7CECD08 {
    SECTION UI = "battery_symbol_DebugStay.bmp"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_DebugStay.bmp
}

FILE FREEFORM = A1E235DE-E825-4591-9623-C43175811826 {
    SECTION UI = "SecParti.cfg"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/SecParti.cfg
}

FILE FREEFORM = 45FE4B7C-150C-45DA-A021-4BEB2048EC6F {
    SECTION UI = "QcomChargerCfg.cfg"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/QcomChargerCfg.cfg
}

FILE FREEFORM = F780C779-DD7C-47CD-BD1A-5EB414C51704 {
    SECTION UI = "BATTERY.PROVISION"
    SECTION RAW = WarlockPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BATTERY.PROVISION
}
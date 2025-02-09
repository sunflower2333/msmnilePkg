# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/XBLCore/XBLCore.inf

# FILE FREEFORM = DDE58710-41CD-4306-DBFB-3FA90BB1D2DD {
#     SECTION UI = "uefiplat.cfg"
#     SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/uefiplat.cfg
# }

INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/AdapterInformationDxe/AdapterInformationDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/OSConfigDxe/OSConfigDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
INF AndromedaPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf

INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PmicDxe/PmicDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChargerDxe/ChargerDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/MpPowerDxe/MpPowerDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QdssDxe/QdssDxe.inf

# Patched Binaries
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf

# DXE without depex
FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
    SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DiskIoDxe/DiskIoDxe.efi
    SECTION UI = "DiskIoDxe"
}

FILE DRIVER = 1fa1f39e-feff-4aae-bd7b-38a070a3b609 {
    SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PartitionDxe/PartitionDxe.efi
    SECTION UI = "PartitionDxe"
}

FILE DRIVER = 3adf8dda-1850-44c5-8c63-bb991849bc6f {
        SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HashDxe/HashDxe.efi
        SECTION UI = "HashDxe"
}

FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
        SECTION UI = "RngDxe"
        SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/RNGDxe/RngDxe.efi
}

FILE DRIVER = 5E0EAE60-EAED-4D75-B8BF-EDBBAABC3F09{
    SECTION UI = "SecurityDxe"
    SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SecurityDxe/SecurityDxe.efi
}

FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d {
    SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.efi
    SECTION UI = "GraphicsConsoleDxe"
}


FILE DRIVER = B7F50E91-A759-412C-ADE4-DCD03E7F7C28 {
    SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/XhciDxe/XhciDxe.efi
    SECTION UI = "XhciDxe"
}

FILE DRIVER = 240612B7-A063-11D4-9A3A-0090273FC14D {
    SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.efi
    SECTION UI = "UsbBusDxe"
}

FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
    SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.efi
    SECTION UI = "UsbKbDxe"
}

FILE DRIVER = 9FB4B4A7-42C0-4BCD-8540-9BCC6711F83E {
    SECTION PE32 = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.efi
    SECTION UI = "UsbMassStorageDxe"
}

# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/MorPpiDxe/MorPpiDxe.inf
# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/MeasureBootDxe/MeasureBootDxe.inf
# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CrashDumpDxe/CrashDumpDxe.inf
# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TrEEDxe/TrEEDxe.inf
# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/BootModeMgmtDxe/BootModeMgmtDxe.inf
# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SerialDxe/SerialDxe.inf
# INF IstariPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TzDxe/TzDxe.inf

# Raw Files
FILE FREEFORM = A91D838E-A5FA-4138-825D-455E2303079E {
    SECTION UI = "BDS_Menu.cfg"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BDS_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030790 {
    SECTION UI = "USB_Menu.cfg"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/USB_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030791 {
    SECTION UI = "Uefi_Menu.cfg"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Uefi_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030792 {
    SECTION UI = "Pmic_Menu.cfg"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Pmic_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030793 {
    SECTION UI = "Config_Menu.cfg"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Config_Menu.cfg
}

FILE FREEFORM = A1E235DE-E825-4591-9623-C43175811826 {
    SECTION UI = "SecParti.cfg"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/SecParti.cfg
}


FILE FREEFORM = 45FE4B7C-150C-45DA-A021-4BEB2048EC6F {
    SECTION UI = "PmicChargerApp.cfg"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/PmicChargerApp.cfg
}


FILE FREEFORM = 3E5584ED-05D4-4267-9048-0D47F76F4248 {
    SECTION UI = "battery_symbol_Soc10.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Soc10.bmp
}


FILE FREEFORM = 21D7756C-ABCE-4CA9-88B6-8515EAB40595 {
    SECTION UI = "battery_symbol_Soc25.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Soc25.bmp
}


FILE FREEFORM = 203962DD-A7F3-462B-A006-8956ECBAAB57 {
    SECTION UI = "battery_symbol_Soc50.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Soc50.bmp
}


FILE FREEFORM = 47B43C60-ECED-4874-B8BC-CDCD154E73B6 {
    SECTION UI = "battery_symbol_Soc75.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Soc75.bmp
}


FILE FREEFORM = C5D3FB9A-1FE9-4E2B-868E-ED553EBB9897 {
    SECTION UI = "battery_symbol_Soc100.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Soc100.bmp
}


FILE FREEFORM = 4753E815-DDD8-402D-BF69-9B8C4EB7573E {
    SECTION UI = "battery_symbol_NoBattery.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_NoBattery.bmp
}


FILE FREEFORM = 03DED53E-BECD-428F-9F79-5ABA64C58445 {
    SECTION UI = "battery_symbol_Nocharger.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Nocharger.bmp
}


FILE FREEFORM = 8B86CD38-C772-4FCF-85AA-345B2B3C1AB4 {
    SECTION UI = "battery_symbol_LowBatteryCharging.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_LowBatteryCharging.bmp
}


FILE FREEFORM = 3FD97907-93F1-4349-AF3C-3B68B0A5E626 {
    SECTION UI = "battery_symbol_LowBattery.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_LowBattery.bmp
}


FILE FREEFORM = E2EA5A4F-98BD-4203-AB49-399505DDFB7D {
    SECTION UI = "tsens_thermal_symbol.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/tsens_thermal_symbol.bmp
}


FILE FREEFORM = C72FB1A9-5527-4E13-BAC4-F671D0330145 {
    SECTION UI = "tsens_thermal_err_symbol.bmp"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/tsens_thermal_err_symbol.bmp
}


FILE FREEFORM = F12A1F3D-4318-A006-5F7F-3FAAF6DBB4B5 {
    SECTION UI = "tracer_event.cfg"
    SECTION RAW = IstariPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/tracer_event.cfg
}


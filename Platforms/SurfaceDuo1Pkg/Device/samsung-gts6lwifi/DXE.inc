# INF QcomPkg/XBLCore/XBLCore.inf

#FILE FREEFORM = DDE58710-41CD-4306-DBFB-3FA90BB1D2DD {
#    SECTION UI = "uefiplat.cfg"
#    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/uefiplat.cfg
#}

INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/AdapterInformationDxe/AdapterInformationDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/OSConfigDxe/OSConfigDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
INF SurfaceDuoFamilyPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf

INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/DispPmicDxe/DispPmicDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/SubPmicDxe/SubPmicDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/RedriverDxe/RedriverDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/SvcLedDxe/SvcLedDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/HallIcDxe/HallIcDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SamsungDxe/VibDxe/VibDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Application/SamsungQuestApp/SamsungQuestApp.inf

#INF MdeModulePkg/Core/Dxe/DxeMain.inf
#INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
#INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
#INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
#INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
#INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
#INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/RscRtDxe.inf
#INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/SCHandlerRtDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
#INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
#INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
#INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
#INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
#INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
#INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
#INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
#INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/FontDxe/FontDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
#INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
#INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
#INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
#INF $(PACKAGE_NAME)/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
#INF FatPkg/EnhancedFatDxe/Fat.inf
#INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
#INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
#INF QcomPkg/Drivers/UFSDxe/UFSDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
#INF QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
#INF QcomPkg/Drivers/HashDxe/HashDxe.inf
#INF QcomPkg/Drivers/CipherDxe/CipherDxe.inf
#INF QcomPkg/Drivers/RNGDxe/RngDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomBds/QcomBds.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PILDxe/PILDxe.inf
#INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf

INF QcomPkg/PatchedBinaries/05472C14-ACB9-4458-A354-A68357AC3BF0.inf
INF QcomPkg/PatchedBinaries/ButtonsDxe.inf
INF QcomPkg/PatchedBinaries/HALIOMMUDxe.inf
INF QcomPkg/PatchedBinaries/PciHostBridgeDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/PatchedBinaries/UFSDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/PatchedBinaries/UsbConfigDxe.inf
INF SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/PatchedBinaries/MuicDxe.inf

FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
    SECTION PE32 = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.efi
    SECTION UI = "DiskIoDxe"
}

FILE DRIVER = 1fa1f39e-feff-4aae-bd7b-38a070a3b609 {
    SECTION PE32 = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.efi
    SECTION UI = "PartitionDxe"
}

FILE DRIVER = f09ad92e-4e91-490f-ab99-e69939b840b2 {
    SECTION UI = "LimitsDxe"
    SECTION RAW = Epsilon/BOOT.XF.3.0-00527-SM8150LZB-1/QcomPkg/Drivers/LimitsDxe/LimitsDxe.raw
    SECTION PE32 = Epsilon/BOOT.XF.3.0-00527-SM8150LZB-1/QcomPkg/Drivers/LimitsDxe/LimitsDxe.efi
}

FILE DRIVER = 3adf8dda-1850-44c5-8c63-bb991849bc6f {
    SECTION UI = "HashDxe"
    SECTION RAW = Epsilon/BOOT.XF.3.0-00527-SM8150LZB-1/QcomPkg/Drivers/HashDxe/HashDxe.raw
    SECTION PE32 = Epsilon/BOOT.XF.3.0-00527-SM8150LZB-1/QcomPkg/Drivers/HashDxe/HashDxe.efi
}

FILE DRIVER = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde {
    SECTION UI = "CipherDxe"
    SECTION RAW = Epsilon/BOOT.XF.3.0-00527-SM8150LZB-1/QcomPkg/Drivers/CipherDxe/CipherDxe.raw
    SECTION PE32 = Epsilon/BOOT.XF.3.0-00527-SM8150LZB-1/QcomPkg/Drivers/CipherDxe/CipherDxe.efi
}

FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
    SECTION UI = "RngDxe"
    SECTION RAW = Epsilon/BOOT.XF.3.0-00527-SM8150LZB-1/QcomPkg/Drivers/RNGDxe/RngDxe.raw
    SECTION PE32 = Epsilon/BOOT.XF.3.0-00527-SM8150LZB-1/QcomPkg/Drivers/RNGDxe/RngDxe.efi
}

#
#FILE DRIVER = 32C71E68-83A8-46ED-AED1-094E71B12057 {
#    SECTION PE32 = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SecRSADxe/SecRSADxe.efi
#    SECTION UI = "SecRSADxe"
#}
#
#FILE DRIVER = C2F9A4F5-F7B4-43E7-BA99-5EA804CC103A {
#    SECTION PE32 = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.efi
#    SECTION UI = "ASN1X509Dxe"
#}

FILE DRIVER = B7F50E91-A759-412C-ADE4-DCD03E7F7C28 {
    SECTION PE32 = Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/XhciDxe/XhciDxe.efi
    SECTION UI = "XhciDxe"
}

FILE DRIVER = 240612B7-A063-11D4-9A3A-0090273FC14D {
    SECTION PE32 = Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.efi
    SECTION UI = "UsbBusDxe"
}
#
#FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
#    SECTION PE32 = Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.efi
#    SECTION UI = "UsbKbDxe"
#}

FILE DRIVER = 9FB4B4A7-42C0-4BCD-8540-9BCC6711F83E {
    SECTION PE32 = Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.efi
    SECTION UI = "UsbMassStorageDxe"
}

# Raw Files
FILE FREEFORM = A91D838E-A5FA-4138-825D-455E2303079E {
    SECTION UI = "BDS_Menu.cfg"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BDS_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030794 {
    SECTION UI = "logo1.bmp"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/logo1.bmp
}


FILE FREEFORM = 8CAE2C55-FC5A-410B-812B-8CA22F572F36 {
    SECTION UI = "Panel_truly_wqxga_dsc_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_truly_wqxga_dsc_cmd.xml
}


FILE FREEFORM = 13AC9DC9-0092-4374-AE1A-06FF35950FD0 {
    SECTION UI = "Panel_truly_wqxga_dsc_vid.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_truly_wqxga_dsc_vid.xml
}


FILE FREEFORM = FC6315F9-F8FE-4222-A1E3-226DF55D7592 {
    SECTION UI = "Panel_truly_wqxga_dual_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_truly_wqxga_dual_cmd.xml
}


FILE FREEFORM = 95E7B040-26A2-4511-9ABB-1D95D6DA7082 {
    SECTION UI = "Panel_truly_wqxga_dual_vid.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_truly_wqxga_dual_vid.xml
}


FILE FREEFORM = 8BC595B7-391A-4A9A-8256-5B9983B30392 {
    SECTION UI = "Panel_sharp_4k_dsc_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_sharp_4k_dsc_cmd.xml
}


FILE FREEFORM = 19B58ACD-B1F8-4078-B9A5-A33584B680E2 {
    SECTION UI = "Panel_sharp_4k_dsc_vid.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_sharp_4k_dsc_vid.xml
}


FILE FREEFORM = 0AE323D6-2EBE-11E8-8349-9BA636A0D80C {
    SECTION UI = "Panel_sharp_1080p_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_sharp_1080p_cmd.xml
}


FILE FREEFORM = 87273B42-311D-11E8-9324-DFB2DADFC3D1 {
    SECTION UI = "Panel_truly_1080p_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_truly_1080p_cmd.xml
}


FILE FREEFORM = BAFD3200-311D-11E8-8651-0FB3CACF38FB {
    SECTION UI = "Panel_truly_1080p_vid.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_truly_1080p_vid.xml
}


FILE FREEFORM = 88CA5ABF-D0AC-4093-A68C-0CFAE1EF9635 {
    SECTION UI = "Panel_boe_amoled_wqhd_dsc_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_boe_amoled_wqhd_dsc_cmd.xml
}


FILE FREEFORM = 45A8FDA2-4FAD-4234-BCDA-D1778611CE13 {
    SECTION UI = "Panel_boe_amoled_wqhd_dsc_vid.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_boe_amoled_wqhd_dsc_vid.xml
}


FILE FREEFORM = 2BCA3B86-E175-4609-AC7F-207908B89C75 {
    SECTION UI = "Panel_primary_sharp_1080p_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_primary_sharp_1080p_cmd.xml
}


FILE FREEFORM = A3607731-F28D-496C-83D3-FB182F885F8C {
    SECTION UI = "Panel_secondary_truly_1080p_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_secondary_truly_1080p_cmd.xml
}


FILE FREEFORM = 32C7620B-9746-4BB6-8166-605682A2C58A {
    SECTION UI = "Panel_nt36850_truly_wqhd_cmd.xml"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/Panel_nt36850_truly_wqhd_cmd.xml
}


FILE FREEFORM = A1E235DE-E825-4591-9623-C43175811826 {
    SECTION UI = "SecParti.cfg"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/SecParti.cfg
}


FILE FREEFORM = 21E9BDD9-6C3F-4F10-84A5-BBEC322741F1 {
    SECTION UI = "uefipil.cfg"
    SECTION RAW = SurfaceDuo1Pkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/uefipil.cfg
}

[PcdsFixedAtBuild.common]
gAndromedaPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1920
gAndromedaPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|1080

# Display Caller
gAndromedaPkgTokenSpaceGuid.PcdDisplayCallerExitDisableDisplay|FALSE
gAndromedaPkgTokenSpaceGuid.PcdDisplayCallerStallBeforeEnable|1000

# Smbios Info
gAndromedaPkgTokenSpaceGuid.PcdSmbiosSystemBrand|"Qualcomm"
gAndromedaPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"6"

gAndromedaPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Snapdragon (TM) 8 Gen1 @ 2.995 GHz"
gAndromedaPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"SM8450"

gAndromedaPkgTokenSpaceGuid.PcdABLProduct|"waipio"

[PcdsDynamicDefault.common]
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1920
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|1080
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1920
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|1080
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|240     # = 1920 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|56         # = 1080 / EFI_GLYPH_HEIGHT(19)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|240          # = 1920 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|56              # = 1080 / EFI_GLYPH_HEIGHT(19)

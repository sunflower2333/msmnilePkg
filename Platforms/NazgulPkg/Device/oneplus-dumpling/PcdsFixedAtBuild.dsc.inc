[PcdsFixedAtBuild.common]
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1080
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|2160
#gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32

# Smbios Info
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemBrand|"OnePlus"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemModel|"5T"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosBoardModel|"16859"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"dumpling"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"A5010"

gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdABLProduct|"OnePlus 5T"

[PcdsDynamicDefault.common]
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1080
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|2160
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1080
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|2160
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|135     # = 1080 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|113        # = 2160 / EFI_GLYPH_HEIGHT(19)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|135          # = 1080 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|113             # = 2160 / EFI_GLYPH_HEIGHT(19)

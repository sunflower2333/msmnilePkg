#include <PiPei.h>
#include <Library/IoLib.h>
#include <Library/PlatformPrePiLib.h>
#include "PlatformUtils.h"

VOID ConfigureIOMMUContextBankCacheSetting(
    UINT32 ContextBankId, BOOLEAN CacheCoherent)
{
  UINT32 ContextBankAddr =
      SMMU_BASE + SMMU_CTX_BANK_0_OFFSET + ContextBankId * SMMU_CTX_BANK_SIZE;
  MmioWrite32(
      ContextBankAddr + SMMU_CTX_BANK_SCTLR_OFFSET,
      CacheCoherent ? SMMU_CCA_SCTLR : SMMU_NON_CCA_SCTLR);
  MmioWrite32(ContextBankAddr + SMMU_CTX_BANK_TTBR0_0_OFFSET, 0);
  MmioWrite32(ContextBankAddr + SMMU_CTX_BANK_TTBR0_1_OFFSET, 0);
  MmioWrite32(ContextBankAddr + SMMU_CTX_BANK_TTBR1_0_OFFSET, 0);
  MmioWrite32(ContextBankAddr + SMMU_CTX_BANK_TTBR1_1_OFFSET, 0);
  MmioWrite32(ContextBankAddr + SMMU_CTX_BANK_MAIR0_OFFSET, 0);
  MmioWrite32(ContextBankAddr + SMMU_CTX_BANK_MAIR1_OFFSET, 0);
  MmioWrite32(ContextBankAddr + SMMU_CTX_BANK_TTBCR_OFFSET, 0);
}

VOID DisableMDSSDSIController(UINT32 MdssDsiBase)
{
  UINT32 DsiControlAddr  = MdssDsiBase + DSI_CTRL;
  UINT32 DsiControlValue = MmioRead32(DsiControlAddr);
  DsiControlValue &=
      ~(DSI_CTRL_ENABLE | DSI_CTRL_VIDEO_MODE_ENABLE |
        DSI_CTRL_COMMAND_MODE_ENABLE);
  MmioWrite32(DsiControlAddr, DsiControlValue);
}

VOID SetWatchdogState(BOOLEAN Enable)
{
  MmioWrite32(APSS_WDT_BASE + APSS_WDT_ENABLE_OFFSET, Enable);
}

VOID PlatformInitialize(VOID)
{
  // Disable MDSS DSI0 Controller
  // DisableMDSSDSIController(MDSS_DSI0);

  // Disable MDSS DSI1 Controller
  // DisableMDSSDSIController(MDSS_DSI1);

  // Windows requires Cache Coherency for the UFS to work at its best
  // The UFS device is currently attached to the main IOMMU on Context Bank 1
  // (Previous firmware) But said configuration is non cache coherent compliant,
  // fix it.
//  ConfigureIOMMUContextBankCacheSetting(UFS_CTX_BANK, TRUE);

  // Disable WatchDog Timer
  SetWatchdogState(FALSE);
}

#include <PiPei.h>
#include <Library/IoLib.h>
#include <Library/PcdLib.h>
#include <Library/PlatformPrePiLib.h>
#include <Library/SerialPortLib.h>
#include <Library/PrintLib.h>
#include "PlatformUtils.h"

// Based on https://github.com/Dominduchami/Nexus5XPkg
// code for reconfiguring the frame buffer on Nexus5X with MDP5
// MSM8996 also uses MDP5

#define MDP_BASE (0x900000)
#define REG_MDP(off) (MDP_BASE + (off))

#define MDP_VP_0_VIG_0_BASE REG_MDP(0x5000)
#define MDP_VP_0_VIG_1_BASE REG_MDP(0x7000)

#define PIPE_SSPP_SRC_FORMAT 0x30
#define PIPE_SSPP_SRC_UNPACK_PATTERN 0x34
#define PIPE_SSPP_SRC_YSTRIDE 0x24
#define CTL_FLUSH 0x18
#define MDP_CTL_0_BASE REG_MDP(0x600)
#define MDP_CTL_1_BASE REG_MDP(0x700)

#define MDP_VP_0_RGB_0_BASE REG_MDP(0x15000)
#define MDP_VP_0_RGB_1_BASE REG_MDP(0x17000)
#define MDP_VP_0_DMA_0_BASE REG_MDP(0x25000)
#define MDP_VP_0_DMA_1_BASE REG_MDP(0x27000)
#define MDP_VP_0_MIXER_0_BASE REG_MDP(0x45000)
#define MDP_VP_0_MIXER_1_BASE REG_MDP(0x46000)

#define MDP_PP_SYNC_CONFIG_VSYNC 0x004
#define MDP_PP_AUTOREFRESH_CONFIG 0x030
#define AUTOREFRESH_FRAMENUM 1

/*enum {
  SSPP_SRC_FORMAT_SRC_RGB565    = 0x1 << 9 | 0x1 << 4 | 0x1 << 2 | 0x2 << 0,
  SSPP_SRC_FORMAT_SRC_RGB888    = 0x2 << 9 | 0x3 << 4 | 0x3 << 2 | 0x3 << 0,
  SSPP_SRC_FORMAT_SRC_XRGB8888  = 0x3 << 9 | 0x3 << 6 | 0x3 << 4 | 0x3 << 2 | 0x3 << 0,

  SSPP_SRC_FORMAT_UNPACK_RGB    = 0x1 << 17 | 0x2 << 12,
  SSPP_SRC_FORMAT_UNPACK_XRGB   = 0x1 << 17 | 0x3 << 12,

  SSPP_SRC_UNPACK_PATTERN_RGB   = 0x0 << 24 | 0x2 << 16 | 0x0 << 8 | 0x1 << 0,
  SSPP_SRC_UNPACK_PATTERN_XRGB  = 0x3 << 24 | 0x2 << 16 | 0x0 << 8 | 0x1 << 0,
};*/

#define PIPE_SSPP_SRC0_ADDR                     0x14

/*
 * Reconfigure the framebuffer to a BGRA 32bpp one (windows requirements)
 *
 * Uses code from https://imbushuo.net/blog/archives/590/ (Little-kernel
 * section)
 *
 * TODO: Dynamically detect pipes
 */
VOID CheckMdpConfig(VOID)
{
  //UINT32 Width = FixedPcdGet32(PcdMipiFrameBufferWidth);

  /*CHAR8                       Buffer[100];
  UINTN                       CharCount;
  
  UINT32 VIG0Base = MmioRead32(MDP_VP_0_VIG_0_BASE + PIPE_SSPP_SRC0_ADDR);
  UINT32 VIG1Base = MmioRead32(MDP_VP_0_VIG_1_BASE + PIPE_SSPP_SRC0_ADDR);
  UINT32 RGB0Base = MmioRead32(MDP_VP_0_RGB_0_BASE + PIPE_SSPP_SRC0_ADDR);
  UINT32 RGB1Base = MmioRead32(MDP_VP_0_RGB_1_BASE + PIPE_SSPP_SRC0_ADDR);
  UINT32 DMA0Base = MmioRead32(MDP_VP_0_DMA_0_BASE + PIPE_SSPP_SRC0_ADDR);
  UINT32 DMA1Base = MmioRead32(MDP_VP_0_DMA_1_BASE + PIPE_SSPP_SRC0_ADDR);
  UINT32 MIXER0Base = MmioRead32(MDP_VP_0_MIXER_0_BASE + PIPE_SSPP_SRC0_ADDR);
  UINT32 MIXER1Base = MmioRead32(MDP_VP_0_MIXER_1_BASE + PIPE_SSPP_SRC0_ADDR);

  if (VIG0Base)
  {
    CharCount = AsciiSPrint (Buffer, sizeof (Buffer), "VIG0 Pipe Detected at %p\n\r", VIG0Base);
    SerialPortWrite ((UINT8 *)Buffer, CharCount);

    MmioWrite32(MDP_VP_0_VIG_0_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
    MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (3)));
  }

  if (VIG1Base)
  {
    CharCount = AsciiSPrint (Buffer, sizeof (Buffer), "VIG1 Pipe Detected at %p\n", VIG1Base);
    SerialPortWrite ((UINT8 *)Buffer, CharCount);

    MmioWrite32(MDP_VP_0_VIG_1_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
    MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (3)));
  }

  if (RGB0Base)
  {
    CharCount = AsciiSPrint (Buffer, sizeof (Buffer), "RGB0 Pipe Detected at %p\n", RGB0Base);
    SerialPortWrite ((UINT8 *)Buffer, CharCount);

    MmioWrite32(MDP_VP_0_RGB_0_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
    MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (3)));
  }

  if (RGB1Base)
  {
    CharCount = AsciiSPrint (Buffer, sizeof (Buffer), "RGB1 Pipe Detected at %p\n", RGB1Base);
    SerialPortWrite ((UINT8 *)Buffer, CharCount);

    MmioWrite32(MDP_VP_0_RGB_1_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
    MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (3)));
  }
  
  if (DMA0Base)
  {
    CharCount = AsciiSPrint (Buffer, sizeof (Buffer), "DM0 Pipe Detected at %p\n", DMA0Base);
    SerialPortWrite ((UINT8 *)Buffer, CharCount);

    MmioWrite32(MDP_VP_0_DMA_0_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
    MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (3)));
  }

  if (DMA1Base)
  {
    CharCount = AsciiSPrint (Buffer, sizeof (Buffer), "DMA1 Pipe Detected at %p\n", DMA1Base);
    SerialPortWrite ((UINT8 *)Buffer, CharCount);

    MmioWrite32(MDP_VP_0_DMA_1_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
    MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (3)));
  }
  
  if (MIXER0Base)
  {
    CharCount = AsciiSPrint (Buffer, sizeof (Buffer), "MIXER0 Pipe Detected at %p\n", MIXER0Base);
    SerialPortWrite ((UINT8 *)Buffer, CharCount);

    MmioWrite32(MDP_VP_0_MIXER_0_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
    MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (3)));
  }

  if (MIXER1Base)
  {
    CharCount = AsciiSPrint (Buffer, sizeof (Buffer), "MIXER1 Pipe Detected at %p\n", MIXER1Base);
    SerialPortWrite ((UINT8 *)Buffer, CharCount);

    MmioWrite32(MDP_VP_0_MIXER_1_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
    MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (3)));
  }*/

  MmioWrite32(MDP_VP_0_VIG_0_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
  MmioWrite32(MDP_VP_0_VIG_1_BASE + PIPE_SSPP_SRC0_ADDR, 0x80400000);
  MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, 0x40022041);
  MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, 0x20024082);

  /*// 0x000237FF
  //    0x20000 // UNPACK_TIGHT
  //     0x3000 // UNPACK_COUNT
  //      0x600 // SRC_BPP
  //      0x100 // SRCC3_EN
  //       0xc0 // SRCC3
  //       0x30 // SRCC2
  //        0xc // SRCC1
  //        0x3 // SRCC0

  // 0x000236FF
  //    0x20000 // UNPACK_TIGHT
  //     0x3000 // UNPACK_COUNT
  //      0x600 // SRC_BPP
  //       0xc0 // SRCC3
  //       0x30 // SRCC2
  //        0xc // SRCC1
  //        0x3 // SRCC0

  MmioWrite32(MDP_VP_0_VIG_0_BASE + PIPE_SSPP_SRC_FORMAT, SSPP_SRC_FORMAT_SRC_XRGB8888 | SSPP_SRC_FORMAT_UNPACK_RGB | 0x1000 | 0x100);
  MmioWrite32(MDP_VP_0_VIG_0_BASE + PIPE_SSPP_SRC_UNPACK_PATTERN, SSPP_SRC_UNPACK_PATTERN_XRGB);
  MmioWrite32(MDP_VP_0_VIG_0_BASE + PIPE_SSPP_SRC_YSTRIDE, Width * 4);
  //MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (0)));

  MmioWrite32(MDP_VP_0_VIG_1_BASE + PIPE_SSPP_SRC_FORMAT, SSPP_SRC_FORMAT_SRC_XRGB8888 | SSPP_SRC_FORMAT_UNPACK_RGB | 0x1000 | 0x100);
  MmioWrite32(MDP_VP_0_VIG_1_BASE + PIPE_SSPP_SRC_UNPACK_PATTERN, SSPP_SRC_UNPACK_PATTERN_XRGB);
  MmioWrite32(MDP_VP_0_VIG_1_BASE + PIPE_SSPP_SRC_YSTRIDE, Width * 4);
  //MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (1)));

  MmioWrite32(MDP_VP_0_RGB_0_BASE + PIPE_SSPP_SRC_FORMAT, SSPP_SRC_FORMAT_SRC_XRGB8888 | SSPP_SRC_FORMAT_UNPACK_RGB | 0x1000);
  MmioWrite32(MDP_VP_0_RGB_0_BASE + PIPE_SSPP_SRC_UNPACK_PATTERN, SSPP_SRC_UNPACK_PATTERN_XRGB);
  MmioWrite32(MDP_VP_0_RGB_0_BASE + PIPE_SSPP_SRC_YSTRIDE, Width * 4);
  //MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (3)));

  MmioWrite32(MDP_VP_0_RGB_1_BASE + PIPE_SSPP_SRC_FORMAT, SSPP_SRC_FORMAT_SRC_XRGB8888 | SSPP_SRC_FORMAT_UNPACK_RGB | 0x1000);
  MmioWrite32(MDP_VP_0_RGB_1_BASE + PIPE_SSPP_SRC_UNPACK_PATTERN, SSPP_SRC_UNPACK_PATTERN_XRGB);
  MmioWrite32(MDP_VP_0_RGB_1_BASE + PIPE_SSPP_SRC_YSTRIDE, Width * 4);
  //MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (3)));

  MmioWrite32(MDP_VP_0_DMA_0_BASE + PIPE_SSPP_SRC_FORMAT, SSPP_SRC_FORMAT_SRC_XRGB8888 | SSPP_SRC_FORMAT_UNPACK_RGB | 0x1000);
  MmioWrite32(MDP_VP_0_DMA_0_BASE + PIPE_SSPP_SRC_UNPACK_PATTERN, SSPP_SRC_UNPACK_PATTERN_XRGB);
  MmioWrite32(MDP_VP_0_DMA_0_BASE + PIPE_SSPP_SRC_YSTRIDE, Width * 4);
  //MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (3)));

  MmioWrite32(MDP_VP_0_DMA_1_BASE + PIPE_SSPP_SRC_FORMAT, SSPP_SRC_FORMAT_SRC_XRGB8888 | SSPP_SRC_FORMAT_UNPACK_RGB | 0x1000);
  MmioWrite32(MDP_VP_0_DMA_1_BASE + PIPE_SSPP_SRC_UNPACK_PATTERN, SSPP_SRC_UNPACK_PATTERN_XRGB);
  MmioWrite32(MDP_VP_0_DMA_1_BASE + PIPE_SSPP_SRC_YSTRIDE, Width * 4);
  //MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (3)));

  MmioWrite32(MDP_VP_0_MIXER_0_BASE + PIPE_SSPP_SRC_FORMAT, SSPP_SRC_FORMAT_SRC_XRGB8888 | SSPP_SRC_FORMAT_UNPACK_RGB | 0x1000);
  MmioWrite32(MDP_VP_0_MIXER_0_BASE + PIPE_SSPP_SRC_UNPACK_PATTERN, SSPP_SRC_UNPACK_PATTERN_XRGB);
  MmioWrite32(MDP_VP_0_MIXER_0_BASE + PIPE_SSPP_SRC_YSTRIDE, Width * 4);
  //MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (3)));

  MmioWrite32(MDP_VP_0_MIXER_0_BASE + PIPE_SSPP_SRC_FORMAT, SSPP_SRC_FORMAT_SRC_XRGB8888 | SSPP_SRC_FORMAT_UNPACK_RGB | 0x1000);
  MmioWrite32(MDP_VP_0_MIXER_0_BASE + PIPE_SSPP_SRC_UNPACK_PATTERN, SSPP_SRC_UNPACK_PATTERN_XRGB);
  MmioWrite32(MDP_VP_0_MIXER_0_BASE + PIPE_SSPP_SRC_YSTRIDE, Width * 4);
  //MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (3)));

  MmioWrite32(MDP_CTL_0_BASE + CTL_FLUSH, (1 << (3)));
  MmioWrite32(MDP_CTL_1_BASE + CTL_FLUSH, (1 << (3)));*/
}

/*VOID SetWatchdogState(BOOLEAN Enable)
{
  MmioWrite32(APSS_WDT_BASE + APSS_WDT_ENABLE_OFFSET, Enable);
}*/

#define FB_BGRA8888_BLACK 0xff000000
#define FB_BGRA8888_WHITE 0xffffffff
#define FB_BGRA8888_CYAN 0xff00ffff
#define FB_BGRA8888_BLUE 0xff0000ff
#define FB_BGRA8888_SILVER 0xffc0c0c0
#define FB_BGRA8888_YELLOW 0xffffff00
#define FB_BGRA8888_ORANGE 0xffffa500
#define FB_BGRA8888_RED 0xffff0000
#define FB_BGRA8888_GREEN 0xff00ff00

VOID PlatformInitialize(VOID)
{
  // Disable WatchDog Timer
  // SetWatchdogState(FALSE);

  // Fix MDP Configuration
  CheckMdpConfig();

  // Test code
  char *Pixels  = (void *)0x80400000;
  UINTN BgColor = FB_BGRA8888_CYAN;
  UINTN gBpp    = 32;

  // Set to black color.
  for (UINTN i = 0; i < 1600; i++) {
    for (UINTN j = 0; j < 2560; j++) {
      BgColor = FB_BGRA8888_CYAN;
      // Set pixel bit
      for (UINTN p = 0; p < (gBpp / 8); p++) {
        *Pixels = (unsigned char)BgColor;
        BgColor = BgColor >> 8;
        Pixels++;
      }
    }
  }
}
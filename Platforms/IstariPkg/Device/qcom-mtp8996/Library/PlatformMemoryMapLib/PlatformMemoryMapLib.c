#include <Library/BaseLib.h>
#include <Library/PlatformMemoryMapLib.h>

static ARM_MEMORY_REGION_DESCRIPTOR_EX gDeviceMemoryDescriptorEx[] = {
    /* Name               Address     Length      HobOption        ResourceAttribute    ArmAttributes
                                                          ResourceType          MemoryType */
    /* DDR Regions */
    {"DBI Dump",          0x80010000, 0x00014000, NoHob,  MMAP_IO, INITIALIZED, Conv,   NS_DEVICE},
    {"RAM Partition",     0x80024000, 0x000DC000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
    {"HLOS 1",            0x80100000, 0x00100000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
    {"RAM Partition",     0x80200000, 0x00180000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
    {"FBPT Payload",      0x80380000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, RtData, UNCACHED_UNBUFFERED},
    {"DBG2",              0x80381000, 0x00004000, AddMem, SYS_MEM, SYS_MEM_CAP, LdData, UNCACHED_UNBUFFERED},
    {"Capsule Header",    0x80385000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, RtData, UNCACHED_UNBUFFERED},
    {"TPM Control Area",  0x80386000, 0x00003000, AddMem, SYS_MEM, SYS_MEM_CAP, RtData, UNCACHED_UNBUFFERED},
    {"UEFI Info Block",   0x80389000, 0x00001000, AddMem, SYS_MEM, SYS_MEM_CAP, RtData, UNCACHED_UNBUFFERED},
    {"Reset Data",        0x8038A000, 0x00004000, AddMem, SYS_MEM, SYS_MEM_CAP, RtData, UNCACHED_UNBUFFERED},
    {"Reser. Uncached 0", 0x8038E000, 0x00072000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, UNCACHED_UNBUFFERED},
    //{"Display Reserved",  0x80400000, 0x00800000, AddMem, MEM_RES, WRITE_THROUGH, MaxMem, WRITE_THROUGH},
    {"RAM Partition",     0x80400000, 0x00800000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
    {"UEFI Stack",        0x80C00000, 0x00040000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
    {"CPU Vectors",       0x80C40000, 0x00010000, AddMem, SYS_MEM, SYS_MEM_CAP, BsCode, WRITE_BACK},
    {"Reserved Cached 0", 0x80C50000, 0x000B0000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
    //{"HLOS 2",            0x80D00000, 0x03300000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
    {"HLOS 2",            0x80D00000, 0x02701000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
    // NB: HDMI Region starts at B1C00000
    // END: 0x85800000, (size: 0x23FF000) lets set it to 0x00800000 instead...
    {"Display Reserved",  0x83401000, 0x00800000, AddMem, MEM_RES, SYS_MEM_CAP, Reserv, WRITE_THROUGH},
    {"RAM Partition",     0x83C01000, 0x003FF000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
    {"HLOS 3",            0x84000000, 0x01800000, AddMem, SYS_MEM, SYS_MEM_CAP, BsData, WRITE_BACK},
    {"HYP",               0x85800000, 0x00600000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, NS_DEVICE},
    {"MPSS_EFS",          0x85E00000, 0x00200000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, NS_DEVICE},
    {"SMEM",              0x86000000, 0x00200000, AddMem, MEM_RES, UNCACHEABLE, Reserv, UNCACHED_UNBUFFERED},
    {"TZ_STAT",           0x86200000, 0x00100000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, NS_DEVICE},
    {"TAGS",              0x86300000, 0x00100000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, NS_DEVICE},
    {"TZ",                0x86400000, 0x00200000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, NS_DEVICE},
    {"TZ Apps",           0x86600000, 0x00E00000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, NS_DEVICE},
    {"Stargate",          0x87400000, 0x01400000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, NS_DEVICE},
    {"PIL_REGION",        0x88800000, 0x09300000, AddMem, SYS_MEM, SYS_MEM_CAP, Reserv, NS_DEVICE},
    {"DXE Heap",          0x91B00000, 0x0E500000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
    {"UEFI FD",           0xA0000000, 0x00300000, AddMem, SYS_MEM, SYS_MEM_CAP, BsCode, WRITE_BACK},
    //{"HLOS 5",            0xA0300000, 0xFFFFFFFFFFFFFFFF, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

    /* RAM partition regions */
    {"RAM Partition",     0xA0300000, 0x5FB00000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},
    {"RAM Partition",    0x100000000, 0x7E450000, AddMem, SYS_MEM, SYS_MEM_CAP, Conv,   WRITE_BACK},

    /* Other memory regions */
    {"IMEM Base",         0x06680000, 0x00040000,  NoHob,  MMAP_IO, INITIALIZED, Conv,   NS_DEVICE},
    {"IMEM Cookie Base",  0x066BF000, 0x00001000,  AddDev, MMAP_IO, INITIALIZED, Conv,   NS_DEVICE},
    {"QDSS_STM",          0x08000000, 0x01000000,  AddDev, MMAP_IO, INITIALIZED, Conv,   NS_DEVICE},

    /* Register regions */
    {"RPM MSG RAM",       0x00068000, 0x00008000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"Security Ctrl",     0x00070000, 0x00010000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"PRNG_CFG_PRNG",     0x00080000, 0x00010000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"GCC CLK CTL",       0x00300000, 0x000A0000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"MPM2 MPM",          0x004A0000, 0x00040000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"UFS UFS REGS",      0x00620000, 0x00020000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"CRYPTO0 CRYPTO",    0x00640000, 0x00040000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"CORE_TOP_CSR",      0x00700000, 0x00100000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"MMSS",              0x00800000, 0x00800000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"TLMM CSR",          0x01000000, 0x00310000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"QDSS_QDSS",         0x03000000, 0x00800000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"PMIC ARB SPMI",     0x04000000, 0x01C00000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"HMSS_QLL",          0x06400000, 0x00200000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"USB30_PRIM",        0x06A00000, 0x00200000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"COPSS_ISTARI",      0x07400000, 0x00400000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"HMSS",              0x09800000, 0x00800000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"PCIE WRAPPER AXI",  0x0C000000, 0x04000000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"PCIE WRAPPER AHB",  0x00600000, 0x00018000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"PCIE PHY",          0x00034000, 0x00004000,  AddDev, MMAP_IO, UNCACHEABLE, MmIO,   NS_DEVICE},
    {"IMEM Base",         0x14680000, 0x00040000,  NoHob,  MMAP_IO, INITIALIZED, Conv,   NS_DEVICE},
    {"IMEM Cookie Base",  0x146BF000, 0x00001000,  AddDev, MMAP_IO, INITIALIZED, Conv,   NS_DEVICE},
    {"QDSS_STM",          0x16000000, 0x01000000,  AddDev, MMAP_IO, INITIALIZED, Conv,   NS_DEVICE},

    /* Terminator for MMU */
    {"Terminator", 0, 0, 0, 0, 0, 0, 0}};

ARM_MEMORY_REGION_DESCRIPTOR_EX *GetPlatformMemoryMap()
{
  return gDeviceMemoryDescriptorEx;
}

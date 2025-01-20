#ifndef _XBL_HLOS_HOB_H_
#define _XBL_HLOS_HOB_H_

typedef enum {
  PLATFORM_SUBTYPE_UNKNOWN         = 0x0,
  PLATFORM_SUBTYPE_CHARM           = 0x1,
  PLATFORM_SUBTYPE_STRANGE         = 0x2,
  PLATFORM_SUBTYPE_STRANGE_2A      = 0x3,
  PLATFORM_SUBTYPE_EV1_A           = 0x06,
  PLATFORM_SUBTYPE_EV1_B           = 0x07,
  PLATFORM_SUBTYPE_EV1_C           = 0x08,
  PLATFORM_SUBTYPE_EV1_5_A         = 0x09,
  PLATFORM_SUBTYPE_EV1_5_B         = 0x0a,
  PLATFORM_SUBTYPE_EV2_A           = 0x0b,
  PLATFORM_SUBTYPE_EV2_B           = 0x0c,
  PLATFORM_SUBTYPE_EV2_1_A         = 0x0d,
  PLATFORM_SUBTYPE_EV2_1_B         = 0x0e,
  PLATFORM_SUBTYPE_EV2_1_C         = 0x0f,
  PLATFORM_SUBTYPE_DV_A_ALIAS_MP_A = 0x10,
  PLATFORM_SUBTYPE_DV_B_ALIAS_MP_B = 0x11,
  PLATFORM_SUBTYPE_DV_C_ALIAS_MP_C = 0x12,
  PLATFORM_SUBTYPE_INVALID,
}sboard_id_t;

#pragma pack(1)
#define MCFG_MODE 0
#define CUST_MODE 1
#define MAX_VERSION_LEN 16

// Note: Need to take care alignment of struct member
typedef struct XBL_HLOS_HOB
{
    UINT8 BoardID;                          // (00)
    UINT8 BatteryPresent;                   // (01) Indicates battery presence: 0 - battery absent, 1 - battery present
    UINT8 HwInitRetries;                    // (02) Indicates retries attempted to initialize descrete hardware circuit
    UINT8 IsCustomerMode;                   // (03) Indicates whether the device is in Manufacturing Mode: 0 - in manuf mode, 1 - in Customer mode
    UINT8 IsActMode;                        // (04) Indicates whether device has act mode enabled. 0 - disabled 1 - enabled
    UINT8 PmicResetReason;                  // (05) PmicResetReason: 9 - battery driver triggered
    CHAR8 TouchFWVersion[MAX_VERSION_LEN];  // (06) Current Touch Firmware version number
    UINT16 OCPErrorLocation;                // (07) Identify which power rail has the OCP Error
                                            //      Bit(s)     Meaning
                                            //      15         More than one OCP error occurred
                                            //      14-12      PMIC
                                            //      11-7       SMPS
                                            //      6-2        LDO
                                            //      1-0        BOB
} *PXBL_HLOS_HOB;

#pragma pack()

#endif /* _XBL_HLOS_HOB_H_ */
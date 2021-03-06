//
//  FDFireflyFlashEFM32.h
//  FireflyProduction
//
//  Created by Denis Bohm on 8/20/14.
//  Copyright (c) 2014 Firefly Design. All rights reserved.
//

#import "FDFireflyFlash.h"

// Device Information Page Values
#define EFM32_MEM_INFO_PAGE_SIZE 0x0FE081E7
#define EFM32_UNIQUE_0 0x0FE081F0
#define EFM32_UNIQUE_1 0x0FE081F4
#define EFM32_MEM_INFO_RAM 0x0FE081FA
#define EFM32_MEM_INFO_FLASH 0x0FE081F8
#define EFM32_PART_NUMBER 0x0FE081FC
#define EFM32_PART_FAMILY 0x0FE081FE
#define EFM32_PROD_REV 0x0FE081FF

#define EFM32_PART_FAMILY_Gecko 71
#define EFM32_PART_FAMILY_Giant_Gecko 72
#define EFM32_PART_FAMILY_Tiny_Gecko 73
#define EFM32_PART_FAMILY_Leopard_Gecko 74

#define EFM32_RAM_ADDRESS 0x20000000

#define EFM32_WDOG 0x40088000
#define EFM32_WDOG_CTRL (EFM32_WDOG + 0x00)
#define EFM32_WDOG_CMD (EFM32_WDOG + 0x04)
#define EFM32_WDOG_SYNCBUSY (EFM32_WDOG + 0x08)

#define EFM32_WDOG_CTRL_DEFAULT 0x00000f00

#define EFM32_WDOG_CTRL_EN 0x00000001
#define EFM32_WDOG_CTRL_DEBUGRUN 0x00000002
#define EFM32_WDOG_CTRL_EMP2RUN 0x00000004
#define EFM32_WDOG_CTRL_EMP3RUN 0x00000008
#define EFM32_WDOG_CTRL_LOCK 0x00000010
#define EFM32_WDOG_CTRL_EMB4BLOCK 0x00000020
#define EFM32_WDOG_CTRL_SWOSCBLOCK 0x00000040

#define EFM32_WDOG_CMD_CLEAR 0x00000001

// User Data Page
#define EFM32_UD 0x0FE00000
// Lock Bits
#define EFM32_LB 0x0FE04000
#define EFM32_LB_DLW (EFM32_LB + 127 * 4)
#define EFM32_LB_ULW (EFM32_LB + 126 * 4)
#define EFM32_LB_PLW(n) (EFM32_LB + (n) * 4)

@interface FDFireflyFlashEFM32 : FDFireflyFlash

@property uint8_t family;
@property uint32_t flashSize;

@end

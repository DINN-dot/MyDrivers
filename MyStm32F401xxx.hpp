#include <stdint.h>

//ARM-Cortex Address
//ICR
const uint32_t ICTR_BASE_ADDRESS            =(0xE000E004);
const uint32_t NVIC_ISER_0_7_BASE_ADDRESS   =(0xE000E100);
const uint32_t NVIC_ISPR_0_7_BASE_ADDRESS   =(0xE000E200);
const uint32_t NVIC_ICPR_0_7_BASE_ADDRESS   =(0xE000E280);
const uint32_t NVIC_IABR_0_7_BASE_ADDRESS   =(0xE000E300);
const uint32_t NVIC_IPR_0_7_BASE_ADDRESS    =(0xE000E400);
//AHB1
const uint32_t GPIOA_BASE_ADDRESS       =(0x40020000);
const uint32_t GPIOB_BASE_ADDRESS       =(0x40020400);
const uint32_t GPIOC_BASE_ADDRESS       =(0x40020800);
const uint32_t GPIOD_BASE_ADDRESS       =(0x40020C00);
const uint32_t GPIOE_BASE_ADDRESS       =(0x40021000);
const uint32_t GPIOH_BASE_ADDRESS       =(0x40021C00);
const uint32_t CRC_BASE_ADDRESS         =(0x40023000);
const uint32_t RCC_BASE_ADDRESS         =(0x40023800);
const uint32_t DMA1_BASE_ADDRESS        =(0x40026000);
const uint32_t DMA2_BASE_ADDRESS        =(0x40026400);
//AHB2
const uint32_t USB_OTG_FS_BASE_ADDRESS  =(0x50000000);
//APB1
const uint32_t TIM2_BASE_ADDRESS        =(0x40000000);
const uint32_t TIM3_BASE_ADDRESS        =(0x40000400);
const uint32_t TIM4_BASE_ADDRESS        =(0x40000800);
const uint32_t TIM5_BASE_ADDRESS        =(0x40000C00);
const uint32_t RTC_BKP_BASE_ADDRESS     =(0x40002800);
const uint32_t WWDG_BASE_ADDRESS        =(0x40002C00);
const uint32_t IWDG_BASE_ADDRESS        =(0x40003000);
const uint32_t I2S2EXT_BASE_ADDRESS     =(0x40003400);
const uint32_t SPI2_I2S2_BASE_ADDRESS   =(0x40003800);
const uint32_t SPI3_I2S3_BASE_ADDRESS   =(0x40003C00);
const uint32_t I2S3EXT_BASE_ADDRESS     =(0x40004000);
const uint32_t USART2_BASE_ADDRESS      =(0x40004400);
const uint32_t I2C1_BASE_ADDRESS        =(0x40005400);
const uint32_t I2C2_BASE_ADDRESS        =(0x40005800);
const uint32_t I2C3_BASE_ADDRESS        =(0x40005C00);
const uint32_t PWR_BASE_ADDRESS         =(0x40007000);
//APB2
const uint32_t TIM1_BASE_ADDRESS        =(0x40010000);
const uint32_t USART1_BASE_ADDRESS      =(0x40011000);
const uint32_t USART6_BASE_ADDRESS      =(0x40011400);
const uint32_t ADC1_BASE_ADDRESS        =(0x40012000);
const uint32_t SDIO_BASE_ADDRESS        =(0x40012C00);
const uint32_t SPI1_BASE_ADDRESS        =(0x40013000);
const uint32_t SPI4_BASE_ADDRESS        =(0x40013400);
const uint32_t SYSCFG_BASE_ADDRESS      =(0x40013800);
const uint32_t EXTI_BASE_ADDRESS        =(0x40013C00);
const uint32_t TIM9_BASE_ADDRESS        =(0x40014000);
const uint32_t TIM10_BASE_ADDRESS       =(0x40014400);
const uint32_t TIM11_BASE_ADDRESS       =(0x40014800);

//Structs
//ARM 
struct ArmNvicIserStruct
{
    uint32_t ARM_NVIC_ISER_0;
    uint32_t ARM_NVIC_ISER_1;
    uint32_t ARM_NVIC_ISER_2;
    uint32_t ARM_NVIC_ISER_3;
    uint32_t ARM_NVIC_ISER_4;
    uint32_t ARM_NVIC_ISER_5;
    uint32_t ARM_NVIC_ISER_6;
    uint32_t ARM_NVIC_ISER_7;
};
struct ArmNvicIsprStruct
{
    uint32_t ARM_NVIC_ISPR_0;
    uint32_t ARM_NVIC_ISPR_1;
    uint32_t ARM_NVIC_ISPR_2;
    uint32_t ARM_NVIC_ISPR_3;
    uint32_t ARM_NVIC_ISPR_4;
    uint32_t ARM_NVIC_ISPR_5;
    uint32_t ARM_NVIC_ISPR_6;
    uint32_t ARM_NVIC_ISPR_7;
};

struct ArmNvicIcprStruct
{
    uint32_t ARM_NVIC_ICPR_0;
    uint32_t ARM_NVIC_ICPR_1;
    uint32_t ARM_NVIC_ICPR_2;
    uint32_t ARM_NVIC_ICPR_3;
    uint32_t ARM_NVIC_ICPR_4;
    uint32_t ARM_NVIC_ICPR_5;
    uint32_t ARM_NVIC_ICPR_6;
    uint32_t ARM_NVIC_ICPR_7;
};

struct ArmNvicIabrStruct
{
    uint32_t ARM_NVIC_IABR_0;
    uint32_t ARM_NVIC_IABR_1;
    uint32_t ARM_NVIC_IABR_2;
    uint32_t ARM_NVIC_IABR_3;
    uint32_t ARM_NVIC_IABR_4;
    uint32_t ARM_NVIC_IABR_5;
    uint32_t ARM_NVIC_IABR_6;
    uint32_t ARM_NVIC_IABR_7;
};

struct ArmNvicIprStruct
{
    uint32_t ARM_NVIC_Ipr_0;
    uint32_t ARM_NVIC_Ipr_1;
    uint32_t ARM_NVIC_Ipr_2;
    uint32_t ARM_NVIC_Ipr_3;
    uint32_t ARM_NVIC_Ipr_4;
    uint32_t ARM_NVIC_Ipr_5;
    uint32_t ARM_NVIC_Ipr_6;
    uint32_t ARM_NVIC_Ipr_7;
};

const uint32_t *    const NVIC_ICTR     =   reinterpret_cast<uint32_t*>(ICTR_BASE_ADDRESS);
ArmNvicIserStruct * const NVIC_ISER     =   reinterpret_cast<ArmNvicIserStruct*>(NVIC_ISER_0_7_BASE_ADDRESS);
ArmNvicIsprStruct * const NVIC_ISPR     =   reinterpret_cast<ArmNvicIsprStruct*>(NVIC_ISPR_0_7_BASE_ADDRESS);
ArmNvicIcprStruct * const NVIC_ICPR     =   reinterpret_cast<ArmNvicIcprStruct*>(NVIC_ICPR_0_7_BASE_ADDRESS);
ArmNvicIabrStruct * const NVIC_IABR     =   reinterpret_cast<ArmNvicIabrStruct*>(NVIC_IABR_0_7_BASE_ADDRESS);
ArmNvicIprStruct *  const NVIC_IPR      =   reinterpret_cast<ArmNvicIprStruct*>(NVIC_IPR_0_7_BASE_ADDRESS);


//STM
struct RccStruct
{
    uint32_t CR;
    uint32_t PLLCFGR;
    uint32_t CFGR;
    uint32_t CIR;
    uint32_t AHB1RSTR;
    uint32_t AHB2RSRT;
    uint32_t RESERVED0;
    uint32_t RESERVED1;
    uint32_t APB1RSTR;
    uint32_t APB2RSTR;
    uint32_t RESERVED2;
    uint32_t RESERVED3;
    uint32_t AHB1ENR;
    uint32_t AHB2ENR;
    uint32_t RESERVED4;
    uint32_t RESERVED5;
    uint32_t APB1ENR;
    uint32_t APB2ENR;
    uint32_t RESERVED6;
    uint32_t RESERVED7;
    uint32_t AHB1LPENR;
    uint32_t AHB2LPENR;
    uint32_t RESERVED8;
    uint32_t RESERVED9;
    uint32_t APB1LPENR;
    uint32_t APB2LPENR;
    uint32_t RESERVED10;
    uint32_t RESERVED11;
    uint32_t BDCR;
    uint32_t CSR;
    uint32_t RESERVED12;
    uint32_t RESERVED13;
    uint32_t SSCGR;
    uint32_t PLLI2SCFGR;
};

RccStruct * const RCC = reinterpret_cast<RccStruct*>(RCC_BASE_ADDRESS);
//GPIO
struct GpioStruct
{
    uint32_t MODER;
    uint32_t OTYPER;
    uint32_t OSPEEDR;
    uint32_t PUPDR;
    uint32_t IDR;
    uint32_t ODR;
    uint32_t BSRR;
    uint32_t LCKR;
    uint32_t AFLR;
    uint32_t AFHR;
};

GpioStruct * const GPIOA = reinterpret_cast<GpioStruct*>(GPIOA_BASE_ADDRESS);
GpioStruct * const GPIOB = reinterpret_cast<GpioStruct*>(GPIOB_BASE_ADDRESS);
GpioStruct * const GPIOC = reinterpret_cast<GpioStruct*>(GPIOC_BASE_ADDRESS);
GpioStruct * const GPIOD = reinterpret_cast<GpioStruct*>(GPIOD_BASE_ADDRESS);
GpioStruct * const GPIOE = reinterpret_cast<GpioStruct*>(GPIOE_BASE_ADDRESS);
GpioStruct * const GPIOH = reinterpret_cast<GpioStruct*>(GPIOH_BASE_ADDRESS);
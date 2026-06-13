
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

struct RccStruct
{
    uint32_t RCC_CR;
    uint32_t RCC_PLLCFGR;
    uint32_t RCC_CFGR;
    uint32_t RCC_CIR;
    uint32_t RCC_AHB1RSTR;
    uint32_t RCC_AHB2RSRT;
    uint32_t RESERVED0;
    uint32_t RESERVED1;
    uint32_t RCC_APB1RSTR;
    uint32_t RCC_APB2RSTR;
    uint32_t RESERVED2;
    uint32_t RESERVED3;
    uint32_t RCC_AHB1ENR;
    uint32_t RCC_AHB2ENR;
    uint32_t RESERVED4;
    uint32_t RESERVED5;
    uint32_t RCC_APB1ENR;
    uint32_t RCC_APB2ENR;
    uint32_t RESERVED6;
    uint32_t RESERVED7;
    uint32_t RCC_AHB1LPENR;
    uint32_t RCC_AHB2LPENR;
    uint32_t RESERVED8;
    uint32_t RESERVED9;
    uint32_t RCC_APB1LPENR;
    uint32_t RCC_APB2LPENR;
    uint32_t RESERVED10;
    uint32_t RESERVED11;
    uint32_t RCC_BDCR;
    uint32_t RCC_CSR;
    uint32_t RESERVED12;
    uint32_t RESERVED13;
    uint32_t RCC_SSCGR;
    uint32_t RCC_PLLI2SCFGR;
}
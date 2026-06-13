#include <MyMain.h>
#include <MyStm32F401xxx.hpp>


void myMain(void)
{

    RCC->AHB1ENR    |=  0b1<<1;
    GPIOB->MODER    &=  ~(0b1<<24);
    GPIOB->MODER    |=  (0b1<<24);
    GPIOB->BSRR     |=  0b1<<12*2;
};


void SystemInit(void)
{

}
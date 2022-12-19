/*
	A simple blink program built for stm32f103 on a blue pill board or alike
*/

#include<regs/rcc.h>
#include<regs/gpio.h>

void delay_for(volatile int clocks)
{
	while(clocks--)
	{
		asm("nop");
	}
}

void main(void)
{
	RCC->RCC_AHB1ENR |= (1 << 2);

	GPIOC->GPIO_MODER |= (1 << (13 * 2));
	
	while(1)
	{
		GPIOC->GPIO_ODR ^= (1 << 13);
		delay_for(300000);
	}
}
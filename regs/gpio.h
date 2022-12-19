#ifndef GPIO_REGS_H
#define GPIO_REGS_H

#include<stdint.h>

typedef struct GPIO_t GPIO_t;
struct GPIO_t
{
	uint32_t GPIO_MODER;
	uint32_t GPIO_OTYPER;
	uint32_t GPIO_OSPEEDR;
	uint32_t GPIO_PUPDR;
	uint32_t GPIO_IDR;
	uint32_t GPIO_ODR;
	uint32_t GPIO_BSRR;
	uint32_t GPIO_LCKR;
	uint32_t GPIO_AFRL;
	uint32_t GPIO_AFRH;
};

#define GPIOA ((volatile GPIO_t*)(0x40020000))
#define GPIOB ((volatile GPIO_t*)(0x40020400))
#define GPIOC ((volatile GPIO_t*)(0x40020800))
#define GPIOD ((volatile GPIO_t*)(0x40020C00))
#define GPIOE ((volatile GPIO_t*)(0x40021000))
#define GPIOH ((volatile GPIO_t*)(0x40021C00))

#endif
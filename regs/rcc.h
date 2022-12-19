#ifndef RCC_REGS_H
#define RCC_REGS_H

#include<stdint.h>

typedef struct RCC_t RCC_t;
struct RCC_t
{
	uint32_t RCC_CR;
	uint32_t RCC_PLLCFGR;
	uint32_t RCC_CFGR;
	uint32_t RCC_CIR;
	uint32_t RCC_AHB1RSTR;
	uint32_t RCC_AHB2RSTR;

	uint32_t RESERVED_0;
	uint32_t RESERVED_1;

	uint32_t RCC_APB1RSTR;
	uint32_t RCC_APB2RSTR;

	uint32_t RESERVED_2;
	uint32_t RESERVED_3;

	uint32_t RCC_AHB1ENR;
	uint32_t RCC_AHB2ENR;

	uint32_t RESERVED_4;
	uint32_t RESERVED_5;

	uint32_t RCC_APB1ENR;
	uint32_t RCC_APB2ENR;

	uint32_t RESERVED_6;
	uint32_t RESERVED_7;

	uint32_t RCC_AHB1LPENR;
	uint32_t RCC_AHB2LPENR;

	uint32_t RESERVED_8;
	uint32_t RESERVED_9;

	uint32_t RCC_APB1LPENR;
	uint32_t RCC_APB2LPENR;

	uint32_t RESERVED_10;
	uint32_t RESERVED_11;

	uint32_t RCC_BDCR;
	uint32_t RCC_CSR;

	uint32_t RESERVED_12;
	uint32_t RESERVED_13;

	uint32_t RCC_SSCGR;
	uint32_t RCC_PLLI2SCFGR;

	uint32_t RESERVED_14;

	uint32_t RCC_DCKCFGR;
};

#define RCC ((volatile RCC_t*)(0x40023800))

#endif
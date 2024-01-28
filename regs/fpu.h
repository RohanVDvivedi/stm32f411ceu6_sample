#ifndef FPU_H
#define FPU_H

#include<stdint.h>

typedef struct FPU_t FPU_t;
struct FPU_t
{
	uint32_t FPU_CPACR;
    uint32_t dummy1[107];
	uint32_t FPU_FPCCR;
	uint32_t FPU_FPCAR;
	uint32_t FPU_FPDSCR;
};

#define FPU ((volatile FPU_t*)(0xE000ED88))

#endif
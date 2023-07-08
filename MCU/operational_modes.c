/**
 ******************************************************************************
 * @file           : operational_modes.c
 * @author         : Brati
 * @brief          : Here we have practically seen the operational modes
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include<stdio.h>
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

void generate_interrupt()
{
   uint32_t *pSTIR=(uint32_t *)0xE000EF00;
   uint32_t *pISER0=(uint32_t *)0xE000E100;

//Enable IRQ3
   *pISER0 |=(1<<3);

//generate an interrupt from software for IRQ3
   *pSTIR=(3&0x1FF);
}

void RTC_WKUP_IRQHandler(void)
{
   printf("I'm in Handler Mode\n");
}


int main(void)
{
	printf("I,m in thread mode : Before interrupts\n");
	generate_interrupt();
	printf("I,m in thread mode : After interrupts\n");
    /* Loop forever */
	for(;;);
}
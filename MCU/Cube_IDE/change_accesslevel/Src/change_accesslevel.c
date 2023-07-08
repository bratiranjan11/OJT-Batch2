/**
 ******************************************************************************
 * @file           : change_accesslevel.c
 * @author         : Brati
 * @brief          : Here we have seen how to change the access level from PAL to NPAL 
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

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

void generate_interrupt()
{

   uint32_t *pSTIR=(uint32_t *)0xE000EF00; //This are some arm cortex M4 processors system control register addresses which can only be accessed in PAL any attempt to change the contents of this registers from being in NPAL will cause a Processor fault exception.
   uint32_t *pISER0=(uint32_t *)0xE000E100;

//Enable IRQ3
   *pISER0 |=(1<<3);
   printf("Pin NO.");
//generate an interrupt from software for IRQ3
   *pSTIR=(3&0x1FF);
}

void change_accesslevel_pri()
{
//	int control_reg=0;
	__asm volatile("MRS R0,FAULTMASK");
	__asm volatile("AND R0,R0,#0x00");
	__asm volatile("MSR CONTROL,R0");
	//__asm volatile("MSR CONTROL,R0");

}
void change_accesslevel_unpri()
{
	__asm volatile("MRS R0,CONTROL");
	__asm volatile("ORR R0,R0,#0x01");
	__asm volatile("MSR CONTROL,R0");
}

void RTC_WKUP_IRQHandler(void)
{
   printf("I'm in Handler Mode\n");
}


int main(void)
{
	printf("I,m in thread mode : Before interrupts\n");
	change_accesslevel_unpri();
	change_accesslevel_pri();
	generate_interrupt();
	printf("I,m in thread mode : After interrupts\n");
    /* Loop forever */
	for(;;);
}

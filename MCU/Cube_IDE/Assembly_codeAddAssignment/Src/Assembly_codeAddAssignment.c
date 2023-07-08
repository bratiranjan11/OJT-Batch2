/**
 ******************************************************************************
 * @file           : Assembly_codeAddAssignment.c
 * @author         : Brati
 * @brief          : Add two numbers in a single line using proper syntax
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

int main(void)

{
//	__asm volatile("LDR R1, =#0x20001000\n\t"
//				   "LDR R2, =#0x20001004\n\t"
//				   "LDR R0, [R1]\n\t"
//				   "LDR R1, [R2]\n\t"
//				   "ADD R0, R1\n\t"
//				   "STR R1, [R3]\n\t");
	int val1=2,val2=4,res=0;

	__asm volatile("ADD %0,%1,%2":"=r"(res):"r"(val1),"r"(val2));

    /* Loop forever */
	for(;;);
}

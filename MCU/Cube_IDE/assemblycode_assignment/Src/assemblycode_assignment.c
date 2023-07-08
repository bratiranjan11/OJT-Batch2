/**
 ******************************************************************************
 * @file           : assemblycode_assignment.c
 * @author         : Brati
 * @brief          : Assignment of assembly code
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

int main(void)
{
	//INPUT OPERAND EXAMPLE

	//int val=40;
	//__asm volatile("MOV R0,%0"::"r"(0x50));
	//__asm volatile("MOV R0,%0"::"i"(0x50));


		//OUTPUT OPERAND EXAMPLE

//	int control_reg;
//	__asm volatile("MRS %0,CONTROL":"=r"(control_reg));

		//BOTH INPUT AND OUTPUT

//	int val1=20,val2;
//	__asm volatile("MOV %1,%1":"=r"(val2):"r"(val1));


	    //COPY THE CONTENT OF POINTER INTO ANOYHER VARIABLE


	int p1,*p2;
	p2=(int *)0x20000008;
	__asm volatile("LDR %0,[%1]":"=r"(p1):"r"(p2));



	    //RESET SEQUENCE OF THE CORTEX M4 PROCESSOR

/* After reset the PC is loaded with the address of 0x00000000.
 * Processor reads the value at 0x00000000 location into MSP.
 * Processor reads the address of the rest handler from the location 0x00000004.
 * Then you can call the main function from the rest handler.
 */




    /* Loop forever */
	for(;;);
}

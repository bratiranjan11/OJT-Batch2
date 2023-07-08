/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : EXTI_RegisterProgramming.c
  * @brief          : Done External Interrupts using register Programming.
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
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

void EXTI15_10_IRQHandler(void)
{
	GPIOA->ODR ^= 0x20;
	for(int i=0;i<30000;i++);
	//HAL_Delay(5);

	EXTI->PR |= 0x2000;
}

int main()
{
	__disable_irq();

	RCC->AHB1ENR |= 0x5;
	GPIOA->MODER |= 0x400;
	RCC->APB2ENR |= 0x4000;
	SYSCFG->EXTICR[3] |= 0x20;
	EXTI->IMR |= 0x2000;
	EXTI->FTSR |= 0x2000;
	NVIC_EnableIRQ(EXTI15_10_IRQn);
	__enable_irq();
	while(1);

}



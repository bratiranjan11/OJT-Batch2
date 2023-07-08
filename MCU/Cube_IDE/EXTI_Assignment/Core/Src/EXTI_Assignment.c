/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : EXTI_Assignment.c
  * @brief          :Examples of External Interrupts
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

void EXTI9_5_IRQHandler(void)
{
	GPIOA->ODR ^= 0x80;
	for(int i=0;i<30000;i++);
	//HAL_Delay(5);

	EXTI->PR |= 0x400;
}

int main()
{
	__disable_irq();

	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0x4000;
	RCC->APB2ENR |= 0x4000;
	SYSCFG->EXTICR[1] |= 0x00;
	EXTI->IMR |= 0x40;
	EXTI->FTSR |= 0x40;
	NVIC_EnableIRQ(EXTI9_5_IRQn);
	__enable_irq();
	while(1);

}



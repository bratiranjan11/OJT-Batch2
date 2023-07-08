/* APPLICATION:- To toggle LED's using different GPIO pins with register programming
 *
 * STEPS:
 * 1) First i had Enable the AHB1 bus and selected the required GPIO port
 * 2) Then after i had selected pin number and set mode to output
 * 3) After that in an infinite loop i had toggled using GPIOx_ODR intsruction
 *
 *
 * AUTHOR:- Bratiranjan Acharya
 **/

#include "main.h"
void delay(int T)
{
	int i;
	while(T--)
	{
	for(i=0;i<4000;i++);
	}
}

int main()
{
	/* This is for PA5 toggle*/
//	RCC->AHB1ENR |= 0x1;
//	GPIOA->MODER |= 0x400;
//	while(1)
//	{
//		GPIOA->ODR |= 0x20;
//		delay(1000);
//		GPIOA->ODR &= !(0x20);
//		delay(1000);
//	}

	/* This is for PA6 toggle*/
//	RCC->AHB1ENR |= 0x1;
//	GPIOA->MODER |= 0x1000;
//	while(1)
//	{
//		GPIOA->ODR |= 0x40;
//		delay(1000);
//		GPIOA->ODR &= !(0x40);
//		delay(1000);
//
//	}

	/* This is for PB6 toggle*/
//	RCC->AHB1ENR |= 0x2;
//	GPIOB->MODER |= 0x1000;
//	while(1)
//	{
//		GPIOB->ODR |= 0x40;
//		delay(1000);
//		GPIOB->ODR &= !(0x40);
//		delay(1000);
//
//	}

	/* This is for PC6 toggle*/

//	RCC->AHB1ENR |= 0x4;
//	GPIOC->MODER |= 0x1000;
//	while(1)
//	{
//		GPIOC->ODR |= 0x40;
//		delay(1000);
//		GPIOC->ODR &= !(0x40);
//		delay(1000);
//	}

	/* This is for PB6 and PC6 and PA6 toggle*/
	RCC->AHB1ENR |= 0x2;
	RCC->AHB1ENR |= 0x4;
	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0x1000;
	GPIOB->MODER |= 0x1000;
	GPIOC->MODER |= 0x1000;
	while(1)
		{
			GPIOB->ODR |= 0x40;
			delay(1000);
			GPIOB->ODR &= !(0x40);
			delay(1000);
			GPIOC->ODR |= 0x40;
			delay(500);
			GPIOC->ODR &= !(0x40);
			delay(500);
			GPIOA->ODR |= 0x40;
			delay(1000);
			GPIOA->ODR &= !(0x40);
			delay(1000);
		}

}

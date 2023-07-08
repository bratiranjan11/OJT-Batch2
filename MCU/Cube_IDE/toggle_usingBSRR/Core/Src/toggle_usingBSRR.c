/* APPLICATION:- To toggle LED's using BSRR Register.
 * STEPS:
 * 1) First i had Enable the AHB1 bus and selected the required GPIO port.
 * 2) Then after i had selected pin number and set mode to output.
 * 3) After that in an infinite loop i had toggled using GPIOx_BSRR Register.
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
	/*To toggle LED's using BSRR Register*/
//	RCC->AHB1ENR |= 0x1;
//	GPIOA->MODER |= 0x400;
//
//	while(1)
//	{
//		GPIOA->BSRR |= 0x20;
//		delay(250);
//		GPIOA->BSRR |= 0x200000;
//		delay(250);
//	}

	/*To  configure the button*/
	RCC->AHB1ENR |= 0x1;
	RCC->AHB1ENR |= 0x4;
	GPIOA->MODER |= 0x400;
	GPIOC->MODER |= 0x0;
	if(!(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)))
	{
		GPIOA->BSRR |= 0x20;
		delay(200);
		GPIOA->BSRR |= 0x200000;
		delay(200);
	}
	else
	{
		GPIOA->BSRR |= 0x200000;
	}
}

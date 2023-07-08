/* APPLICATION:- To toggle LED's On button press.
 * 1) First i had Enable the AHB1 bus and selected the required GPIOA and GPIOC port for LED2 on board and for button.
 * 2) Then after i had selected pin number and set mode to output of PA5.
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
	int b;
	RCC->AHB1ENR |= 0x1;
	RCC->AHB1ENR |= 0x4;
	GPIOA->MODER |= 0x400;
//	GPIOC->MODER |= 0x0;
	//if(!(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)))
	while(1){
//	b=GPIOC->IDR |= 0x2000;
//	if(b==0)
	if(!(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)))
	{
		GPIOA->BSRR |= 0x20;
		delay(200);
//		GPIOA->BSRR |= 0x200000;
//		delay(200);
	}
	else
	{
		GPIOA->BSRR |= 0x200000;
	}
	}
}

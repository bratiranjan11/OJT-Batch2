/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ****************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
//#define GPIOAEN (1u)
void delay(int T)
{
	int i;
	while(T--)
	{
	for(i=0;i<4000;i++);
	}
}
__io_putchar(unsigned char dat)
{
	uint32_t *USART2SR =(uint32_t *)0x40004400;//Enable Status register
	uint32_t *USART2DR =(uint32_t *)0x40004404;//Enable Data Register

		while(!(*USART2SR & 0x80));//TXE pin enabled
		*USART2DR = (dat & 0xff);//Data transmitted Through DATA REGISTER
		delay(200);

	}

int main(void)
{
	uint32_t *portaAHB1ENR =(uint32_t *)0x40023830;//Enabled Port
	uint32_t *portaAPB1ENR =(uint32_t *)0x40023840;//Enable Bus for USART2
	uint32_t *portaMODER =(uint32_t *)0x40020000;//Enable GPIOA Moder
	uint32_t *portaAFRL =(uint32_t *)0x40020020;//Enable GPIOA Alternate function register Low
	uint32_t *USART2CR1 =(uint32_t *)0x4000440c;//Enable USART2 Control Register
	uint32_t *USART2BRR =(uint32_t *)0x40004408;//Enable USART2 Baud Rate Register
	uint32_t *USART2SR =(uint32_t *)0x40004400;//Enable Status register
	uint32_t *USART2DR =(uint32_t *)0x40004404;//Enable Data Register



	*portaAHB1ENR |= 0x01;//AHB1 and GPIOA Enabled
	*portaAPB1ENR |= 0x20000;//APB1 and USART2 Enabled
	*portaMODER |= 0xA0;//MODER set to Alternate function
	*portaAFRL |= 0x7700;//USART2tx And USART2rx Enabled
	*USART2CR1 |= 0x2000;//USART ENABLED
	*USART2CR1 |= 0xc;//RE TE Enabled
	*USART2BRR |= 0x683;//BAUD Rate Set to 9600
	while(1)
	{
//	unsigned char dat ='B';
//	while(!(*USART2SR & 0x80));//TXE pin enabled
//	*USART2DR = (dat & 0xff);//Data transmitted Through DATA REGISTER
//	delay(200);

		printf("Hello WOrld\r\n");
	}


    /* Loop forever */
	for(;;);
}
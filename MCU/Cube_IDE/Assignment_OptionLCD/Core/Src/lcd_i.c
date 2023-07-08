/*
 * lcd_i.c
 *
 *  Created on: Apr 24, 2023
 *      Author: PHY202302EF31
 */




#include "main.h"

void print(unsigned char dat)
{
	///////0

	if((dat&0x1)==0x1)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, SET);

	}
	else
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
	}
	////////1
	if((dat&0x2)==0x2)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
	}
	else
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
	}
	////////2
	if((dat&0x4)==0x4)
		{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
		}
		else
		{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
		}
	////////3
	if((dat&0x8)==0x8)
		{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
		}
		else
		{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
		}
	////////4
	if((dat&0x10)==0x10)
		{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		}
		else
		{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
		}
	////////5
	if((dat&0x20)==0x20)
		{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		}
		else
		{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		}
	////////6
	if((dat&0x40)==0x40)
		{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		}
		else
		{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		}
	////////7
	if((dat&0x80)==0x80)
		{
			HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, SET);
		}
		else
		{
			HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, RESET);
		}

}
void lcd_cmd(unsigned char cmd)
{
	print(cmd);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);//REG SELECT PIN
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);//READ WRITE PIN
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);// ENABLE PIN
	HAL_Delay(100);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);// ENABLE PIN

}
void lcd_data(unsigned char mydat)
{
	print(mydat);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
	HAL_Delay(100);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);



}
void lcd_init()
{
	lcd_cmd(0x38);
	lcd_cmd(0x06);
	lcd_cmd(0x01);
	lcd_cmd(0x0C);

}
void lcd_display(unsigned char *str,unsigned int length)
{
	for(int i=0;i<length;i++)
	{
		lcd_data(str[i]);
	}
}

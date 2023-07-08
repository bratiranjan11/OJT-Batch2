/*
 * led.h
 *
 *  Created on: Apr 26, 2023
 *      Author: PHY202302EF31
 */

#ifndef INC_LED_H_
#define INC_LED_H_

void print(unsigned char);
void lcd_data(unsigned char);
void lcd_cmd(unsigned char);
void lcd_display(unsigned char *,unsigned int);

#endif /* INC_LED_H_ */

/*
 * lcd.h
 *
 *  Created on: Apr 25, 2023
 *      Author: PHY202302EF31
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_
void print(unsigned char);
void lcd_data(unsigned char);
void lcd_cmd(unsigned char);
void lcd_display(unsigned char *,unsigned int);



#endif /* INC_LCD_H_ */

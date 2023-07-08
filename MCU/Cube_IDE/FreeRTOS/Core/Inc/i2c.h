/*
 * i2c.h
 *
 *  Created on: May 15, 2023
 *      Author: brati
 */

#ifndef INC_I2C_H_
#define INC_I2C_H_

void delay(uint32_t  x);
void I2C1_init(void);
void I2C1_burstRead(char saddr, char maddr, int n, char* data);
void I2C1_burstWrite(char saddr, char maddr, int n, char* data);
int BCDtoDecimal(int );
void Get_Time();

#endif /* INC_I2C_H_ */

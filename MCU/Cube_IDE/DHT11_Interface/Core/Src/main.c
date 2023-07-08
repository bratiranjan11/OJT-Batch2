/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : DHT11_Interface.c
  * @brief          : Displaying Humidity and Tempreture on LCD
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

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
  typedef struct {
  	uint8_t seconds;
  	uint8_t minutes;
  	uint8_t hour;
  	uint8_t dayofweek;
  	uint8_t dayofmonth;
  	uint8_t month;
  	uint8_t year;
  } TIME;

  TIME time;
/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
					  /*	00 01  02  03 04  05  06 */
  char timeDateToSet[15] = {0x06, 0x04, 0x10, 0x06, 0x16, 0x05, 0x23, 0};
  	  	  	  	  	  	  	  //55:19:16 6(SATURDAY), 29(date), 04(APRIL) 2023/

char timeDateReadback[15];
 char set_time[15];
 unsigned char numaric_value[20];
 int rtc_data[15];

 char buffer[15];

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
#define SLAVE_ADDR 0x68
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim6;

/* USER CODE BEGIN PV */
uint8_t Rh_byte1, Rh_byte2, Temp_byte1, Temp_byte2;
uint16_t RH, TEMP;
uint8_t Presence = 0;
char str[20]={0};
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM6_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void Delay (uint16_t time)
{
	/* change your code here for the delay in microseconds */
	__HAL_TIM_SET_COUNTER(&htim6, 0);
	while ((__HAL_TIM_GET_COUNTER(&htim6))<time);
}

void Display_Temp (float Temp)
{
	char str[20] = {0};
	//LCD_command(0x01);
	//delay(11);


	sprintf (str, "TEMP:- %.0f", Temp);
	LCD_string(str);
	LCD_command(0x89);
	delay(11);
	LCD_data(0xdf);
	LCD_data('C');
}

void Display_Rh (float Rh)
{
	char str[20] = {0};
	LCD_command(0xc0);
	delay(11);

	sprintf (str, "RH:- %.0f", Rh);
	LCD_string(str);
	LCD_data('%');
	LCD_command(0xc9);
	delay(10);
	LCD_string("        ");
}



  void I2C1_init(void)
  {

  	RCC->AHB1ENR |= 2; 							/* Enable GPIOB clock */
  	RCC->APB1ENR |= 1<<21; 					/* Enable I2C1 clock */

  	/* configure PB8, PB9 pins for I2C1 */

  	GPIOB->MODER &= ~0xF0000; 				/* PB8, PB9 use alternate function */
  	GPIOB->MODER |= 0xA0000;
  	GPIOB->AFR[1] &= ~0xFF; 				/* PB8, PB9 I2C1 SCL, SDA */
  	GPIOB->AFR[1] |= 0x44;
  	GPIOB->OTYPER |= 0x300; 				/* output open-drain */
  	GPIOB->PUPDR &=~0xF0000; 				/* with pull-ups */
  	GPIOB->PUPDR |= 0x50000;

  	I2C1->CR1 = 0x8000; 						/* software reset I2C1 */
  	I2C1->CR1 &= ~0x8000;						/* out of reset */
  	I2C1->CR2 = 0x10; 						/* peripheral clock is 16 MHz*/

  	I2C1->CCR = 80; 							/* standard mode, 100kHz clock */ //0x50
  	I2C1->TRISE =17; 							/* maximum rise time */  //0x11
  	I2C1->CR1 |= 0x1; 						/* enable I2C1module */
  }

  void I2C1_burstWrite(char saddr, char maddr, int n, char* data)
  {
      int i;
      volatile int tmp;

      while (I2C1->SR2 & 2);                  /* wait until bus not busy */
      I2C1->CR1 &= ~0x800;                    /* disable POS */
      I2C1->CR1 |= 0x100;                     /* generate start */
      while (!(I2C1->SR1 & 1));               /* wait until start flag is set */
      I2C1->DR = saddr << 1;                  /* transmit slave address */
      while (!(I2C1->SR1 & 0x2));               /* wait until addr flag is set */
      tmp = I2C1->SR2;                        /* clear addr flag */
      while (!(I2C1->SR1 & 0x80));            /* wait until data register empty */
      I2C1->DR = maddr;                       /* send memory address */

      /* write all the data */
      for (i = 0; i < n; i++)
      {
          while (!(I2C1->SR1 & 0x80));        /* wait until data register empty */
          I2C1->DR = *data++;                // transmit memory address */
      }

      while (!(I2C1->SR1 & 4));               /* wait until transfer finished */
      I2C1->CR1 |= 0x200;                     /* generate stop */
  }

  void I2C1_burstRead(char saddr, char maddr, int n, char* data)
  {
      volatile int tmp;

      while (I2C1->SR2 & 2);                  /* wait until bus not busy */
      I2C1->CR1 &= ~0x800;                    /* disable POS */
      I2C1->CR1 |= 0x100;                     /* generate start */
      while (!(I2C1->SR1 & 1));               /* wait until start flag is set */
      I2C1->DR = saddr << 1;                  /* transmit slave address + Write */
      while (!(I2C1->SR1 & 2));               /* wait until addr flag is set */
      tmp = I2C1->SR2;                        /* clear addr flag */
      while (!(I2C1->SR1 & 0x80));            /* wait until transmitter empty */
      I2C1->DR = maddr;                       /* send memory address */
      while (!(I2C1->SR1 & 0x80));            /* wait until transmitter empty */

      I2C1->CR1 |= 0x100;                     /* generate restart */
      while (!(I2C1->SR1 & 1));               /* wait until start flag is set */
      I2C1->DR = saddr << 1 | 1;              /* transmit slave address + Read */
      while (!(I2C1->SR1 & 2));               /* wait until addr flag is set */
      tmp = I2C1->SR2;                        /* clear addr flag */
      I2C1->CR1 |=  0x0400;                   /* Enable Acknowledge */

      while(n > 0)
      {
          /* One byte left */
          if(n == 1)
          {
              I2C1->CR1 &= ~(0x400);          /* Disable Acknowledge */
              I2C1->CR1 |= 0x200;             /* Generate Stop */
              while (!(I2C1->SR1 & 0x40));    /* Wait for RXNE flag set */
              *data++ =I2C1->DR;             		// Read data from DR */
              break;
          }
          else
          {
              while (!(I2C1->SR1 & 0x40));    /* Wait until RXNE flag is set */
              *data++ =I2C1->DR;           			// Read data from DR */
              n--;
          }
      }
  }

  void Get_Time()
  {
  	//uint8_t get_time[7];
  	I2C1_burstRead(SLAVE_ADDR, 0x00, 7, timeDateReadback);

  	time.seconds = BCDtoDecimal(timeDateReadback[0]);		////conversion back
  	time.minutes = BCDtoDecimal(timeDateReadback[1]);
  	time.hour = 	BCDtoDecimal(timeDateReadback[2]);
  	time.dayofweek = BCDtoDecimal(timeDateReadback[3]);
  	time.dayofmonth = BCDtoDecimal(timeDateReadback[4]);
  	time.month = BCDtoDecimal(timeDateReadback[5]);
  	time.year = BCDtoDecimal(timeDateReadback[6]);
  }

  void delay(uint32_t  x)
  {
  	for(int i=0;i<x;i++)
  	{
  		for(int j=0;j<3000;j++);
  	}
  }

  int BCDtoDecimal(int BCD)
  {
  	return(((BCD>>4)*10) + (BCD & 0xf));
  }

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */
  I2C1_init();
  LCD_init();
  delay(10);
  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM6_Init();
  /* USER CODE BEGIN 2 */
HAL_TIM_Base_Start(&htim6);


LCD_command(0x83);
delay(10);
LCD_string("STAY SAFE");
 delay(1000);
LCD_command(0x01);
delay(10);
 //Display_Temp(Temperature);
 //Display_Rh(Humidity);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  while (1)
  {

//	  Display_Temp(TEMP);
//	  Display_Rh(RH);
	  if(!(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_1)))
	  {
		  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,1);
		  LCD_command(0x01);
		  delay(10);
		  LCD_command(0x83);
		  delay(10);
		  LCD_string("FIRE ALERT!!!");
		  LCD_command(0xc3);
		  delay(10);
		  LCD_string("DAIL-101");
		  HAL_Delay(2000);
		  LCD_command(0x01);
		  delay(10);

	  }
	  else
	  {
		  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_0,0);
//		  LCD_command(0x01);
//		  delay(10);

	      LCD_string("TIME:");
	       LCD_command(0xC0);
	       LCD_string("DATE:");
	       I2C1_burstWrite(SLAVE_ADDR, 0x00, 7, timeDateToSet);


	      	LCD_command(0x86);

	       	Get_Time();		//reading RTC data

	       	sprintf (buffer, "%02d:%02d:%02d", time.hour, time.minutes, time.seconds);
	       	//delay(1);
	       	LCD_string(buffer);
	       	//delay(1);

	       	sprintf (buffer, "%02d-%02d-20%02d", time.dayofmonth, time.month, time.year);
	       	//delay(1);
	       	LCD_command(0xC6);
	       	LCD_string(buffer);
	       	//delay(1);
	       	//LCD_command(0x08);				//turn off the screen
	       	//delay(200);
	       	LCD_command(0x0C);				//turn on the screen and cursor off

	       	HAL_Delay(3000);
			  LCD_command(0x01);
			  delay(10);


		  dht11_start();
		  Presence = check_response();
		  Rh_byte1 = data_read();
		  Rh_byte2 = data_read();
		  Temp_byte1 = data_read();
		  Temp_byte2 = data_read();

		  TEMP = Temp_byte1;
		  RH = Rh_byte1;

		  Display_Temp(TEMP);
		  Display_Rh(RH);

		  HAL_Delay(3000);
		  LCD_command(0x01);
		  delay(10);




	  }



//	  Temperature = (float) TEMP;
//	  Humidity = (float) RH;

	 // HAL_Delay(1000);


//	  sprintf(str,"TEMP: %.2f",Temperature);
//	  LCD_command(0x01);
//	  delay(10);
//	  LCD_command(0x80);
//	  delay(10);
//	  LCD_string(str);
//	  LCD_command(0x8B);
//	  delay(10);
//	  LCD_data(0xdf);
//	  LCD_data('C');

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }

  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  RCC_OscInitStruct.PLL.PLLR = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM6 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM6_Init(void)
{

  /* USER CODE BEGIN TIM6_Init 0 */

  /* USER CODE END TIM6_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM6_Init 1 */

  /* USER CODE END TIM6_Init 1 */
  htim6.Instance = TIM6;
  htim6.Init.Prescaler = 84-1;
  htim6.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim6.Init.Period = 0xffff-1;
  htim6.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim6) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim6, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM6_Init 2 */

  /* USER CODE END TIM6_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : PC0 */
  GPIO_InitStruct.Pin = GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : PC1 */
  GPIO_InitStruct.Pin = GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : LD2_Pin */
  GPIO_InitStruct.Pin = LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LD2_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

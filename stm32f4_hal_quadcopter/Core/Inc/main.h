/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DEBUG_LED_Pin GPIO_PIN_13
#define DEBUG_LED_GPIO_Port GPIOC
#define MOTOR_4_Pin GPIO_PIN_0
#define MOTOR_4_GPIO_Port GPIOA
#define MOTOR_3_Pin GPIO_PIN_1
#define MOTOR_3_GPIO_Port GPIOA
#define MOTOR_1_Pin GPIO_PIN_2
#define MOTOR_1_GPIO_Port GPIOA
#define MOTOR_2_Pin GPIO_PIN_3
#define MOTOR_2_GPIO_Port GPIOA
#define SPI_ICM20948_CS_Pin GPIO_PIN_4
#define SPI_ICM20948_CS_GPIO_Port GPIOA
#define SPI_ICM20948_SCK_Pin GPIO_PIN_5
#define SPI_ICM20948_SCK_GPIO_Port GPIOA
#define SPI_ICM20948_MISO_Pin GPIO_PIN_6
#define SPI_ICM20948_MISO_GPIO_Port GPIOA
#define SPI_ICM20948_MOSI_Pin GPIO_PIN_7
#define SPI_ICM20948_MOSI_GPIO_Port GPIOA
#define IBUS_TX_Pin GPIO_PIN_9
#define IBUS_TX_GPIO_Port GPIOA
#define IBUS_RX_Pin GPIO_PIN_10
#define IBUS_RX_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

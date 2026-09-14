/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g4xx_hal.h"

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
#define IMU_SCK_Pin GPIO_PIN_2
#define IMU_SCK_GPIO_Port GPIOE
#define IMU_CS_Pin GPIO_PIN_3
#define IMU_CS_GPIO_Port GPIOE
#define IMU_INT1_Pin GPIO_PIN_4
#define IMU_INT1_GPIO_Port GPIOE
#define IMU_MISO_Pin GPIO_PIN_5
#define IMU_MISO_GPIO_Port GPIOE
#define IMU_MOSI_Pin GPIO_PIN_6
#define IMU_MOSI_GPIO_Port GPIOE
#define ESC1_TELEMETRY_RX_Pin GPIO_PIN_0
#define ESC1_TELEMETRY_RX_GPIO_Port GPIOC
#define IMU_INT2_Pin GPIO_PIN_2
#define IMU_INT2_GPIO_Port GPIOF
#define TSOP4838_IN_Pin GPIO_PIN_0
#define TSOP4838_IN_GPIO_Port GPIOA
#define TF_LUNA1_DRDY_Pin GPIO_PIN_1
#define TF_LUNA1_DRDY_GPIO_Port GPIOA
#define TF_LUNA2_DRDY_Pin GPIO_PIN_2
#define TF_LUNA2_DRDY_GPIO_Port GPIOA
#define TF_LUNA3_DRDY_Pin GPIO_PIN_3
#define TF_LUNA3_DRDY_GPIO_Port GPIOA
#define SPARE_SPI_NSS_Pin GPIO_PIN_4
#define SPARE_SPI_NSS_GPIO_Port GPIOA
#define SPARE_SPI_SCK_Pin GPIO_PIN_5
#define SPARE_SPI_SCK_GPIO_Port GPIOA
#define SPARE_SPI_MISO_Pin GPIO_PIN_6
#define SPARE_SPI_MISO_GPIO_Port GPIOA
#define SPARE_SPI_MOSI_Pin GPIO_PIN_7
#define SPARE_SPI_MOSI_GPIO_Port GPIOA
#define VBAT_SENSE_Pin GPIO_PIN_0
#define VBAT_SENSE_GPIO_Port GPIOB
#define TOF_MUX_RESET_Pin GPIO_PIN_1
#define TOF_MUX_RESET_GPIO_Port GPIOB
#define CURRENT_SENSE_Pin GPIO_PIN_2
#define CURRENT_SENSE_GPIO_Port GPIOB
#define TCRT1_Pin GPIO_PIN_7
#define TCRT1_GPIO_Port GPIOE
#define TCRT2_Pin GPIO_PIN_8
#define TCRT2_GPIO_Port GPIOE
#define TCRT3_Pin GPIO_PIN_9
#define TCRT3_GPIO_Port GPIOE
#define OLED_CS_Pin GPIO_PIN_12
#define OLED_CS_GPIO_Port GPIOB
#define OLED_SCK_Pin GPIO_PIN_13
#define OLED_SCK_GPIO_Port GPIOB
#define OLED_MOSI_Pin GPIO_PIN_15
#define OLED_MOSI_GPIO_Port GPIOB
#define ESC3_TELEMETRY_RX_Pin GPIO_PIN_9
#define ESC3_TELEMETRY_RX_GPIO_Port GPIOD
#define TCRT4_Pin GPIO_PIN_10
#define TCRT4_GPIO_Port GPIOD
#define TCRT5_Pin GPIO_PIN_11
#define TCRT5_GPIO_Port GPIOD
#define TCRT6_Pin GPIO_PIN_12
#define TCRT6_GPIO_Port GPIOD
#define TCRT7_Pin GPIO_PIN_13
#define TCRT7_GPIO_Port GPIOD
#define TCRT8_Pin GPIO_PIN_14
#define TCRT8_GPIO_Port GPIOD
#define BUZZER_PWM_Pin GPIO_PIN_15
#define BUZZER_PWM_GPIO_Port GPIOD
#define ESC1_DSHOT_Pin GPIO_PIN_6
#define ESC1_DSHOT_GPIO_Port GPIOC
#define ESC2_DSHOT_Pin GPIO_PIN_7
#define ESC2_DSHOT_GPIO_Port GPIOC
#define ESC3_DSHOT_Pin GPIO_PIN_8
#define ESC3_DSHOT_GPIO_Port GPIOC
#define ESC4_DSHOT_Pin GPIO_PIN_9
#define ESC4_DSHOT_GPIO_Port GPIOC
#define TOF_I2C_SDA_Pin GPIO_PIN_8
#define TOF_I2C_SDA_GPIO_Port GPIOA
#define TOF_I2C_SCL_Pin GPIO_PIN_9
#define TOF_I2C_SCL_GPIO_Port GPIOA
#define ESC4_TELEMETRY_RX_Pin GPIO_PIN_11
#define ESC4_TELEMETRY_RX_GPIO_Port GPIOC
#define BLUETOOTH_TX_Pin GPIO_PIN_12
#define BLUETOOTH_TX_GPIO_Port GPIOC
#define OLED_DC_Pin GPIO_PIN_0
#define OLED_DC_GPIO_Port GPIOD
#define OLED_RESET_Pin GPIO_PIN_1
#define OLED_RESET_GPIO_Port GPIOD
#define BLUETOOTH_RX_Pin GPIO_PIN_2
#define BLUETOOTH_RX_GPIO_Port GPIOD
#define ESC2_TELEMETRY_RX_Pin GPIO_PIN_6
#define ESC2_TELEMETRY_RX_GPIO_Port GPIOD
#define TEST_LED_Pin GPIO_PIN_6
#define TEST_LED_GPIO_Port GPIOB
#define SPARE_UART_TX_Pin GPIO_PIN_0
#define SPARE_UART_TX_GPIO_Port GPIOE
#define SPARE_UART_RX_Pin GPIO_PIN_1
#define SPARE_UART_RX_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

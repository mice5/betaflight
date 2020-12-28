/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "RIPF7"

#define USBD_PRODUCT_STRING "RippingBallsF7"



#define LED0_PIN   PE1
#define LED0_INVERTED

#define LED1_PIN   PC12
#define LED1_INVERTED

#define USE_BEEPER
#define BEEPER_PIN              PA4
#define BEEPER_INVERTED

/* UPDATE */
// MPU interrupt
#define USE_EXTI
#define USE_GYRO_EXTI
#define GYRO_1_EXTI_PIN         PC14
//#define DEBUG_MPU_DATA_READY_INTERRUPT
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW

#define GYRO_1_CS_PIN           PC15
#define GYRO_1_SPI_INSTANCE     SPI4

#define USE_ACC
#define USE_ACC_SPI_MPU6500

#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define GYRO_1_ALIGN            CW90_DEG
/* UPDATE */

//#define MAG
//#define USE_MAG_HMC5883
//#define HMC5883_BUS I2C_DEVICE_EXT
//#define MAG_HMC5883_ALIGN CW270_DEG_FLIP
//#define MAG_HMC5883_ALIGN CW90_DEG

#define USE_BARO
#define USE_BARO_MS5611
#define USE_BARO_SPI_MS5611
#define BARO_CS_PIN             PC13
#define BARO_SPI_INSTANCE       SPI4

/* UPDATE */
/* UPDATE */

#define USE_VCP
#define USE_USB_DETECT
#define USB_DETECT_PIN          PA9

#define USE_UART1
#define UART1_RX_PIN PB15
#define UART1_TX_PIN PB14

#define USE_UART3
#define UART3_RX_PIN PC11
#define UART3_TX_PIN PD8

#define USE_UART4
#define UART4_RX_PIN PD0
#define UART4_TX_PIN PC10

#define USE_UART5
#define UART5_RX_PIN PB8
#define UART5_TX_PIN PB9

#define USE_UART6
#define UART6_RX_PIN PC7
#define UART6_TX_PIN PC6

#define SERIAL_PORT_COUNT 6 //VCP, USART1, USART3, UART4, UART5, USART6

#define USE_ESCSERIAL

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_4

//GYRO + BARO
#define SPI4_SCK_PIN            PE2
#define SPI4_MISO_PIN           PE5
#define SPI4_MOSI_PIN           PE6
#define SPI4_NSS_PIN            PC15

//FLASH

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7
#define SPI1_NSS_PIN            PB12

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define FLASH_CS_PIN         SPI1_NSS_PIN
#define FLASH_SPI_INSTANCE   SPI1
#define USE_FLASHFS
#define USE_FLASH_M25P16

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C_DEVICE				(I2CDEV_1)
#define I2C1_SCL				PB6
#define I2C1_SDA				PB7

#define DEFAULT_FEATURES        (FEATURE_LED_STRIP | FEATURE_TELEMETRY )
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC

#define USE_ADC
#define ADC_INSTANCE            ADC1
#define ADC1_DMA_OPT            0  // DMA 2 Stream 0 Channel 0 
#define VBAT_ADC_PIN            PA3
#define CURRENT_METER_ADC_PIN   PA0

#define VBAT_SCALE_DEFAULT 109
#define CURRENT_METER_SCALE_DEFAULT 179

#define LED_STRIP

#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART3

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff

#define USABLE_TIMER_CHANNEL_COUNT 5
#define USED_TIMERS  ( TIM_N(1) | TIM_N(2) | TIM_N(5))

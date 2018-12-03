F767VI_TARGETS += $(TARGET)
HSE_VALUE = 25000000
FEATURES += VCP ONBOARDFLASH

TARGET_SRC = \
            drivers/accgyro/accgyro_mpu.c \
            drivers/accgyro/accgyro_spi_mpu6500.c \
            drivers/accgyro/accgyro_mpu6500.c \
			drivers/barometer/barometer_ms5611.c \
            drivers/light_ws2811strip.c \
            drivers/light_ws2811strip_hal.c
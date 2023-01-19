################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Spectrogram/src/common_tables.c \
../Spectrogram/src/dct.c \
../Spectrogram/src/mel_filterbank.c \
../Spectrogram/src/window.c 

OBJS += \
./Spectrogram/src/common_tables.o \
./Spectrogram/src/dct.o \
./Spectrogram/src/mel_filterbank.o \
./Spectrogram/src/window.o 

C_DEPS += \
./Spectrogram/src/common_tables.d \
./Spectrogram/src/dct.d \
./Spectrogram/src/mel_filterbank.d \
./Spectrogram/src/window.d 


# Each subdirectory must supply rules for building sources it contributes
Spectrogram/src/%.o Spectrogram/src/%.su: ../Spectrogram/src/%.c Spectrogram/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I../user/inc -I../Spectrogram/inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Spectrogram-2f-src

clean-Spectrogram-2f-src:
	-$(RM) ./Spectrogram/src/common_tables.d ./Spectrogram/src/common_tables.o ./Spectrogram/src/common_tables.su ./Spectrogram/src/dct.d ./Spectrogram/src/dct.o ./Spectrogram/src/dct.su ./Spectrogram/src/mel_filterbank.d ./Spectrogram/src/mel_filterbank.o ./Spectrogram/src/mel_filterbank.su ./Spectrogram/src/window.d ./Spectrogram/src/window.o ./Spectrogram/src/window.su

.PHONY: clean-Spectrogram-2f-src


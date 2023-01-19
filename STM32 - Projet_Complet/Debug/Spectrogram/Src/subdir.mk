################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Spectrogram/Src/common_tables.c \
../Spectrogram/Src/dct.c \
../Spectrogram/Src/feature_extraction.c \
../Spectrogram/Src/mel_filterbank.c \
../Spectrogram/Src/window.c 

OBJS += \
./Spectrogram/Src/common_tables.o \
./Spectrogram/Src/dct.o \
./Spectrogram/Src/feature_extraction.o \
./Spectrogram/Src/mel_filterbank.o \
./Spectrogram/Src/window.o 

C_DEPS += \
./Spectrogram/Src/common_tables.d \
./Spectrogram/Src/dct.d \
./Spectrogram/Src/feature_extraction.d \
./Spectrogram/Src/mel_filterbank.d \
./Spectrogram/Src/window.d 


# Each subdirectory must supply rules for building sources it contributes
Spectrogram/Src/%.o Spectrogram/Src/%.su: ../Spectrogram/Src/%.c Spectrogram/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I../user/inc -I../Spectrogram/inc -I../Spectrogram/Inc -I../CMSIS/DSP/Include -I../CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Spectrogram-2f-Src

clean-Spectrogram-2f-Src:
	-$(RM) ./Spectrogram/Src/common_tables.d ./Spectrogram/Src/common_tables.o ./Spectrogram/Src/common_tables.su ./Spectrogram/Src/dct.d ./Spectrogram/Src/dct.o ./Spectrogram/Src/dct.su ./Spectrogram/Src/feature_extraction.d ./Spectrogram/Src/feature_extraction.o ./Spectrogram/Src/feature_extraction.su ./Spectrogram/Src/mel_filterbank.d ./Spectrogram/Src/mel_filterbank.o ./Spectrogram/Src/mel_filterbank.su ./Spectrogram/Src/window.d ./Spectrogram/Src/window.o ./Spectrogram/Src/window.su

.PHONY: clean-Spectrogram-2f-Src


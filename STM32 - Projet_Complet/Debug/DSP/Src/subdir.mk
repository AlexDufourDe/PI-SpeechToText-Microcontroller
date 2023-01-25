################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DSP/Src/common_tables.c \
../DSP/Src/dct.c \
../DSP/Src/feature_extraction.c \
../DSP/Src/mel_filterbank.c \
../DSP/Src/window.c 

OBJS += \
./DSP/Src/common_tables.o \
./DSP/Src/dct.o \
./DSP/Src/feature_extraction.o \
./DSP/Src/mel_filterbank.o \
./DSP/Src/window.o 

C_DEPS += \
./DSP/Src/common_tables.d \
./DSP/Src/dct.d \
./DSP/Src/feature_extraction.d \
./DSP/Src/mel_filterbank.d \
./DSP/Src/window.d 


# Each subdirectory must supply rules for building sources it contributes
DSP/Src/%.o DSP/Src/%.su: ../DSP/Src/%.c DSP/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -D__FPU_PRESENT -DARM_MATH_CM7 -DUSE_HAL_DRIVER -DSTM32F769xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I../user/inc -I../Drivers/CMSIS/DSP/Include -I../DSP/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-DSP-2f-Src

clean-DSP-2f-Src:
	-$(RM) ./DSP/Src/common_tables.d ./DSP/Src/common_tables.o ./DSP/Src/common_tables.su ./DSP/Src/dct.d ./DSP/Src/dct.o ./DSP/Src/dct.su ./DSP/Src/feature_extraction.d ./DSP/Src/feature_extraction.o ./DSP/Src/feature_extraction.su ./DSP/Src/mel_filterbank.d ./DSP/Src/mel_filterbank.o ./DSP/Src/mel_filterbank.su ./DSP/Src/window.d ./DSP/Src/window.o ./DSP/Src/window.su

.PHONY: clean-DSP-2f-Src


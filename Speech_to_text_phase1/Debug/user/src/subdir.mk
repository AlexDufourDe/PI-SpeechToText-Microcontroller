################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../user/src/ai.c \
../user/src/mel_spectrogram.c \
../user/src/microphone.c \
../user/src/rtc.c \
../user/src/sd.c \
../user/src/spectrogram.c \
../user/src/user_gpio.c \
../user/src/user_tim.c \
../user/src/wav.c \
../user/src/wm8994.c 

OBJS += \
./user/src/ai.o \
./user/src/mel_spectrogram.o \
./user/src/microphone.o \
./user/src/rtc.o \
./user/src/sd.o \
./user/src/spectrogram.o \
./user/src/user_gpio.o \
./user/src/user_tim.o \
./user/src/wav.o \
./user/src/wm8994.o 

C_DEPS += \
./user/src/ai.d \
./user/src/mel_spectrogram.d \
./user/src/microphone.d \
./user/src/rtc.d \
./user/src/sd.d \
./user/src/spectrogram.d \
./user/src/user_gpio.d \
./user/src/user_tim.d \
./user/src/wav.d \
./user/src/wm8994.d 


# Each subdirectory must supply rules for building sources it contributes
user/src/%.o user/src/%.su: ../user/src/%.c user/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -D__FPU_PRESENT -DARM_MATH_CM7 -DUSE_HAL_DRIVER -DSTM32F769xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/AI/Inc -I../X-CUBE-AI/App -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -I../user/inc -I../Drivers/CMSIS/DSP/Include -I../DSP/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-user-2f-src

clean-user-2f-src:
	-$(RM) ./user/src/ai.d ./user/src/ai.o ./user/src/ai.su ./user/src/mel_spectrogram.d ./user/src/mel_spectrogram.o ./user/src/mel_spectrogram.su ./user/src/microphone.d ./user/src/microphone.o ./user/src/microphone.su ./user/src/rtc.d ./user/src/rtc.o ./user/src/rtc.su ./user/src/sd.d ./user/src/sd.o ./user/src/sd.su ./user/src/spectrogram.d ./user/src/spectrogram.o ./user/src/spectrogram.su ./user/src/user_gpio.d ./user/src/user_gpio.o ./user/src/user_gpio.su ./user/src/user_tim.d ./user/src/user_tim.o ./user/src/user_tim.su ./user/src/wav.d ./user/src/wav.o ./user/src/wav.su ./user/src/wm8994.d ./user/src/wm8994.o ./user/src/wm8994.su

.PHONY: clean-user-2f-src


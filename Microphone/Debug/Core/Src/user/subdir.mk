################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/user/microphone.c \
../Core/Src/user/rtc.c \
../Core/Src/user/sd.c 

OBJS += \
./Core/Src/user/microphone.o \
./Core/Src/user/rtc.o \
./Core/Src/user/sd.o 

C_DEPS += \
./Core/Src/user/microphone.d \
./Core/Src/user/rtc.d \
./Core/Src/user/sd.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/user/%.o Core/Src/user/%.su: ../Core/Src/user/%.c Core/Src/user/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -c -I../Core/Inc -I/home/felipe/Bureau/3A-1/PI/Microphone/Drivers/BSP/Components -I/home/felipe/Bureau/3A-1/PI/Microphone/Drivers/BSP/STM32F769I_EVAL -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-user

clean-Core-2f-Src-2f-user:
	-$(RM) ./Core/Src/user/microphone.d ./Core/Src/user/microphone.o ./Core/Src/user/microphone.su ./Core/Src/user/rtc.d ./Core/Src/user/rtc.o ./Core/Src/user/rtc.su ./Core/Src/user/sd.d ./Core/Src/user/sd.o ./Core/Src/user/sd.su

.PHONY: clean-Core-2f-Src-2f-user


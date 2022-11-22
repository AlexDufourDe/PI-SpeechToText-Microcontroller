################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/STM32F769I_EVAL/stm32f769i_eval.c 

OBJS += \
./Drivers/BSP/STM32F769I_EVAL/stm32f769i_eval.o 

C_DEPS += \
./Drivers/BSP/STM32F769I_EVAL/stm32f769i_eval.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32F769I_EVAL/%.o Drivers/BSP/STM32F769I_EVAL/%.su: ../Drivers/BSP/STM32F769I_EVAL/%.c Drivers/BSP/STM32F769I_EVAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -c -I../Core/Inc -I/home/felipe/Bureau/3A-1/PI/Microphone/Drivers/BSP/Components -I/home/felipe/Bureau/3A-1/PI/Microphone/Drivers/BSP/STM32F769I_EVAL -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-STM32F769I_EVAL

clean-Drivers-2f-BSP-2f-STM32F769I_EVAL:
	-$(RM) ./Drivers/BSP/STM32F769I_EVAL/stm32f769i_eval.d ./Drivers/BSP/STM32F769I_EVAL/stm32f769i_eval.o ./Drivers/BSP/STM32F769I_EVAL/stm32f769i_eval.su

.PHONY: clean-Drivers-2f-BSP-2f-STM32F769I_EVAL


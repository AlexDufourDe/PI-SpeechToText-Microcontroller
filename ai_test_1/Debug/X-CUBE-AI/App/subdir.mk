################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../X-CUBE-AI/App/aiPbIO.c \
../X-CUBE-AI/App/aiPbMgr.c \
../X-CUBE-AI/App/aiTestHelper.c \
../X-CUBE-AI/App/aiTestUtility.c \
../X-CUBE-AI/App/aiValidation.c \
../X-CUBE-AI/App/app_x-cube-ai.c \
../X-CUBE-AI/App/asc.c \
../X-CUBE-AI/App/asc_data.c \
../X-CUBE-AI/App/asc_data_params.c \
../X-CUBE-AI/App/lc_print.c \
../X-CUBE-AI/App/network_1669802707750.c \
../X-CUBE-AI/App/network_1669802707750_data.c \
../X-CUBE-AI/App/network_1669802707750_data_params.c \
../X-CUBE-AI/App/pb_common.c \
../X-CUBE-AI/App/pb_decode.c \
../X-CUBE-AI/App/pb_encode.c \
../X-CUBE-AI/App/stm32msg.pb.c \
../X-CUBE-AI/App/syscalls.c 

OBJS += \
./X-CUBE-AI/App/aiPbIO.o \
./X-CUBE-AI/App/aiPbMgr.o \
./X-CUBE-AI/App/aiTestHelper.o \
./X-CUBE-AI/App/aiTestUtility.o \
./X-CUBE-AI/App/aiValidation.o \
./X-CUBE-AI/App/app_x-cube-ai.o \
./X-CUBE-AI/App/asc.o \
./X-CUBE-AI/App/asc_data.o \
./X-CUBE-AI/App/asc_data_params.o \
./X-CUBE-AI/App/lc_print.o \
./X-CUBE-AI/App/network_1669802707750.o \
./X-CUBE-AI/App/network_1669802707750_data.o \
./X-CUBE-AI/App/network_1669802707750_data_params.o \
./X-CUBE-AI/App/pb_common.o \
./X-CUBE-AI/App/pb_decode.o \
./X-CUBE-AI/App/pb_encode.o \
./X-CUBE-AI/App/stm32msg.pb.o \
./X-CUBE-AI/App/syscalls.o 

C_DEPS += \
./X-CUBE-AI/App/aiPbIO.d \
./X-CUBE-AI/App/aiPbMgr.d \
./X-CUBE-AI/App/aiTestHelper.d \
./X-CUBE-AI/App/aiTestUtility.d \
./X-CUBE-AI/App/aiValidation.d \
./X-CUBE-AI/App/app_x-cube-ai.d \
./X-CUBE-AI/App/asc.d \
./X-CUBE-AI/App/asc_data.d \
./X-CUBE-AI/App/asc_data_params.d \
./X-CUBE-AI/App/lc_print.d \
./X-CUBE-AI/App/network_1669802707750.d \
./X-CUBE-AI/App/network_1669802707750_data.d \
./X-CUBE-AI/App/network_1669802707750_data_params.d \
./X-CUBE-AI/App/pb_common.d \
./X-CUBE-AI/App/pb_decode.d \
./X-CUBE-AI/App/pb_encode.d \
./X-CUBE-AI/App/stm32msg.pb.d \
./X-CUBE-AI/App/syscalls.d 


# Each subdirectory must supply rules for building sources it contributes
X-CUBE-AI/App/%.o X-CUBE-AI/App/%.su: ../X-CUBE-AI/App/%.c X-CUBE-AI/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -c -I../X-CUBE-AI/App -I../X-CUBE-AI -I../X-CUBE-AI/Target -I../Core/Inc -I../Middlewares/ST/AI/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-X-2d-CUBE-2d-AI-2f-App

clean-X-2d-CUBE-2d-AI-2f-App:
	-$(RM) ./X-CUBE-AI/App/aiPbIO.d ./X-CUBE-AI/App/aiPbIO.o ./X-CUBE-AI/App/aiPbIO.su ./X-CUBE-AI/App/aiPbMgr.d ./X-CUBE-AI/App/aiPbMgr.o ./X-CUBE-AI/App/aiPbMgr.su ./X-CUBE-AI/App/aiTestHelper.d ./X-CUBE-AI/App/aiTestHelper.o ./X-CUBE-AI/App/aiTestHelper.su ./X-CUBE-AI/App/aiTestUtility.d ./X-CUBE-AI/App/aiTestUtility.o ./X-CUBE-AI/App/aiTestUtility.su ./X-CUBE-AI/App/aiValidation.d ./X-CUBE-AI/App/aiValidation.o ./X-CUBE-AI/App/aiValidation.su ./X-CUBE-AI/App/app_x-cube-ai.d ./X-CUBE-AI/App/app_x-cube-ai.o ./X-CUBE-AI/App/app_x-cube-ai.su ./X-CUBE-AI/App/asc.d ./X-CUBE-AI/App/asc.o ./X-CUBE-AI/App/asc.su ./X-CUBE-AI/App/asc_data.d ./X-CUBE-AI/App/asc_data.o ./X-CUBE-AI/App/asc_data.su ./X-CUBE-AI/App/asc_data_params.d ./X-CUBE-AI/App/asc_data_params.o ./X-CUBE-AI/App/asc_data_params.su ./X-CUBE-AI/App/lc_print.d ./X-CUBE-AI/App/lc_print.o ./X-CUBE-AI/App/lc_print.su ./X-CUBE-AI/App/network_1669802707750.d ./X-CUBE-AI/App/network_1669802707750.o ./X-CUBE-AI/App/network_1669802707750.su ./X-CUBE-AI/App/network_1669802707750_data.d ./X-CUBE-AI/App/network_1669802707750_data.o ./X-CUBE-AI/App/network_1669802707750_data.su ./X-CUBE-AI/App/network_1669802707750_data_params.d ./X-CUBE-AI/App/network_1669802707750_data_params.o ./X-CUBE-AI/App/network_1669802707750_data_params.su ./X-CUBE-AI/App/pb_common.d ./X-CUBE-AI/App/pb_common.o ./X-CUBE-AI/App/pb_common.su ./X-CUBE-AI/App/pb_decode.d ./X-CUBE-AI/App/pb_decode.o ./X-CUBE-AI/App/pb_decode.su ./X-CUBE-AI/App/pb_encode.d ./X-CUBE-AI/App/pb_encode.o ./X-CUBE-AI/App/pb_encode.su ./X-CUBE-AI/App/stm32msg.pb.d ./X-CUBE-AI/App/stm32msg.pb.o ./X-CUBE-AI/App/stm32msg.pb.su ./X-CUBE-AI/App/syscalls.d ./X-CUBE-AI/App/syscalls.o ./X-CUBE-AI/App/syscalls.su

.PHONY: clean-X-2d-CUBE-2d-AI-2f-App


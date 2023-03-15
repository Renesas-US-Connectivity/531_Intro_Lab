################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
/home/jon/DA14531/SDK_6.0.18.1182.1/DA145xx_SDK/6.0.18.1182.1/sdk/platform/arch/boot/GCC/ivtable_DA14531.S 

OBJS += \
./iv_table/ivtable_DA14531.o 

S_UPPER_DEPS += \
./iv_table/ivtable_DA14531.d 


# Each subdirectory must supply rules for building sources it contributes
iv_table/ivtable_DA14531.o: /home/jon/DA14531/SDK_6.0.18.1182.1/DA145xx_SDK/6.0.18.1182.1/sdk/platform/arch/boot/GCC/ivtable_DA14531.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -x assembler-with-cpp -D__DA14531__ -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



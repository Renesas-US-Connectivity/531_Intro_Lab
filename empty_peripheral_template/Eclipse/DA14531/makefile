################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include user_platform/subdir.mk
-include user_custom_profile/subdir.mk
-include user_app/subdir.mk
-include sdk_profiles/subdir.mk
-include sdk_driver/subdir.mk
-include sdk_boot/subdir.mk
-include sdk_ble/subdir.mk
-include sdk_arch/subdir.mk
-include sdk_app/subdir.mk
-include iv_table/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
empty_peripheral_template.hex \

SECONDARY_SIZE += \
empty_peripheral_template.siz \


# All Target
all:
	$(MAKE) --no-print-directory pre-build
	$(MAKE) --no-print-directory main-build

# Main-build Target
main-build: empty_peripheral_template.elf secondary-outputs

# Tool invocations
empty_peripheral_template.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM C Linker'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -T "./ldscript_DA14531.lds" -Xlinker --gc-sections -L"/home/jon/DA14531/SDK_6.0.18.1182.1/DA145xx_SDK/6.0.18.1182.1/sdk/platform/system_library/output/Keil_5" -L"/home/jon/DA14531/SDK_6.0.18.1182.1/DA145xx_SDK/6.0.18.1182.1/sdk/common_project_files/misc" -Wl,-Map,"empty_peripheral_template.map" --specs=nano.specs --specs=nosys.specs -v -Wl,--no-wchar-size-warning -o "empty_peripheral_template.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

empty_peripheral_template.hex: empty_peripheral_template.elf
	@echo 'Invoking: Cross ARM GNU Create Flash Image'
	arm-none-eabi-objcopy -O ihex "empty_peripheral_template.elf"  "empty_peripheral_template.hex"
	@echo 'Finished building: $@'
	@echo ' '

empty_peripheral_template.siz: empty_peripheral_template.elf
	@echo 'Invoking: Cross ARM GNU Print Size'
	arm-none-eabi-size --format=berkeley "empty_peripheral_template.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS) empty_peripheral_template.elf
	-@echo ' '

pre-build:
	-make generate_ldscripts PRE_BUILD_EXTRA_DEFS="-D__DA14531__ " CC="arm-none-eabi-gcc" LDSCRIPT_INCLUDE_DIR="../../src/config /home/jon/DA14531/SDK_6.0.18.1182.1/DA145xx_SDK/6.0.18.1182.1/sdk/common_project_files" LDSCRIPT_PATH="/home/jon/DA14531/SDK_6.0.18.1182.1/DA145xx_SDK/6.0.18.1182.1/sdk/common_project_files/ldscripts" LDSCRIPT_FILES="ldscript_DA14531.lds"
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents main-build pre-build

-include ../makefile.targets

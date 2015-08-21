################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include arduino/core/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
arduino.ar \

ELF += \
test_motors.elf \

EEP += \
test_motors.eep \

FLASH_IMAGE += \
test_motors.hex \


# All Target
all: test_motors

# Tool invocations
test_motors: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"/usr/share/arduino/hardware/tools/arm/bin/arm-none-eabi-size" -A "/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release/test_motors.elf"
	@echo 'Finished building target: $@'
	@echo ' '

arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"/usr/share/arduino/hardware/tools/arm/bin/arm-none-eabi-ar" rcs "/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

test_motors.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"/usr/share/arduino/hardware/tools/arm/bin/arm-none-eabi-gcc" -O -Wl,--gc-sections,--relax,--defsym=__rtc_localtime=1440153128 "-T/usr/share/arduino/hardware/teensy/avr/cores/teensy3/mk20dx256.ld"  -mthumb -mcpu=cortex-m4 -o "/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release/test_motors.elf"   $(LINK_OBJ) $(AR)  "/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release/arduino.ar" "-L/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release" -larm_cortexM4l_math -lm
	@echo 'Finished building: $@'
	@echo ' '

test_motors.eep: $(ELF)
	@echo 'Create eeprom image'
	"/usr/share/arduino/hardware/tools/arm/bin/arm-none-eabi-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 "/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release/test_motors.elf" "/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release/test_motors.eep"
	@echo 'Finished building: $@'
	@echo ' '

test_motors.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"/usr/share/arduino/hardware/tools/arm/bin/arm-none-eabi-objcopy" -O ihex -R .eeprom "/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release/test_motors.elf" "/home/ethel/arduino-eclipse-plugin/workspace/test_motors/Release/test_motors.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_DEPS)$(AR)$(FLASH_IMAGE)$(EEP)$(CXX_DEPS)$(S_UPPER_DEPS)$(ELF)$(C++_DEPS)$(ASM_DEPS)$(CC_DEPS)$(AR_OBJ)$(CPP_DEPS)$(PDE_DEPS)$(LINK_OBJ)$(C_UPPER_DEPS)$(SIZEDUMMY) test_motors
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

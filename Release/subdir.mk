################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test_motors.cpp 

CPP_DEPS += \
./test_motors.cpp.d 

LINK_OBJ += \
./test_motors.cpp.o 


# Each subdirectory must supply rules for building sources it contributes
test_motors.cpp.o: ../test_motors.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/usr/share/arduino/hardware/tools/arm/bin/arm-none-eabi-g++" -c -O -g -Wall -ffunction-sections -fdata-sections -MMD -nostdlib -fno-exceptions -felide-constructors -std=gnu++0x -fno-rtti -mthumb -mcpu=cortex-m4 -D__MK20DX256__ -DTEENSYDUINO=124 -DARDUINO=10604 -DF_CPU=24000000 -DARDUINO_ARCH_AVR -DUSB_RAWHID -DLAYOUT_FRENCH   -I"/usr/share/arduino/hardware/teensy/avr/cores/teensy3" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '



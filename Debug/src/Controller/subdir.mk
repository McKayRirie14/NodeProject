################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Controller/NodeController.cpp \
../src/Controller/NodeRunner.cpp \
../src/Controller/Runner.cpp 

OBJS += \
./src/Controller/NodeController.o \
./src/Controller/NodeRunner.o \
./src/Controller/Runner.o 

CPP_DEPS += \
./src/Controller/NodeController.d \
./src/Controller/NodeRunner.d \
./src/Controller/Runner.d 


# Each subdirectory must supply rules for building sources it contributes
src/Controller/%.o: ../src/Controller/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



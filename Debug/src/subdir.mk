################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Cliente.c \
../src/Dvd.c \
../src/Locacao.c \
../src/main.c 

OBJS += \
./src/Cliente.o \
./src/Dvd.o \
./src/Locacao.o \
./src/main.o 

C_DEPS += \
./src/Cliente.d \
./src/Dvd.d \
./src/Locacao.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



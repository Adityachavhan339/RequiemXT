cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

project(RequiemXT_Firmware C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(RequiemXT main.c)
target_link_libraries(RequiemXT pico_stdlib hardware_adc)

pico_enable_stdio_usb(RequiemXT 1)
pico_enable_stdio_uart(RequiemXT 0)
pico_add_extra_outputs(RequiemXT)

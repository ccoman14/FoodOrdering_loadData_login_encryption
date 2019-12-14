cmake_minimum_required(VERSION 3.15)
project(FoodOrderingRModular C)

set(CMAKE_C_STANDARD 99)

add_executable(FoodOrderingRModular data_loading.c data_loading.h  main.c choosingFood.c free_memory.c free_memory.h login.c login.h additional_things.c initialize_variables.c variables.h buyer.h user_data.c order.h )
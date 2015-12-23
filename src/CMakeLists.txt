add_subdirectory(GPIOClass)
include_directories(GPIOClass)

add_executable(gpio_test main.cpp)
target_link_libraries(gpio_test gpio_class)

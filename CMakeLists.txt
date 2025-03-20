cmake_minimum_required(VERSION 3.7)

project(App)

set(CMAKE_(XX_STANDARD 17))

include_directories(debugging)

#Add executables

add_executable(App debugging/app.cpp
                    debugging/main.cpp
                    debugging/menu.cpp)

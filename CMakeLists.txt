# min version of cmake
cmake_minimum_required(VERSION 3.10)

# name of project
project(ReservationSystem  VERSION 1.0)

file(GLOB SOURCE_FILES "src/*.cpp")

add_executable(ReservationSystem ${SOURCE_FILES})
target_include_directories(ReservationSystem PUBLIC include)


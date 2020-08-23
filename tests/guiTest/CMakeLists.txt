cmake_minimum_required(VERSION 3.5)

project(guiTest LANGUAGES CXX)


find_package(Qt5Test REQUIRED)
find_package(Qt5Gui REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()

add_executable(guiTest tst_guitest.cpp)
add_test(NAME guiTest COMMAND guiTest)

target_link_libraries(guiTest PRIVATE Qt5::Gui Qt5::Test)


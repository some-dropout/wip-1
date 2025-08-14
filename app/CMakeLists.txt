cmake_minimum_required(VERSION 3.10..4.0)

project(JA11Flash LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(hidapi REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

qt5_wrap_ui(GENERATED_UI_SRCS
  boot.ui)
qt5_wrap_cpp(GENERATED_META_SRCS
  boot.h)
add_executable(ja11_flash
  ${GENERATED_UI_SRCS}
  ${GENERATED_META_SRCS}
  boot.cpp
  main.cpp)
target_include_directories(ja11_flash PRIVATE
  ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(ja11_flash PRIVATE
  hidapi::hidapi
  Qt5::Widgets)
set_target_properties(ja11_flash PROPERTIES WIN32_EXECUTABLE ON)

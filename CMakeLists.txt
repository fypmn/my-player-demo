cmake_minimum_required(VERSION 3.0)

project(player-demo)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(PkgConfig REQUIRED)

pkg_check_modules(AVCODEC REQUIRED libavcodec)
pkg_check_modules(AVFORMAT REQUIRED libavformat)
pkg_check_modules(SWSCALE REQUIRED libswscale)
pkg_check_modules(AVUTIL REQUIRED libavutil)
pkg_check_modules(SWRESAMPLE REQUIRED libswresample)
pkg_check_modules(AVDEVICE REQUIRED libavdevice)

pkg_check_modules(SDL2 REQUIRED sdl2)
find_package(Qt5 REQUIRED COMPONENTS Core Widgets LinguistTools)

add_subdirectory(src)
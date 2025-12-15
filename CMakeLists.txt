cmake_minimum_required(VERSION 3.14.0)
project(lvgl_cpp_simulator VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

# lvgl
set(LV_CONF_INCLUDE_SIMPLE OFF)
set(LV_BUILD_CONF_PATH ${CMAKE_SOURCE_DIR}/utils/lv_conf.h CACHE PATH "LVGL config path")
set(LV_CONF_PATH ${CMAKE_SOURCE_DIR}/utils/lv_conf.h CACHE PATH "LVGL config path")
add_subdirectory(dependencies/lvgl)

# sdl
find_package(SDL2 REQUIRED SDL2)
include_directories(PUBLIC ${SDL2_INCLUDE_DIRS})
target_include_directories(lvgl PUBLIC ${SDL2_INCLUDE_DIRS})

# smooth ui toolkit
set(SMOOTH_UI_TOOLKIT_BUILD_EXAMPLE OFF)
add_subdirectory(dependencies/smooth_ui_toolkit)

add_executable(lvgl_cpp_simulator main.cpp)

target_link_libraries(lvgl_cpp_simulator PUBLIC 
    lvgl
    lvgl_examples
    lvgl_demos
    ${SDL2_LIBRARIES}
    smooth_ui_toolkit
)

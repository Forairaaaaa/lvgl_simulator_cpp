/**
 * @file main.cpp
 * @author Forairaaaaa
 * @brief
 * @version 0.1
 * @date 2025-12-13
 *
 * @copyright Copyright (c) 2025
 *
 */
#include "utils/lvgl_wrapper.hpp"
#include <lv_examples.h>
#include <lv_demos.h>

int main()
{
    lvgl::create_window(800, 520);

    lv_demo_widgets();
    // lv_demo_stress();
    // lv_demo_benchmark();
    // lv_example_label_1();
    // lv_example_button_1();

    while (1) {
        lvgl::update_window();
    }
}

#pragma once
#include <GLFW/glfw3.h>

/* Intializes the key_callback function */
/* Applies to the window for a given key, scancode, action, and mods */
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
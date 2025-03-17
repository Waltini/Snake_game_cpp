#include "key_callback.h"
#include <iostream>
#include <GLFW/glfw3.h>

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    /* If user PRESSES the ESCAPE the window is told to close */
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    /* If user PRESSES the P KEY then "print" is outputted */
    if (key == GLFW_KEY_P && action == GLFW_PRESS)
        std::cout << "print";

}
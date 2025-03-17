#include <GLFW/glfw3.h>
#include "error_callback.h"
#include "key_callback.h"

int main(void)
{
    /* Set the error callback to the header function error_callback */
    glfwSetErrorCallback(error_callback);

    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1000, 1000, "Sneck Gmae", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Sets the key callback to the key_callback header function */
    glfwSetKeyCallback(window, key_callback);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
#include <GLFW/glfw3.h>
#include <iostream>

bool gameOver;
const int width = 20;
const int height = 20;
int headX, headY, fruitX, fruitY;
enum edirection{STOP = 0, UP, DOWN, LEFT, RIGHT};
edirection dir;

void Setup() {
    gameOver = false;
    //Snake doesn't move initially
    dir = STOP;
    //Setup snake start position
    headX = width / 2;
    headY = height / 2;
    //Create fruit positions random
    fruitX = rand() % width;
    fruitY = rand() % height;
}

void Draw() {
    system("cls");
    for (int i = 0; i < width + 1; i++) {
        std::cout << "#";
    }
    std::cout << "\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0;j < width;j++) {
            if (j == 0) {
                std::cout << "#";
            }
            if (j == width - 1) {
                std::cout << "#";
                std::cout << "\n";
            }
            //if (j == fruitX) {
            //    if (i == fruitY) {
            //        std::cout << "F";
            //    }
            //}
            else {
                std::cout << " ";
            }
        } 
    }
    for (int i = 0; i < width + 1; i++) {
        std::cout << "#";
    }
}

void Input() {

}

void Logic() {

}
int main(void){
//    GLFWwindow* window;
//
//    /* Initialize the library */
//    if (!glfwInit())
//        return -1;
//
//    /* Create a windowed mode window and its OpenGL context */
//    window = glfwCreateWindow(1000, 1000, "Sneck Gmae", NULL, NULL);
//    if (!window)
//    {
//        glfwTerminate();
//        return -1;
//    }
//
//    /* Make the window's context current */
//    glfwMakeContextCurrent(window);
//
//    /* Loop until the user closes the window */
//    while (!glfwWindowShouldClose(window))
//    {
//        /* Render here */
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        /* Swap front and back buffers */
//        glfwSwapBuffers(window);
//
//        /* Poll for and process events */
//        glfwPollEvents();
//}
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();

    }
    glfwTerminate();
    return 0;
}//fix attempt - can delet




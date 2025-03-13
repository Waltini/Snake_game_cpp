// blank main hopefully fixes merge problem
#include <GLFW/glfw3.h>
#include <iostream>

bool gameOver;
const int width = 20;
const int height = 20;
int headX, headY, fruitX, fruitY;
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
    for (int i = 0; i < width + 1; i++) {
        std::cout << "#";
    }
}

void Input() {

}

void Logic() {

}

    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();

    }
    glfwTerminate();
    return 0;


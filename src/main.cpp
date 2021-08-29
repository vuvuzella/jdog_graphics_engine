#include<iostream>
#include<GLFW/glfw3.h>

using namespace std;

int main() {

    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "GLFW Cherno Game Engine", NULL, NULL);

    if (!window) {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    glClearColor( 0.4f, 0.3f, 0.4f, 0.0f);

    /* Loop until the user closes the window */
    while(!glfwWindowShouldClose(window)) {

        /* Render */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap the front and back buffer */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();

    }
    glfwTerminate();
    return 0;
}

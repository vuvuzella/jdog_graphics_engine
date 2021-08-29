#include<iostream>
#include<GLFW/glfw3.h>
#include<glad/glad.h>

using namespace std;

int main() {

    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* OpenGL configuration */
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(640, 480, "GLFW Cherno Game Engine", NULL, NULL);

    if (!window) {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* extension loader */
    gladLoadGL();

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

#include <stdio.h>
#include <epoxy/gl.h>
#include <epoxy/glx.h>
#include <GLFW/glfw3.h>

int main() {

	if (!glfwInit()) {
		//Initialization failed
		printf("failed\n");
	}

	glfwTerminate();

	return 0;
}

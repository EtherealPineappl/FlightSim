#include <core/core.h>
#include <graphics/graphics.h>
#include <iostream>
#include <GLFW/glfw3.h>

int main() {
	std::cout << "Core: " << core::version() << "\n";
	std::cout << "Graphics: " << graphics::version() << "\n";

	if (glfwInit() == GLFW_FALSE) {
		std::cerr << "Couldn't initialize glfw\n";
		return 1;
	}

	// openGL 4.6 so there are no deprecated APIs
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GLFW_TRUE); // For glDebugMessageCallback in the future

	GLFWwindow* window = glfwCreateWindow(1280, 720, "FlightSim", nullptr, nullptr);
	if (window == nullptr) {
		std::cerr << "Window is null.\n";
		glfwTerminate();
		return 1;
	}

	glfwMakeContextCurrent(window);

	if (!graphics::init(glfwGetProcAddress)) {
		std::cerr << "Graphics init fail.\n";
		glfwDestroyWindow(window);
		glfwTerminate();
		return 1;
	}
	
	glfwSwapInterval(1); // Wait for vsync before swap; limit CPU usage
	while (!glfwWindowShouldClose(window)) {

		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	
	//Cleanup; reverse order of creation
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}


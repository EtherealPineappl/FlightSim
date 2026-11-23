#include <core/core.h>
#include <graphics/graphics.h>
#include <iostream>
#include <GLFW/glfw3.h>

int main() {
	std::cout << "Core: " << core::version() << "\n";
	std::cout << "Graphics: " << graphics::version() << "\n";

	std::cout << "GLFW: " << glfwInit() << "\n";
	glfwTerminate();
	return 0;
}


#include <core/core.h>
#include <graphics/graphics.h>
#include <iostream>

int main() {
	std::cout << "Core: " << core::version() << "\n";
	std::cout << "Graphics: " << graphics::version() << "\n";
	return 0;
}


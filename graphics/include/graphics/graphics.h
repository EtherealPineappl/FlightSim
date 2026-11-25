#pragma once
#include <string_view>

namespace graphics {
	std::string_view version();

	using GLFunction = void (*)();
	using GLLoader = GLFunction (*)(const char*);

	[[nodiscard]] bool init(GLLoader glLoader);
}
#include <graphics/graphics.h>
#include <glad/gl.h>

namespace graphics {
	std::string_view version() {
		return "0.1.0";
	}

	bool init(GLLoader glLoader) {
		return gladLoadGL(glLoader) != 0;
	}
}
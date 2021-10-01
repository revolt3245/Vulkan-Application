#pragma once

#include <glm/glm.hpp>

struct UniformBufferObject
{
	glm::mat4 model;
	glm::mat4 view;
	glm::mat4 proj;
};

struct UniformBufferDynamicObject {
	glm::mat4 model;
};
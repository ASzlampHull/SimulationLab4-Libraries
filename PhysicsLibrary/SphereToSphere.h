#pragma once
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>

class SphereToSphere
{
private:
	glm::vec3 position;
	float radius;

public:
	SphereToSphere(glm::vec3 pos_, float rad_) : position(pos_), radius(rad_) {}
	~SphereToSphere() = default;

	bool Intersects(const SphereToSphere& other) const;
};

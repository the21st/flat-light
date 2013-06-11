#pragma once

#include "..\Wall.h"
#include "..\Common.h"

struct Intersection
{
	// constructor for a no-hit result
	Intersection();

	// constructor for a hit result
	Intersection(const Wall &hitWall, const Vector &position, const Vector &normal, const float &distance);

	~Intersection();

	const Wall* m_hitWall;
	float m_distance;
	Vector m_position;
	Vector m_normal;
};


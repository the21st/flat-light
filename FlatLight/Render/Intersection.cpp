#include "Intersection.h"

Intersection::Intersection()
	:
	m_hitWall(nullptr)
{
}

Intersection::Intersection( const Wall &hitWall, const Vector &position, const Vector &normal, const float &distance )
	:
	m_hitWall(&hitWall),
	m_position(position),
	m_normal(normal),
	m_distance(distance)
{
}

Intersection::~Intersection()
{
}

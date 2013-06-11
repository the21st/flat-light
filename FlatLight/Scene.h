#pragma once

#include "vector"
#include "Wall.h"
#include "Render\Intersection.h"

class Scene
{
private:
	std::vector<Wall> m_walls;
	std::vector<Wall*> m_lights;

public:
	Scene();
	~Scene();

	void AddWall(const Wall &wall);

	Color GetDirectIllumination( const Vector& pixelPosition ) const;
	Intersection Trace( const Ray &ray ) const;
};


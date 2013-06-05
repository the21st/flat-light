#pragma once

#include "vector"
#include "Wall.h"

class Scene
{
private:
	std::vector<Wall> m_walls;

public:
	Scene();
	~Scene();

	void AddWall(const Wall &wall);
};


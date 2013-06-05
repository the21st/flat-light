#include "Scene.h"


Scene::Scene()
{
}


Scene::~Scene()
{
}

void Scene::AddWall( const Wall &wall )
{
	m_walls.push_back(wall);
}

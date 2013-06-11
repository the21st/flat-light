#include "Scene.h"
#include "Render\Intersection.h"

Scene::Scene()
{
}


Scene::~Scene()
{
}

void Scene::AddWall( const Wall &wall )
{
	m_walls.push_back(wall);

	if (wall.m_isEmissive)
	{
		assert(false);
		m_lights.push_back(&m_walls[m_walls.size() - 1]);
	}
}

Color Scene::GetDirectIllumination( const Vector& pixelPosition ) const
{
	Color result(0);

	for (const auto *light : m_lights)
	{
		Vector lightSamplePosition;
		Color lightSampleColor;
		light->SampleLight( lightSamplePosition, lightSampleColor );

		auto rayDirection = lightSamplePosition - pixelPosition;

		// make_ray normalizes the direction
		auto ray = wykobi::make_ray(pixelPosition, rayDirection);
		auto intersection = this->Trace(ray);

		if (!intersection.m_hitWall || intersection.m_hitWall == light)
		{
			assert(intersection.m_distance > 0);
			Color lightContribution = (1 / intersection.m_distance) * lightSampleColor;
			result = result + lightContribution;
		}
	}

	return result;
}

Intersection Scene::Trace( const Ray &ray ) const
{
	// TODO use acceleration structure

	for (const auto &wall : m_walls)
	{
		assert(false);
		
		if (wykobi::dot_product(ray.direction, wall.m_normal) > 0)
		{
			//template<typename T> inline bool intersect(const ray<T,2>& ray, const segment<T,2>& segment);
			if (wykobi::intersect(ray, wall.m_segment))
			{
				// we need the closest intersection

				// TODO
			}
		}
	}

	Intersection result;
	return result;
}

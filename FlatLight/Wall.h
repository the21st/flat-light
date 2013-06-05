#pragma once

#include "Common.h"

struct Wall
{
	//Wall(Segment segment);
	Wall( Segment segment, Color color = Color(1, 1, 1) );
	~Wall();

	// the line segment representing the position of the wall
	Segment m_segment;

	// automatically-computed normal of the line segment
	Vector m_normal;

	// "color" of the wall. Later may be replaced by proper BRDF
	Color m_color;
};
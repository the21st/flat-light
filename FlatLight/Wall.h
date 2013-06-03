#pragma once

#include "Common.h"

struct Wall
{
	Wall(Segment segment);
	~Wall();

	Segment m_segment;
	Vector m_normal;
};
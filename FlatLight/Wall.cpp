#include "Wall.h"

Wall::Wall( Segment segment )
	:m_segment(segment)
{
	auto dx = segment[1].x - segment[0].x;
	auto dy = segment[1].y - segment[0].y;
	m_normal = wykobi::make_vector(-dy, dx);
	m_normal = normalize(m_normal);
}

Wall::~Wall()
{

}

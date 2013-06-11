#include "Wall.h"

Wall::Wall( Segment segment, Color color )
	:
	m_segment(segment),
	m_color(color),
	m_isEmissive(false)
{
	auto dx = segment[1].x - segment[0].x;
	auto dy = segment[1].y - segment[0].y;
	m_normal = wykobi::make_vector(-dy, dx);
	m_normal = normalize(m_normal);
}

Wall::~Wall()
{

}

void Wall::SampleLight( Vector &position, Color &color ) const
{
	position = generate_random_point(m_segment);
	color = m_color;
}

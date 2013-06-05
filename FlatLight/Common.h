#pragma once

#include <assert.h>
#include "wykobi\wykobi.hpp"

//typedef segment <Float,2> segment2d;
//typedef line    <Float,2> line2d;

typedef wykobi::vector2d<float> Vector;
typedef wykobi::ray<float, 2> Ray;
typedef wykobi::segment<float,2> Segment;
typedef wykobi::vector3d<float> Color;

Color make_color(unsigned int hexValue);
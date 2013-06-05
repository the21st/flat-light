#include "Common.h"

Color make_color(unsigned int hexValue)
{
	float red = (hexValue % 256) / 255.0f;
	hexValue /= 256;
	float green = (hexValue % 256) / 255.0f;
	hexValue /= 256;
	float blue = (hexValue % 256) / 255.0f;
	//hexValue /= 256;
	//float alpha = (hexValue % 256) / 255.0f;
	return Color(red, green, blue);
}
#include "DirectLightRenderer.h"


DirectLightRenderer::DirectLightRenderer()
{
}


DirectLightRenderer::~DirectLightRenderer()
{
}

Color DirectLightRenderer::GetColorAtPos( const Scene& scene, const Vector& pixelPosition ) const 
{
	return scene.GetDirectIllumination(pixelPosition);
}

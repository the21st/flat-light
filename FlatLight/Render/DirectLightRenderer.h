#pragma once

#include "IRenderer.h"

class DirectLightRenderer :
	public IRenderer
{
public:
	DirectLightRenderer();
	virtual ~DirectLightRenderer() override;

	virtual Color GetColorAtPos(const Scene& scene, const Vector& pixelPosition) const override;
};


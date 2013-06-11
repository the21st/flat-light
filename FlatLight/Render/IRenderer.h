#pragma once

#include "..\Common.h"
#include "..\Scene.h"

class IRenderer
{
public:

	// virtual dtor for derived classes
	virtual ~IRenderer() {}

	virtual Color GetColorAtPos(const Scene& scene, const Vector& pixelPosition) const = 0;
};

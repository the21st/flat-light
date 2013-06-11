#pragma once

#include <string>
#include "..\Scene.h"
#include <memory>

class SVGParser
{
public:
	SVGParser();

	// Parses an SVG file and returns a unique pointer to a new scene.
	// The scene contains only line segments as primitives.
	// If an object has fill, it is interpreted as a set of emissive segments.
	std::unique_ptr<Scene> Parse(const std::string &filePath) const;
};
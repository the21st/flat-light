#pragma once

#include <string>
#include "..\Scene.h"
#include <memory>

class SVGParser
{
public:
	SVGParser();

	std::unique_ptr<Scene> Parse(const std::string &filePath);
};
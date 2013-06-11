#include "SVGParser.h"
#include "nanosvg\nanosvg.h"
#include <memory>
#include "..\Wall.h"

SVGParser::SVGParser()
{

}

std::unique_ptr<Scene> SVGParser::Parse(const std::string &filePath) const
{
	auto scene = std::unique_ptr<Scene>(new Scene);

	// Load
	auto plist = svgParseFromFile(filePath.c_str());

	// Use parsed data
	for (auto path = plist; path != nullptr; path = path->next)
	{
		for (int i = 0; i < path->npts - 1; ++i)
		{
			float x = path->pts[i*2];
			float y = path->pts[i*2+1];

			auto newWall = Wall(wykobi::make_segment(
				path->pts[i*2],
				path->pts[i*2 + 1],
				path->pts[i*2 + 2],
				path->pts[i*2 + 3]),
				make_color(path->strokeColor));

			// hasFill is used for marking emitters for now
			newWall.m_isEmissive = path->hasFill;
			scene->AddWall(newWall);
		}

		if (path->closed)
		{
			auto newWall = Wall(wykobi::make_segment(
				path->pts[2 * (path->npts - 1)],
				path->pts[2 * (path->npts - 1) + 1],
				path->pts[0],
				path->pts[1]),
				make_color(path->strokeColor));

			// hasFill is used for marking emitters for now
			newWall.m_isEmissive = path->hasFill;
			scene->AddWall(newWall);
		}
	}

	// Delete
	svgDelete(plist);

	return scene;
}

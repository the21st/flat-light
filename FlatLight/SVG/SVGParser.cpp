#include "SVGParser.h"
#include "nanosvg\nanosvg.h"
#include <memory>

SVGParser::SVGParser()
{

}

std::unique_ptr<Scene> SVGParser::Parse(const std::string &filePath)
{
	auto scene = std::unique_ptr<Scene>(new Scene);

	//// Load
	//auto plist = svgParseFromFile(filePath.c_str());

	//// Use...
	//for (auto path = plist; path != nullptr; path = path->next)
	//{
	//	auto closed = path->closed;
	//	//glBegin(it->closed ? GL_LINE_LOOP : GL_LINE_STRIP);
	//	for (int i = 0; i < path->npts; ++i)
	//	{
	//		float x = path->pts[i*2];
	//		float y = path->pts[i*2+1];
	//	}
	//}

	//// Delete
	//svgDelete(plist);

	return scene;
}

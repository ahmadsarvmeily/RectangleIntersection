#pragma once
#include <vector>
#include <fstream>
#include "Rectangle.h"
#include <string>

class RectangleFileParser {

public:
	RectangleFileParser(char* filePath) {
		std::ifstream file(filePath);
		int x1, y1, x2, y2, x3, y3, x4, y4;

		if (file.is_open()) {
			// For each line in the text file
			while (file.good()) {
				// Read all coordinates in order
				file >> x1;
				file >> y1;
				file >> x2;
				file >> y2;
				file >> x3;
				file >> y3;
				file >> x4;
				file >> y4;
				// Create a rectangle from the coordinates and store in list
				rectangles.push_back({ x1,y1,x2,y2,x3,y3,x4,y4 });
			}
		}

		file.close();
	}

	std::vector<Rectangle> GetRectangles() const {
		return rectangles;
	}

private:
	std::vector<Rectangle> rectangles;
};
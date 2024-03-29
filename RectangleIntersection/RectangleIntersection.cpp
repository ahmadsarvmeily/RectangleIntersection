#include "Rectangle.h"
#include "RectangleFileParser.h"
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	
	char* filePath = argv[1];

	RectangleFileParser parser(filePath);
	vector<Rectangle> rectangles = parser.GetRectangles();

	for (size_t i = 0; i < rectangles.size(); ++i) {
		for (size_t j = 1; j < rectangles.size(); ++j) {
			// i < j ensures that duplicate matches are not printed,
			// and that rectangles are not compared with themselves
			if (rectangles[i].IntersectsWith(rectangles[j]) && i < j) {
				cout << "Rectangle " << i+1 << " intersects with rectangle " << j+1 << endl;
			}
		}
	}

    return 0;
}
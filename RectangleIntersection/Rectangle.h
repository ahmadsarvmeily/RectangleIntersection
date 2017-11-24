#pragma once
#include <algorithm>

class Rectangle {

public:
	// Default rectangle constructor, takes four points (x and y coordinates).
	// assumes that rectangles are not rotated arbitrarily.
	Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

	// Alternative rectangle constructor used for testing.
	// Takes coordinates of top left corner, along with width and height of the rectangle.
	Rectangle(int x, int y, int width, int height);

	// Indicates if rectangle intersects with another given rectangle.
	// Assumes that equal boundaries (rectangles touching) mean that rectangles intersect.
	bool IntersectsWith(const Rectangle& rhs) const;

private:
	int left, right, top, bottom;
};
#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
	:
	left (std::min({ x1,x2,x3,x4 })),
	right (std::max({ x1,x2,x3,x4 })),
	top (std::min({ y1,y2,y3,y4 })),
	bottom (std::max({ y1,y2,y3,y4 }))
{}

Rectangle::Rectangle(int x, int y, int width, int height)
	:
	left (x),
	right (x + width),
	top (y),
	bottom (y + height)
{}

bool Rectangle::IntersectsWith(const Rectangle& rhs) const {
	
	return (left <= rhs.right && right >= rhs.left && top <= rhs.bottom && bottom >= rhs.top);
}
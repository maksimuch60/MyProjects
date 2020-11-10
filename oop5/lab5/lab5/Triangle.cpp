#include "Triangle.h"

Triangle::Triangle(const Triangle& triangle) :TwoDShape(triangle)
{
	size = triangle.size;
	perimeter = triangle.perimeter;
}
Triangle::Triangle(int r) : TwoDShape(r) { size = r; perimeter = 3 * r; }
void Triangle::Print() { std::cout << "Type of shape: Triangle\n" << "Area: " << Area() << "\nPerimeter: "<< perimeter << "\n"; }
double Triangle::Area() { return 1.71*size*size/4; }

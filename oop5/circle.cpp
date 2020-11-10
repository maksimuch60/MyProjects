#include "Circle.h"
Circle::Circle(const Circle& circle):TwoDShape(circle)
{
	size = circle.size;
	CircLength = circle.CircLength;
}
Circle::Circle(int r) : TwoDShape(r) { size = r; CircLength = 2 * 3.1415 * r; }
void Circle::Print() { std::cout << "Type of shape: Circle\n" << "Area: " << Area() << "\nLength: "<< CircLength <<"\n"; }
double Circle::Area() { return 3.1415*size * size; }

#include "Square.h"

Square::Square(const Square& square) :TwoDShape(square)
{
	size = square.size;
	perimeter = square.perimeter;
}
Square::Square(int r) : TwoDShape(r) { size = r; perimeter = 4 * r; }
void Square::Print() { std::cout << "Type of shape: Square\n" << "Area: "<< Area()<< "\nPerimeter: "<< perimeter << "\n"; }
double Square::Area() { return size * size * 1.; }
#include "Cube.h"

Cube::Cube(const Cube& cube) :ThreeDShape(cube)
{
	size = cube.size;
	CoverArea = cube.CoverArea;
}
Cube::Cube(int r) : ThreeDShape(r) { size = r; CoverArea = 6 * r * r; }
void Cube::Print() { std::cout << "Type of shape: Cube\n" << "Volume: " << Volume() << "\nSurface area: "<< CoverArea << "\n"; }
double Cube::Volume() { return size * size * size; }

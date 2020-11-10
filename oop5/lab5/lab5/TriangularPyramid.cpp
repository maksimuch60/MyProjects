#include "TriangularPyramid.h"

TriangularPyramid::TriangularPyramid(const TriangularPyramid& pyramid) :ThreeDShape(pyramid)
{
	size = pyramid.size;
	height = pyramid.height;
}
TriangularPyramid::TriangularPyramid(int r) : ThreeDShape(r) { size = r; height = r * 0.8165; }
void TriangularPyramid::Print() { std::cout << "Type of shape: TriangularPyramid\n" << "Volume: " << Volume() << "\nHeight: " << height << "\n"; }
double TriangularPyramid::Volume() { return 1.*size * size * size/(6*1.41); }

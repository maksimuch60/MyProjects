#include "Sphere.h"

Sphere::Sphere(const Sphere& sphere) :ThreeDShape(sphere)
{
	size = sphere.size;
	AreaOfDiamSection = sphere.AreaOfDiamSection;
}
Sphere::Sphere(int r) : ThreeDShape(r) { size = r; AreaOfDiamSection = 3.1414 * r * r; }
void Sphere::Print() { std::cout << "Type of shape: Sphere\n" << "Volume: " << Volume() << "\nArea of diametrical section: " << AreaOfDiamSection<< "\n"; }
double Sphere::Volume() { return 3.1415 * 4 * size * size * size / 3; }

#pragma once
#include "Shape.h"
class Sphere :
    public ThreeDShape
{
	double AreaOfDiamSection;
public:
	Sphere(const Sphere&);
	Sphere(int);
	void Print() override;
	double Volume() override;
};


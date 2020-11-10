#pragma once
#include "Shape.h"
class TriangularPyramid :
    public ThreeDShape
{
	float height;
public:
	TriangularPyramid(const TriangularPyramid&);
	TriangularPyramid(int);
	void Print() override;
	double Volume() override;
};


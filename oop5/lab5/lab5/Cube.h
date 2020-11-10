#pragma once
#include "Shape.h"
class Cube :
    public ThreeDShape
{
	double CoverArea;
public:
	Cube(const Cube&);
	Cube(int);
	void Print() override;
	double Volume() override;
};


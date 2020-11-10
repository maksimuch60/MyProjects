#pragma once
#include "Shape.h"
class Triangle :
    public TwoDShape
{
	int perimeter;
public:
	Triangle(const Triangle&);
	Triangle(int);
	void Print() override;
	double Area() override;
};


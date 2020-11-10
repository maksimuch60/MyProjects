#pragma once
#include "Shape.h"
class Circle :
    public TwoDShape
{
	double CircLength;
public:
	Circle(const Circle&);
	Circle(int);
	void Print() override;
	double Area() override;
};

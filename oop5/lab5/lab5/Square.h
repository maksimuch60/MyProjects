#pragma once
#include "Shape.h"
class Square :
    public TwoDShape
{
	int perimeter;
public:
	Square(const Square&);
	Square(int);
	void Print() override;
	double Area() override;
};


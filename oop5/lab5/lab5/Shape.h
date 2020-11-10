#pragma once
#include <string.h>
#include <iostream>
using namespace std;

class Shape
{
public:
	Shape() {};
	virtual void Print() = 0;
};

class TwoDShape : public Shape
{
protected:
	int size;
public:
	TwoDShape(const TwoDShape& tw)
	{
		size = tw.size;
	}
	TwoDShape(int r) { size = r; };
	virtual double Area() = 0;
};

class ThreeDShape :public Shape
{
protected:
	int size;
public:
	ThreeDShape(const ThreeDShape& th)
	{
		size = th.size;
	}
	ThreeDShape(int r) { size = r; };
	virtual double Volume() = 0;
};
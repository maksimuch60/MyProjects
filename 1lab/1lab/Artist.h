#pragma once
#include "Employee.h"
#include "Newspaper.h"

class Artist:public Employee
{
	int ImageCount;
public:
	Artist(string, int, int, int);
	~Artist();
	void ChangeImage(int, Newspaper);
	int Get();
};


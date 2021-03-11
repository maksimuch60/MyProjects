#pragma once
#include "Employee.h"
#include "Newspaper.h"


class Editor : public Employee
{
	int ReleaseCount;
public:
	Editor(string, int, int, int);
	~Editor();
	void ChangePage(int, Newspaper);
	int Get();
};


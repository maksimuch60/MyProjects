#include "Artist.h"
#include "Newspaper.h"
#include "Employee.h"


Artist::Artist(string name, int age, int salary, int imCount):Employee(name, age, salary)
{
	ImageCount = imCount;
}


Artist::~Artist(){}


void Artist::ChangeImage(int count, Newspaper news)
{
	news.Set(0, count);
}


int Artist::Get()
{
	return ImageCount;
}
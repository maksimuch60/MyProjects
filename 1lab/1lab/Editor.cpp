#include "Editor.h"
#include "Newspaper.h"
#include "Employee.h"

Editor::Editor(string name = "", int age = 0, int salary = 0, int relCount = 0):Employee(name, age, salary)
{
	ReleaseCount = relCount;
}


Editor::~Editor() {}


void Editor::ChangePage(int count, Newspaper news)
{
	news.Set(count, 0);
}


int Editor::Get()
{
	return ReleaseCount;
}

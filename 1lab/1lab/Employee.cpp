#include "Employee.h"

Employee::Employee()
{
	Age = 0;
	Name = "";
	Salary = 0;
}

Employee::Employee(string name = "", int age = 0, int salary = 0)
{
	Name = name;
	Age = age;
	Salary = salary;
}

int Employee::getAge() { return Age; }
string Employee::getName() { return Name; }
int Employee::getSalary() { return Salary; }

void Employee::setName(string name) { Name = name; }
void Employee::setAge(int age) { Age = age; }
void Employee::setSalary(int salary) { Salary = salary; }


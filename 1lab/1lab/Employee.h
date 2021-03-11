#pragma once
#include <string>
using namespace std;
class Employee
{
private:
	string Name;
	int Age;
	int Salary;
public:
	Employee();
	Employee(string, int, int);
	string getName();
	int getAge();
	int getSalary();
	void setName(string);
	void setAge(int);
	void setSalary(int);

};


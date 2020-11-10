#include "Shape.h"
#include "Circle.h"
#include "Cube.h"
#include "Sphere.h"
#include "Square.h"
#include "Triangle.h"
#include "TriangularPyramid.h"
using namespace std;

int rightValue(int left, int right)
{
	int value;
	cin >> value;
	while (value<left || value>right)
	{
		cout << "Your input incorrect. Try again\n";
		cin >> value;
	}
	return value;
}

void _2D()
{
	int rad, sizeSq, sizeTr, exit;
	while (true)
	{
		cout << "Entet radius of the circle: ";
		rad = rightValue(0, 20);
		Circle circle(rad);
		circle.Print();
		cout << "Entet size of the square: ";
		sizeSq = rightValue(0, 20);
		Square square(sizeSq);
		square.Print();
		cout << "Entet size of the triangle: ";
		sizeTr = rightValue(0, 20);
		Triangle triangle(sizeTr);
		triangle.Print();
		cout << "Do you want to exit?\n1 - Yes\n2 - No\n";
		exit = rightValue(1, 2);
		if (exit == 1) return;
	}
}

void _3D()
{
	int rad, sizeCu, sizeTrPy, exit;
	while (true)
	{
		cout << "Entet radius of the sphere: ";
		rad = rightValue(0, 20);
		Sphere sphere(rad);
		sphere.Print();
		cout << "Entet size of the cube: ";
		sizeCu = rightValue(0, 20);
		Cube cube(sizeCu);
		cube.Print();
		cout << "Entet size of the triangular pyramid: ";
		sizeTrPy = rightValue(0, 20);
		TriangularPyramid triangularPyramid(sizeTrPy);
		triangularPyramid.Print();
		cout << "Do you want to exit?\n1 - Yes\n2 - No\n";
		exit = rightValue(1, 2);
		if (exit == 1) return;
	}
}

void main()
{
	int type;
	while (true)
	{
		cout << "Enter type of shape:\n1 - 2D\n2 - 3D\n3 - Exit\n";
		type = rightValue(1, 3);
		switch (type)
		{
		case 1:
			_2D();
			break;
		case 2:
			_3D();
			break;
		case 3:
			return;
		}
	}
}

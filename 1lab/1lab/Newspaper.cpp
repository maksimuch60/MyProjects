#include "Newspaper.h"
#include <iostream>
using namespace std;

Newspaper::Newspaper()
{
	Page = 0; Image = 0;
}
Newspaper::Newspaper(int page = 0, int image = 0)
{
	Page = page;
	Image = image;
}


Newspaper::~Newspaper() {}


void Newspaper::Set(int page, int image)
{
	if (page != -1)
	{
		Page = page;
	}
	if (image != -1)
	{
		Image = image;
	}
}


int Newspaper::GetPage() { return Page; }


int Newspaper::GetImage() { return Image; }
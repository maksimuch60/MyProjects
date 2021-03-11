#pragma once
class Newspaper
{
	int Page;
	int Image;
public:
	Newspaper();
	Newspaper(int, int);
	~Newspaper();
	void Set(int, int);
	int GetPage();
	int GetImage();

};


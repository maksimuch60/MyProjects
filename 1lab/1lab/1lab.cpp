#include <iostream>
#include "Newspaper.h"
#include "Artist.h"
#include "Editor.h"
#include "Employee.h"
#include "SmartPointer.h"
#include "Transaction.h"
using namespace std;


void FunEditor(SmartPointer<Transaction<Newspaper>>);
void FunArtist(SmartPointer<Transaction<Newspaper>>);

int main()
{
	int choice;
	SmartPointer<Transaction<Newspaper>> ptr = new Transaction<Newspaper>;
	Editor* Bruce = new Editor("Bruce", 30, 5000, 0);
	Artist* Mark = new Artist("Mark", 25, 5500, 0);
	while (true)
	{
		cout << "Who will take the newspaper for revision?\n1 - Mark(Artist)\n2 - Bruce(Editor)\n3 - Exit\n";
		cin >> choice;
		while (choice < 1 && choice > 3)
		{
			cout << "Bad try...Again\n";
			cin >> choice;
		}
		switch (choice)
		{
		case 1:
			FunArtist(ptr);
			break;
		case 2:
			FunEditor(ptr);
			break;
		case 3:
			return 0;
		}
	}
}



void FunArtist(SmartPointer<Transaction<Newspaper>> ptr)
{
	int count, choice;
	cout << "Enter the new number of images in the newspaper: ";
	cin >> count;
	while (count < 1)
	{
		cout << "Count will be more then zero";
		cin >> count;
	}
	ptr->Show();
	ptr->BeginTransaction(-1, count);
	cout << "Are you sure to commit transaction?\n1 - Yes\t2 - No\n";
	cin >> choice;
	while (choice < 1 && choice>2)
	{
		cin >> choice;
	}
	if (choice == 1)
		ptr->Commit();
	else
		ptr->Canceling();
	ptr->Show();
}


void FunEditor(SmartPointer<Transaction<Newspaper>> ptr)
{
	int count, choice;
	cout << "Enter the new number of pages in the newspaper: ";
	cin >> count;
	while (count < 1)
	{
		cout << "Count will be more then zero";
		cin >> count;
	}
	ptr->Show();
	ptr->BeginTransaction(count, -1);
	cout << "Are you sure to commit transaction?\n1 - Yes\t2 - No\n";
	cin >> choice;
	while (choice < 1 && choice>2)
	{
		cin >> choice;
	}
	if (choice == 1)
		ptr->Commit();
	else
		ptr->Canceling();
	ptr->Show();
}

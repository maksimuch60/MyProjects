#pragma once
#include "Newspaper.h"
#include <iostream>
using namespace std;

template <class T>
class Transaction
{
	T* prev;
	T* curr;
public:

	Transaction();
	Transaction(const Transaction&);
	Transaction& operator=(const Transaction&);
	T* operator->();
	~Transaction();

	void Show();
	int BeginTransaction(int, int);
	void Commit();
	void Canceling();
};

template<class T>
void Transaction<T>::Show()
{
	cout << "Pages: " << curr->GetPage() << "\tImages: " << curr->GetImage() << "\n\n";
}

template<class T>
Transaction<T>::Transaction()
{
	prev = NULL;
	curr = new T;
}


template<class T>
Transaction<T>::Transaction(const Transaction& obj)
{
	prev = NULL;
	curr = new T(*(obj.curr));
}


template<class T>
Transaction<T>::~Transaction()
{
	delete prev;
	delete curr;
}


template<class T>
Transaction<T>& Transaction<T>::operator=(const Transaction& obj)
{
	if (this != &obj)
	{
		delete curr;
		curr = new T(*(obj.curr));
	}
	return *this;
}


template<class T>
T* Transaction<T>::operator->()
{
	return curr;
}


template<class T>
int Transaction<T>::BeginTransaction(int page, int image)
{
	delete prev;
	prev = curr;
	curr = new T(*prev);
	if (!curr)
		return 0;
	curr->Set(page, image);
	return 1;
}


template<class T>
void Transaction<T>::Commit()
{
	delete prev;
	prev = NULL;
	cout << "Comitted\n";
}


template<class T>
void Transaction<T>::Canceling()
{
	if (prev != NULL)
	{
		delete curr;
		curr = prev;
		prev = NULL;
	}
	cout << "Canceling\n";
}


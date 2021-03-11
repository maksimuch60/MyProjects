#pragma once
#include "Newspaper.h"
#include <iostream>
using namespace std;

template <class T>
struct State
{
	T* SmPtr;
	int RefCounter;
};

template <class T>
class SmartPointer
{
	State<T>* SmartPtr;
public: 
	SmartPointer(T* SmPtr = 0);
	SmartPointer(const SmartPointer&);
	SmartPointer& operator= (const SmartPointer&);
	T* operator->() const;
	~SmartPointer();
};

template <class T>
SmartPointer<T>::SmartPointer(T* ptr)
{
	if (ptr == NULL)
		SmartPtr = NULL;
	else
	{
		SmartPtr = new State<T>;
		SmartPtr->SmPtr = ptr;
		SmartPtr->RefCounter = 1;
	}
}

template <class T>
SmartPointer<T>::SmartPointer(const SmartPointer& obj)
{
	this->SmartPtr = obj.SmartPtr;
	if (SmartPtr)
		SmartPtr->RefCounter++;
}

template <class T>
SmartPointer<T>::~SmartPointer()
{
	if (SmartPtr)
	{
		SmartPtr->RefCounter--;
		if (SmartPtr->RefCounter < 1)
		{
			delete SmartPtr->SmPtr;
			delete SmartPtr;
		}
	}
}

template <class T>
T* SmartPointer<T>::operator->() const
{
	if (SmartPtr)
		return SmartPtr->SmPtr;
	else
		return NULL;
}

template <class T>
SmartPointer<T>& SmartPointer<T>::operator= (const SmartPointer& obj)
{
	if (SmartPtr)
	{
		SmartPtr->RefCounter--;
		if (SmartPtr->RefCounter < 1)
		{
			delete SmartPtr->SmPtr;
			delete SmartPtr;
		}
	}
	SmartPtr = obj.SmartPtr;
	if (SmartPtr)
		SmartPtr->RefCounter++;
	return *this;
}


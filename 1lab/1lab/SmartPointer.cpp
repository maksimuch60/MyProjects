#include "SmartPointer.h"
#include <iostream>

//template <class T>
//SmartPointer<T>::SmartPointer(T* ptr)
//{
//	if (ptr == NULL)
//		SmartPtr = NULL;
//	else
//	{
//		SmartPtr = new State<T>;
//		SmartPtr->SmPtr = ptr;
//		SmartPtr->RefCounter = 1;
//	}
//}
//
//template <class T>
//SmartPointer<T>::SmartPointer(const SmartPointer& obj)
//{
//	SmartPtr(obj.SmartPtr);
//	if (SmartPtr)
//		SmartPtr->RefCounter++;
//}
//
//template <class T>
//SmartPointer<T>::~SmartPointer()
//{
//	if (SmartPtr)
//	{
//		SmartPtr->RefCounter--;
//		if (SmartPtr->RefCounter < 1)
//		{
//			delete SmartPtr->SmPtr;
//			delete SmartPtr;
//		}
//	}
//}
//
//template <class T>
//T* SmartPointer<T>::operator->() const
//{
//	if (SmartPtr)
//		return SmartPtr->SmPtr;
//	else
//		return NULL;
//}
//
//template <class T>
//SmartPointer<T>& SmartPointer<T>::operator= (const SmartPointer& obj)
//{
//	if (SmartPtr)
//	{
//		SmartPtr->RefCounter--;
//		if (SmartPtr->RefCounter < 1)
//		{
//			delete SmartPtr->SmPtr;
//			delete SmartPtr;
//		}
//	}
//	SmartPtr = obj.SmartPtr;
//	if (SmartPtr)
//		SmartPtr->RefCounter++;
//	return *this;
//}
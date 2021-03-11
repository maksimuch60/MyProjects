#include "Transaction.h"
#include "Artist.h"
#include "Editor.h"
#include <iostream>


//template<class T>
//Transaction<T>::Transaction()
//{
//	prev = NULL;
//	curr = new T;
//}
//
//
//template<class T>
//Transaction<T>::Transaction(const Transaction& obj)
//{
//	prev = NULL;
//	curr = new T(*(obj.curr));
//}
//
//
//template<class T>
//Transaction<T>::~Transaction()
//{
//	delete prev;
//	delete curr;
//}
//
//
//template<class T>
//Transaction<T>& Transaction<T>::operator=(const Transaction& obj)
//{
//	if (this != &obj)
//	{
//		delete curr;
//		curr = new T(*(obj.curr));
//	}
//	return *this;
//}
//
//
//template<class T>
//T* Transaction<T>::operator->()
//{
//	return curr;
//}
//
//
//template<class T>
//int Transaction<T>::BeginTransaction(int page, int image)
//{
//	delete prev;
//	prev = curr;
//	curr = new T(*prev);
//	if (!curr)
//		return 0;
//	curr->Set(page, image);
//	return 1;
//}
//
//
//template<class T>
//void Transaction<T>::Commit()
//{
//	delete prev;
//	prev = NULL;
//	cout << "\nComitted\n";
//}
//
//
//template<class T>
//void Transaction<T>::Canceling()
//{
//	if (prev != NULL)
//	{
//		delete curr;
//		curr = prev;
//		prev = NULL;
//	}
//	cout << "\nCanceling\n";
//}
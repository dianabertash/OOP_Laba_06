#pragma once
#include "List2.h"

using namespace std;

template <typename T> class List
{
private:
	List2<T> *first;
	List2<T> *last;
	int size;
	void RemoveAllItems();
public:
	List();
	~List();

	int GetSize() const;
	void Push(T value);
	T Pop();
	void Clean();
};

template<typename T>  List<T>::List()
{
	this->first = 0;
	this->last = 0;
	this->size = 0;
}
template<typename T> List<T>::~List()
{
	this->Clean();
	cout << "template<typename T> List<T>::~List()";

}
template<typename T> int List<T>::GetSize() const
{
	return this->size;
}


template<typename T> void List<T>::Push(T value)
{
	List2<T> * elem = new List2<T>(value, 0);
	if (0 == this->size)
	{
		this->first = elem;
	}
	else
	{
		this->last->SetNext(elem);
	}
	this->last = elem;

	this->size += 1;
}
template<typename T> T List<T>::Pop()
{
	if (0 == this->size)
	{
		throw "The queue is empty";
	}
	T elem = this->first->GetElem();

	this->size -= 1;

	this->first = this->first->GetNext();

	if (0 == this->size)
	{
		this->last = 0;
	}

	return elem;
}

template<typename T> void List<T>::Clean()
{
	this->RemoveAllItems();
}

template<typename T> void List<T>::RemoveAllItems()
{
	List2<T>* elem = this->first;
	while (elem)
	{
		this->first = elem->GetNext();

		delete elem;
		this->size -= 1;

		elem = this->first;
	}
	this->last = 0;
}

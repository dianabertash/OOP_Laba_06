#pragma once

using namespace std;
template <typename T> class List2
{
private:
	T elem;
	List2 <T> *next;
public:
	List2(T elem, List2<T> *next);
	~List2();
	void SetNext(List2<T>* next);
	List2<T>* GetNext() const;
	void SetElem(const T item);
	const T GetElem() const;
};

template <typename T> List2<T>::List2(T elem, List2<T> *next)
{
	this->elem = elem;
	this->next = next;
}

template <typename T> List2<T>::~List2()
{
	cout << "~List2()" << endl;
}

template<typename T> void List2<T>::SetNext(List2<T>* next)
{
	this->next = next;
}

template<typename T>  List2<T>* List2<T>::GetNext() const
{
	return this->next;
}
template<typename T> void List2<T>::SetElem(const T elem)
{
	this->elem = elem;
}
template<typename T> const T List2<T>::GetElem() const
{
	return this->elem;
}
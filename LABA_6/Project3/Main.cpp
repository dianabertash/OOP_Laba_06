#include<iostream>
#include "List2.h"
#include "List.h"

using namespace std;

int main()
{
	List<int> *list = new List<int>();
	int item;
	int size;

	size = list->GetSize();
	cout << "After creating: size = " << size << endl;
	item = 1;
	list->Push(item);
	size = list->GetSize();
	cout << "Push: " << item << " (size = " << size << ")" << endl;

	item = 2;
	list->Push(item);
	size = list->GetSize();
	cout << "Push: " << item << " (size = " << size << ")" << endl;

	item = 3;
	list->Push(item);
	size = list->GetSize();
	cout << "Push: " << item << " (size = " << size << ")" << endl;

	item = list->Pop();
	size = list->GetSize();
	cout << "Pop: " << item << " (size = " << size << ")" << endl;

	item = list->Pop();
	size = list->GetSize();
	cout << "Pop: " << item << " (size = " << size << ")" << endl;

	item = list->Pop();
	size = list->GetSize();
	cout << "Pop: " << item << " (size = " << size << ")" << endl;

	size = list->GetSize();
	cout << "Before deleting: size = " << size << endl;

	delete list;
	system("pause");
	return 0;
}
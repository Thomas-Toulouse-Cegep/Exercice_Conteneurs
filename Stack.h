#pragma once
#include <string>
template<class T>
class Stack {
private:
	struct StackItem {
		T val;
		StackItem* next;
	};
	StackItem* top;
public:
	Stack();
	~Stack();
	void Add(T text);
	T Remove();
	bool IsEmpty();
};
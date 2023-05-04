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
	void operator += (T text) {
		Add(text);
	}
	T operator -- () {
		return Remove();
	}
	T Remove();
	bool IsEmpty();
};
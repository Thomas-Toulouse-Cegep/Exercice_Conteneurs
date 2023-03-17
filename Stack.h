#pragma once
#include <string>

class Stack {
private:
	struct StackItem {
		std::string val;
		StackItem* next;
	};
	StackItem* top;
public:
	Stack();
	~Stack();
	void Add(std::string text);
	std::string Remove();
	bool IsEmpty();
};
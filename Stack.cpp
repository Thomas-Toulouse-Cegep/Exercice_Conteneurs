#include "Stack.h"

Stack::Stack()
{
	top = nullptr;
}

Stack::~Stack()
{
	StackItem* temp = top;
	while (!IsEmpty()) {
		temp = top;
		top = top->next;
		delete temp;
	}
	temp = nullptr;
}

void Stack::Add(std::string text)
{
	StackItem* newItem = new StackItem;
	newItem->val = text;
	newItem->next = top;

	top = newItem;
	newItem = nullptr;
}

std::string Stack::Remove()
{
	if (IsEmpty()) {
		return "";
	}

	std::string value = top->val;

	StackItem* temp = top;
	top = top->next;
	delete temp;
	temp = nullptr;

	return value;
}

bool Stack::IsEmpty()
{
	return top == nullptr;
}
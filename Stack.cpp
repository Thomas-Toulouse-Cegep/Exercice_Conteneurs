#include "Stack.h"
template<typename T>
Stack<T>::Stack()
{
	top = nullptr;
}
template<typename T>
Stack<T>::~Stack()
{
	StackItem* temp = top;
	while (!IsEmpty()) {
		temp = top;
		top = top->next;
		delete temp;
	}
	temp = nullptr;
}
template<typename T>
void Stack<T>::Add(T text)
{
	StackItem* newItem = new StackItem;
	newItem->val = text;
	newItem->next = top;

	top = newItem;
	newItem = nullptr;
}
template<typename T>

T Stack<T>::Remove()
{
	if (IsEmpty()) {
		exit;
	}

	T val = top->val;

	StackItem* temp = top;
	top = top->next;
	delete temp;
	temp = nullptr;

	return val;
}
template<typename T>
bool  Stack<T>::IsEmpty()
{
	return top == nullptr;
}
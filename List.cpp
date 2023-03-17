#include "List.h"

List::List()
{
	start = end = nullptr;
}

List::~List()
{
	ListItem* temp = start;
	while (!IsEmpty()) {
		temp = start;
		start = start->next;
		delete temp;
	}
	temp = nullptr;
}

void List::Add(std::string text)
{
	ListItem* newitem = new ListItem;
	newitem->val = text;
	newitem->next = nullptr;
	newitem->prev = end;

	if (!IsEmpty())
	{
		end->next = newitem;
	}
	else {
		start = newitem;
	}
	end = newitem;
}

std::string List::RemoveFromStart()
{
	if (IsEmpty())
	{
		return nullptr;
	}
	std::string returnedValue = start->val;
	ListItem* temp = start;
	start = start->next;
	delete temp;
	temp = nullptr;
	return returnedValue;
}

std::string List::RemoveFromEnd()
{
	if (IsEmptyend()) {
		return "";
	}

	std::string value = end->val;

	ListItem* temp = end;
	end = end->prev;
	delete temp;
	temp = nullptr;

	return value;
}

bool List::IsEmpty()
{
	return start == nullptr || end == nullptr;
}
bool List::IsEmptyend()
{
	return end == nullptr;
}
#include "Queue.h"

Queue::Queue()
{
	start = end = nullptr;
}

Queue::~Queue()
{
	QueueItem* temp = start;
	while (!IsEmpty()) {
		temp = start;
		start = start->next;
		delete temp;
	}
	temp = nullptr;
}

void Queue::Add(std::string text)
{
	QueueItem* newitem = new QueueItem;
	newitem->val = text;
	newitem->next = nullptr;

	if (!IsEmpty())
	{
		end->next = newitem;
	}
	else {
		start = newitem;
	}
	end = newitem;
}

std::string Queue::Remove()
{
	if (IsEmpty())
	{
		return NULL;
	}
	std::string returnedValue = start->val;
	QueueItem* temp = start;
	start = start->next;
	delete temp;
	temp = nullptr;
	return returnedValue;
}

bool Queue::IsEmpty()
{
	return start == nullptr;
}
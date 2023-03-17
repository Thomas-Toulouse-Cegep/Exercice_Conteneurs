#pragma once
#include <string>

class Queue {
private:
	struct QueueItem {
		std::string val;
		QueueItem* next;
	};
	QueueItem* start;
	QueueItem* end;
public:
	Queue();
	~Queue();
	void Add(std::string text);
	std::string Remove();
	bool IsEmpty();
};

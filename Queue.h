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
	void  Add(std::string text);
	void operator += (std::string text) {
		Add(text);
	}
	std::string Remove();
	std::string  operator -- () {
		return Remove();
	}
	bool IsEmpty();
	int Find(std::string text) const;
};

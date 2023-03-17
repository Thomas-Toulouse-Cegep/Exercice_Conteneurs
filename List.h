#pragma once
#include <string>

class List {
private:
	struct ListItem {
		std::string val;
		ListItem* next;
		ListItem* prev;
	};
	ListItem* start;
	ListItem* end;
	ListItem* shit;
public:
	List();
	~List();
	void Add(std::string text);
	std::string RemoveFromStart();
	std::string RemoveFromEnd();
	bool IsEmpty();
	bool IsEmptyend();
};
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
	void operator += (std::string text) {
		Add(text);
	}
	std::string Remove();

	std::string RemoveFromStart();
	std::string operator -- () {
		return RemoveFromStart();
	}
	std::string RemoveFromEnd();

	bool IsEmpty();
	bool IsEmptyend();
};
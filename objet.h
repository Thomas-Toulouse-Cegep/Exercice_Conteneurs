#pragma once
#include <iostream>
#include <string>
#include <vector>
class objet
{
public:
	bool operator==(const objet& other) const {
		return value == other.value;
	}
	bool operator<(const objet& other) const {
		return value < other.value;
	}

	objet();
	objet(std::string value);
	std::string  display();
private:
	std::string value;
};

#pragma once
#include <iostream>
#include <string>
class objet
{
public:
	objet();
	objet(std::string value);

	std::string  display();
private:
	std::string value;
};

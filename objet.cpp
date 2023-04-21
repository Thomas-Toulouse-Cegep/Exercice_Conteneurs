#include "objet.h"
#include <iostream>
#include <string>

// constructor
objet::objet()
{
	this->value = "test";
}
objet::objet(std::string value)
{
	this->value = value;
}

std::string objet::display()
{
	return value;
}
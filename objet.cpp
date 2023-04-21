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

// make objet::display() return a string
std::string objet::display()
{
	return value;
}
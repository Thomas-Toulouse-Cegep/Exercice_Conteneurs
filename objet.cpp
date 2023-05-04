#include "objet.h"
#include <iostream>
#include <string>
#include <algorithm>

// constructor
objet::objet()
{
	this->value = "";
}
objet::objet(std::string value)
{
	this->value = value;
}

std::string objet::display()
{
	return value;
}
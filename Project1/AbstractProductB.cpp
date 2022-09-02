#include "stdafx.h"
#include "AbstractProductB.h"


AbstractProductB::AbstractProductB(const string& name)
	: name(name) {}

void AbstractProductB::printName()
{
	cout << "Name: " << this->name << endl;
}
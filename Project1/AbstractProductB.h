#pragma once
#include "stdafx.h"


class AbstractProductB
{
public:
	AbstractProductB() {};

	AbstractProductB(const string& name);

	void printName();

protected:
	string name;
};

#pragma once
#include "stdafx.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"


class AbstractFactory
{
public:

	virtual AbstractProductA* createProductA() = 0;
	virtual AbstractProductB* createProductB() = 0;
};

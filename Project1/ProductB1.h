#pragma once
#include "stdafx.h"
#include "AbstractProductB.h"


class ProductB1 : public AbstractProductB
{
public:
	ProductB1() : AbstractProductB() {}

	ProductB1(string name);
};

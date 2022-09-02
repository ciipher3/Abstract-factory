#pragma once
#include "stdafx.h"
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "ProductA1.h"
#include "ProductB1.h"


class ConcreteFactory1 : public AbstractFactory
{
public:
	ConcreteFactory1() : AbstractFactory() {}

	AbstractProductA* createProductA() override;
	AbstractProductB* createProductB() override;
};

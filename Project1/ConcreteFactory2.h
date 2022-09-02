#pragma once
#include "stdafx.h"
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "ProductA1.h"
#include "ProductB1.h"


class ConcreteFactory2 : public AbstractFactory
{
public:
	ConcreteFactory2() : AbstractFactory() {}

	AbstractProductA* createProductA() override;
	AbstractProductB* createProductB() override;
};
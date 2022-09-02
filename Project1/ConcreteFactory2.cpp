#include "stdafx.h"
#include "ConcreteFactory2.h"


AbstractProductA* ConcreteFactory2::createProductA()
{
	return new ProductA1(200, 400, 6);
}

AbstractProductB* ConcreteFactory2::createProductB()
{
	return new ProductB1("Cat");
}
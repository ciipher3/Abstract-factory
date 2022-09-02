#include "stdafx.h"
#include "ConcreteFactory1.h"


AbstractProductA* ConcreteFactory1::createProductA()
{ 
	return new ProductA1(100, 300, 3);
}

AbstractProductB* ConcreteFactory1::createProductB()
{
	return new ProductB1("Dog");
}
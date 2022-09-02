#include "stdafx.h"
#include "Client.h"


Client::Client(AbstractFactory* factory)
	: productA(factory->createProductA())
	, productB(factory->createProductB()) {}

void Client::run()
{
	cout << "ProductA:" << endl;
	productA->printSpecifications();
	cout << endl;
	cout << "ProductB:" << endl;
	productB->printName();
}

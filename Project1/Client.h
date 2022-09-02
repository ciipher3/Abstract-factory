#pragma once
#include "stdafx.h"
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class Client
{
public:
	Client() {};

	Client(AbstractFactory* factory);

	void run();

private:
	AbstractProductA* productA;
	AbstractProductB* productB;
};

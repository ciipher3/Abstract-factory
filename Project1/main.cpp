#include "stdafx.h"
#include "Client.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"


int main()
{
	cout << "Factory1: \n\n";
	ConcreteFactory1 factory1 = ConcreteFactory1();
	Client client1 = Client(&factory1);
	client1.run();

	cout << "\n---\n";

	cout << "Factory2: \n\n";
	ConcreteFactory2 factory2 = ConcreteFactory2();
	Client client2 = Client(&factory2);
	client2.run();

	return 0;
}
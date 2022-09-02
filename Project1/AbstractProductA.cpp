#include "stdafx.h"
#include "AbstractProductA.h"


void AbstractProductA::printSpecifications()
{
	cout << "Width: " << this->width << endl
		<< "Height: " << this->height << endl
		<< "Warranty: " << this->warranty << endl;
}

AbstractProductA::AbstractProductA(const int width, const int height, const int warranty)
	: width(width)
	, height(height)
	, warranty(warranty) {}

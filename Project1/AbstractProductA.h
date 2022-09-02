#pragma once
#include "stdafx.h"


class AbstractProductA
{
public:
	AbstractProductA()
		: width(0), height(0), warranty(0) {};

	AbstractProductA(const int width, const int height, const int warranty);

	void printSpecifications();

protected:
	int width, height, warranty;
};


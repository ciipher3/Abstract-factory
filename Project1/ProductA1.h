#pragma once
#include "stdafx.h"
#include "AbstractProductA.h"


class ProductA1 : public AbstractProductA
{
public:
	ProductA1() : AbstractProductA() {};

	ProductA1(const int width, const int height, const int warranty);
};

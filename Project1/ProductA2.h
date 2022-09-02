#pragma once
#include "stdafx.h"
#include "AbstractProductA.h"


class ProductA2 : public AbstractProductA
{
public:
	ProductA2() : AbstractProductA() {};

	ProductA2(const int width, const int height, const int warranty);
};

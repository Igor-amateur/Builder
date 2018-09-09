#include "stdafx.h"


#include"Product.h"

namespace Product
{
	void Car::specifications()
	{
		std::cout << "body:" << body->shape << std::endl;
		std::cout << "engine horsepower:" << engine->horsepower << std::endl;
		std::cout << "tire size:" << wheels.at(0)->size << "'" << std::endl;
	}
}
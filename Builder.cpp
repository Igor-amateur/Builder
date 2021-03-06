// Builder.cpp : Defines the entry point for the console application.
//
//Based by	https://gist.github.com/pazdera/1121152

#include "stdafx.h"
#include"Factory.h"

namespace mws //This is my work space
{
	using namespace Product;
	using namespace Factory;
}

int main()
{
	mws::upCar car; // Final product
			  /* A director who controls the process */
	mws::Director director;

	/* Concrete builders */
	mws::JeepBuilder jeepBuilder;
	mws::NissanBuilder nissanBuilder;

	/* Build a Jeep */
	std::cout << "Jeep" << std::endl;
	director.setBuilder(jeepBuilder); // using JeepBuilder instance
	car = director.getCar();
	car->specifications();

	std::cout << std::endl;

	/* Build a Nissan */
	std::cout << "Nissan" << std::endl;
	director.setBuilder(nissanBuilder); // using NissanBuilder instance
	car = director.getCar();
	car->specifications();

	return 0;
}


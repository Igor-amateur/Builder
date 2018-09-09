#include "stdafx.h"

#include"Factory.h"


namespace Factory
{

	/* Director is responsible for the whole process */

	void Director::setBuilder(Builder& newBuilder)
	{
		builder = &newBuilder;
	}

	upCar Director::getCar()
	{
		upCar car = std::make_unique<pdc::Car>(); //new pdc::Car();

		car->body = builder->getBody();

		car->engine = builder->getEngine();


		for (int i = 0; i < 4; i++)
		{
			car->wheels.push_back(builder->getWheel());
		}

		return car;
	}

	/* Concrete Builder for Jeep SUV cars */
	pdc::upWheel JeepBuilder::getWheel()
	{
		pdc::upWheel wheel = std::make_unique<pdc::Wheel>(); //new pdc::Wheel();
		wheel->size = 22;
		return wheel;
	}

	pdc::upEngine JeepBuilder::getEngine()
	{
		pdc::upEngine engine(std::make_unique<pdc::Engine>()); //new pdc::Engine();
		engine->horsepower = 400;
		return engine;
	}

	pdc::upBody JeepBuilder::getBody()
	{
		pdc::upBody body = std::make_unique<pdc::Body>(); //new pdc::Body();
		body->shape = "SUV";
		return body;
	}


	/* Concrete builder for Nissan family cars */
	pdc::upWheel NissanBuilder::getWheel()
	{
		pdc::upWheel wheel = std::make_unique<pdc::Wheel>(); //new pdc::Wheel();
		wheel->size = 16;
		return wheel;
	}

	pdc::upEngine NissanBuilder::getEngine()
	{
		pdc::upEngine engine = std::make_unique<pdc::Engine>(); //new pdc::Engine();
		engine->horsepower = 85;
		return engine;
	}

	pdc::upBody NissanBuilder::getBody()
	{
		pdc::upBody body = std::make_unique<pdc::Body>(); //new pdc::Body();
		body->shape = "hatchback";
		return body;
	}
}
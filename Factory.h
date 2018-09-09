#pragma once
#include"Product.h"

namespace pdc = Product;

namespace Factory
{
	
	/* Builder is responsible for constructing the smaller parts */
	class Builder
	{
	public:
		virtual pdc::upWheel getWheel() = 0;
		virtual pdc::upEngine getEngine() = 0;
		virtual pdc::upBody getBody() = 0;
	};

	using upBuilder = std::unique_ptr<Builder>;
	using upCar = std::unique_ptr<pdc::Car>;
	/* Director is responsible for the whole process */
	class Director
	{
		Builder* builder;

	public:
		void setBuilder(Builder& newBuilder);

		upCar getCar();
	};

	/* Concrete Builder for Jeep SUV cars */
	class JeepBuilder : public Builder
	{
	public:
		pdc::upWheel getWheel();

		pdc::upEngine getEngine();

		pdc::upBody getBody();
	};

	/* Concrete builder for Nissan family cars */
	class NissanBuilder : public Builder
	{
	public:
		pdc::upWheel getWheel();

		pdc::upEngine getEngine();

		pdc::upBody getBody();
	};
}
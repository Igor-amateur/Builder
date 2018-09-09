#pragma once
#include <iostream>
#include <memory>
#include<vector>
#include <string>


namespace Product
{
	
	/* Car parts */
	class Wheel
	{
	public:
		int size;
	};

	class Engine
	{
	public:
		int horsepower;
	};

	class Body
	{
	public:
		std::string shape;
	};

	using upWheel = std::unique_ptr<Wheel>;
	using upEngine = std::unique_ptr<Engine>;
	using upBody = std::unique_ptr<Body>;
	/* Final product -- a car */
	class Car
	{
	public:

		std::vector<upWheel> wheels;
		upEngine  engine;
		upBody body;

		void specifications();
	};

}

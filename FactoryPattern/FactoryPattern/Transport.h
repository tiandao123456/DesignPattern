#pragma once
#include <iostream>
//抽象的运输工具生产类
class Transport
{
public:
	virtual ~Transport() {};
	virtual std::string Deliver() const = 0;
};

//具体的运输工具生产类, 负责生产具体的运输工具
class Airplane :public Transport
{
public:
	Airplane()
	{
		std::cout << "Airplane has been created" << std::endl;
	}
	virtual std::string Deliver() const override
	{
		std::string result = "Transport by Airplane";
		return result;
	}
};

class Ship :public Transport
{
public:
	Ship()
	{
		std::cout << "Ship has been created" << std::endl;
	}
	virtual std::string Deliver() const override
	{
		std::string result = "Transport by Ship";
		return result;
	}
};

class Truck :public Transport
{
public:
	Truck()
	{
		std::cout << "Truck has been created" << std::endl;
	}
	virtual std::string Deliver() const override
	{
		std::string result = "Transport by Truck";
		return result;
	}
};


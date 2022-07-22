#pragma once
#include "Transport.h"
//抽象物流工厂
class Logistics
{
public:
	virtual ~Logistics() {};
	virtual std::shared_ptr<Transport> CreateTransport() const = 0;
	std::string PlanDeliver() const;
};

class AirLogistics :public Logistics
{
public:
	virtual std::shared_ptr<Transport> CreateTransport() const override
	{
		return std::shared_ptr<Transport>(new Airplane);
	}
};

class SeaLogistics :public Logistics
{
public:
	virtual std::shared_ptr<Transport> CreateTransport() const override
	{
		return std::shared_ptr<Transport>(new Ship);
	}
};

class RoadLogistics :public Logistics
{
public:
	virtual std::shared_ptr<Transport> CreateTransport() const override
	{
		return std::shared_ptr<Transport>(new Truck);
	}
};

#pragma once
#include "Chair.h"
#include "Sofa.h"
#include "Table.h"
#include "Logistics.h"

//家具工厂抽象类
class FurnitureFactory
{
public:
	virtual ~FurnitureFactory() {};
	virtual std::shared_ptr<Chair> CreateChair() = 0;
	virtual std::shared_ptr<Table> CreateTable() = 0;
	virtual std::shared_ptr<Sofa> CreateSofa() = 0;
	std::string FurnitureType();

	//家具生产完毕，调用物流对象进行运输
	std::string LogisticsFurniture(std::shared_ptr<Logistics> logistics);
};

class ArtFurnitureFactory :public FurnitureFactory
{
public:
	virtual std::shared_ptr<Chair> CreateChair() override
	{
		return std::shared_ptr<Chair>(new ArtChair);
	}
	virtual std::shared_ptr<Table> CreateTable() override
	{
		return std::shared_ptr<Table>(new ArtTable);
	}
	virtual std::shared_ptr<Sofa> CreateSofa() override
	{
		return std::shared_ptr<Sofa>(new ArtSofa);
	}
};

class ModernFurnitureFactory :public FurnitureFactory
{
public:
	virtual std::shared_ptr<Chair> CreateChair() override
	{
		return std::shared_ptr<Chair>(new ModernChair);
	}
	virtual std::shared_ptr<Table> CreateTable() override
	{
		return std::shared_ptr<Table>(new ModernTable);
	}
	virtual std::shared_ptr<Sofa> CreateSofa() override
	{
		return std::shared_ptr<Sofa>(new ModernSofa);
	}
};

class VictorianFurnitureFactory :public FurnitureFactory
{
public:
	virtual std::shared_ptr<Chair> CreateChair() override
	{
		return std::shared_ptr<Chair>(new VictorianChair);
	}
	virtual std::shared_ptr<Table> CreateTable() override
	{
		return std::shared_ptr<Table>(new VictorianTable);
	}
	virtual std::shared_ptr<Sofa> CreateSofa() override
	{
		return std::shared_ptr<Sofa>(new VictorianSofa);
	}
};
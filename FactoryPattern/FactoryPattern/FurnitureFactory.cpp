#include "FurnitureFactory.h"
std::string FurnitureFactory::FurnitureType()
{
	std::shared_ptr<Chair> chair = this->CreateChair();
	std::shared_ptr<Table> table = this->CreateTable();
	std::shared_ptr<Sofa> sofa = this->CreateSofa();
	return chair->ChairType() + " " + table->TableType() + " " + sofa->SofaType();
}

//家具生产完毕，调用物流对象进行运输
std::string FurnitureFactory::LogisticsFurniture(std::shared_ptr<Logistics> logistics)
{
	std::string str = logistics->PlanDeliver();
	return str;
}
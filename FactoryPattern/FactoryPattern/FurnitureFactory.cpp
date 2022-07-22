#include "FurnitureFactory.h"
std::string FurnitureFactory::FurnitureType()
{
	std::shared_ptr<Chair> chair = this->CreateChair();
	std::shared_ptr<Table> table = this->CreateTable();
	std::shared_ptr<Sofa> sofa = this->CreateSofa();
	return chair->ChairType() + " " + table->TableType() + " " + sofa->SofaType();
}

//�Ҿ�������ϣ��������������������
std::string FurnitureFactory::LogisticsFurniture(std::shared_ptr<Logistics> logistics)
{
	std::string str = logistics->PlanDeliver();
	return str;
}
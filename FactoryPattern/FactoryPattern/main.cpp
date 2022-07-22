//工厂设计模式
//将物流工厂、家具工厂进行合并，提供家具生产物流一条龙
#include <iostream>
#include <string>
#include "Logistics.h"
#include "FurnitureFactory.h"


int main()
{
	std::shared_ptr<FurnitureFactory> furnitureFactory1(new ArtFurnitureFactory);
	std::cout << furnitureFactory1->FurnitureType() << std::endl;
	//使用飞机运输该类型的家具
	std::cout << furnitureFactory1->LogisticsFurniture(std::shared_ptr<AirLogistics>(new AirLogistics)) << std::endl;
	//使用轮船运输该类型的家具
	std::cout << furnitureFactory1->LogisticsFurniture(std::shared_ptr<SeaLogistics>(new SeaLogistics)) << std::endl;
	//使用卡车运输该类型的家具
	std::cout << furnitureFactory1->LogisticsFurniture(std::shared_ptr<RoadLogistics>(new RoadLogistics)) << std::endl;
	std::cout << std::endl;


	std::shared_ptr<FurnitureFactory> furnitureFactory2(new ModernFurnitureFactory);
	std::cout << furnitureFactory2->FurnitureType() << std::endl;
	std::cout << furnitureFactory2->LogisticsFurniture(std::shared_ptr<AirLogistics>(new AirLogistics)) << std::endl;
	std::cout << furnitureFactory2->LogisticsFurniture(std::shared_ptr<SeaLogistics>(new SeaLogistics)) << std::endl;
	std::cout << furnitureFactory2->LogisticsFurniture(std::shared_ptr<RoadLogistics>(new RoadLogistics)) << std::endl;
	std::cout << std::endl;

	std::shared_ptr<FurnitureFactory> furnitureFactory3(new VictorianFurnitureFactory);
	std::cout << furnitureFactory3->FurnitureType() << std::endl;
	std::cout << furnitureFactory3->LogisticsFurniture(std::shared_ptr<AirLogistics>(new AirLogistics)) << std::endl;
	std::cout << furnitureFactory3->LogisticsFurniture(std::shared_ptr<SeaLogistics>(new SeaLogistics)) << std::endl;
	std::cout << furnitureFactory3->LogisticsFurniture(std::shared_ptr<RoadLogistics>(new RoadLogistics)) << std::endl;
	std::cout << std::endl;

	return 0;
}
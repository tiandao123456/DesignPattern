#include "Logistics.h"

std::string Logistics::PlanDeliver() const
{
	//创建具体产品
	std::shared_ptr<Transport> transport = this->CreateTransport();
	//运输方式输出
	std::string result = transport->Deliver();
	return result;
}

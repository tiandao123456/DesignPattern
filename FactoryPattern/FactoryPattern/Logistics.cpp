#include "Logistics.h"

std::string Logistics::PlanDeliver() const
{
	//���������Ʒ
	std::shared_ptr<Transport> transport = this->CreateTransport();
	//���䷽ʽ���
	std::string result = transport->Deliver();
	return result;
}

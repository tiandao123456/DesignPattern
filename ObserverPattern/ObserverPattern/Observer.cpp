#include "Observer.h"
Observer::Observer(Publisher* publisher, int numParameter)
{
	this->num = numParameter;
	this->publisher = publisher;
	publisher->AddObserver(this);
}

int Observer::GetNum()
{
	return num;
}

void Observer::update(const std::string homework)
{
	std::cout << "ѧ��" << this->GetNum() << "�Ѿ��յ���ҵ:" << homework << std::endl;
}

void Observer::RemoveMeFromList(Publisher *parameter)
{
	parameter->RemoveObserver(this);
}

void Observer::AddSubscribe(Publisher* parameter)
{
	parameter->AddObserver(this);
}

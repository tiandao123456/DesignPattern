#pragma once
#include "ObserverBase.h"
class Publisher
{
public:
	//��ӹ۲���
	virtual void AddObserver(ObserverBase* parameter) = 0;
	//�Ƴ��۲���
	virtual void RemoveObserver(ObserverBase* parameter) = 0;

	//�����й۲��ߵ�֪ͨ
	virtual void Notify(std::string) = 0;
};


#pragma once
#include"Publisher.h"
#include"ObserverBase.h"
#include<list>
#include<iostream>
class ChinesePublisher:public Publisher
{
//ά��һ���б�
private:
	std::list<ObserverBase*> observerList;
public:
	//��ӹ۲���
	virtual void AddObserver(ObserverBase* parameter);
	//�Ƴ��۲���
	virtual void RemoveObserver(ObserverBase* parameter);

	//�����й۲��ߵ�֪ͨ
	virtual void Notify(std::string);
};


#pragma once
#include "ObserverBase.h"
class Publisher
{
public:
	//添加观察者
	virtual void AddObserver(ObserverBase* parameter) = 0;
	//移除观察者
	virtual void RemoveObserver(ObserverBase* parameter) = 0;

	//对所有观察者的通知
	virtual void Notify(std::string) = 0;
};


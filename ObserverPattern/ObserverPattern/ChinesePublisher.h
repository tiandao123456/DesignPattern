#pragma once
#include"Publisher.h"
#include"ObserverBase.h"
#include<list>
#include<iostream>
class ChinesePublisher:public Publisher
{
//维持一个列表
private:
	std::list<ObserverBase*> observerList;
public:
	//添加观察者
	virtual void AddObserver(ObserverBase* parameter);
	//移除观察者
	virtual void RemoveObserver(ObserverBase* parameter);

	//对所有观察者的通知
	virtual void Notify(std::string);
};


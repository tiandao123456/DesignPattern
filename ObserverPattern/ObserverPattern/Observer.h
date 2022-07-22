#pragma once
#include "ObserverBase.h"
#include "ChinesePublisher.h"
#include "EnglishPublisher.h"
#include <string>
#include <iostream>
class Observer : public ObserverBase
{
private:
//π€≤Ï’ﬂ±‡∫≈
	int num;
	Publisher* publisher;
public:
	Observer(Publisher *publisher,int numParameter);
	void AddSubscribe(Publisher* publisher);
	virtual int GetNum() override;
	virtual void update(const std::string homework) override;
	void RemoveMeFromList(Publisher* parameter);
};


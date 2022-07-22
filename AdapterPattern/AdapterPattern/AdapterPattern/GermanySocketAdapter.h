#pragma once
#include "AmericanSocket.h"
#include "GermanySocket.h"
class GermanySocketAdapter:public AmericanSocket
{
private:
	std::shared_ptr<GermanySocket> germanySocket;
public:
	GermanySocketAdapter(std::shared_ptr<GermanySocket> parameter) :germanySocket(parameter) {};

	//重写AmericanInput方法，当派生类对象调用该方法时进行转换
	std::string AmericanInput(int voltage) const override;
};


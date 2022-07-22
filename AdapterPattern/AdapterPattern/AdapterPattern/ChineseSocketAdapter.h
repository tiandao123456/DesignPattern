#pragma once
#include "AmericanSocket.h"
#include "ChineseSocket.h"
class ChineseSocketAdapter:public AmericanSocket
{
private:
	std::shared_ptr<ChineseSocket> chineseSocket;
public:
	ChineseSocketAdapter(std::shared_ptr<ChineseSocket> parameter) :chineseSocket(parameter) {};
	std::string AmericanInput(int inputVoltage) const override;
};


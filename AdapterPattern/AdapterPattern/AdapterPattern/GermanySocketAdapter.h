#pragma once
#include "AmericanSocket.h"
#include "GermanySocket.h"
class GermanySocketAdapter:public AmericanSocket
{
private:
	std::shared_ptr<GermanySocket> germanySocket;
public:
	GermanySocketAdapter(std::shared_ptr<GermanySocket> parameter) :germanySocket(parameter) {};

	//��дAmericanInput�������������������ø÷���ʱ����ת��
	std::string AmericanInput(int voltage) const override;
};


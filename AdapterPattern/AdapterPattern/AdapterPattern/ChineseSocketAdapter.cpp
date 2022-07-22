#include "ChineseSocketAdapter.h"
std::string ChineseSocketAdapter::AmericanInput(int inputVoltage) const
{
	return this->chineseSocket->ChineseInput(inputVoltage);
}
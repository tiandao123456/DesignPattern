#include "GermanySocketAdapter.h"
std::string GermanySocketAdapter::AmericanInput(int inputVoltage) const
{
	return this->germanySocket->GermanyInput(inputVoltage);
}

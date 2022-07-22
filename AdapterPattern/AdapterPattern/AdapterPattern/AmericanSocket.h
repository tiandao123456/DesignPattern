#pragma once
#include <iostream>
class AmericanSocket
{
private:
	int voltage = 110;
public:
	int GetVoltage()
	{
		return voltage;
	}
	virtual ~AmericanSocket() = default;
	virtual std::string AmericanInput(int inputVoltage) const;
};


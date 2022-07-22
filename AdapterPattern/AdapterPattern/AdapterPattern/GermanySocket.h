#pragma once
#include <iostream>
class GermanySocket
{
private:
	int voltage = 110;
public:
	int GetVoltage()
	{
		return voltage;
	}
	virtual ~GermanySocket() = default;
	virtual std::string GermanyInput(int inputVoltage) const;
};


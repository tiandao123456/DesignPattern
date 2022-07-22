#pragma once
#include <iostream>
class ChineseSocket
{
private:
	int voltage = 220;
public:
	int GetVpltage() 
	{
		return voltage;
	}
	virtual ~ChineseSocket() = default;
	std::string ChineseInput(int intputVoltage) const;
};


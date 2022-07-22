#include "AmericanSocket.h"
std::string AmericanSocket::AmericanInput(int inputVoltage) const
{
	if (voltage == inputVoltage) 
	{
		std::cout << "right input voltage" << std::endl;
	}
	else
	{
		std::cout << "error : the two voltages are inconsistent" << std::endl;
		exit(-1);
	}
	return "American Standard Socket";
}
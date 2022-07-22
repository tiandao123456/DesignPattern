#include "GermanySocket.h"
//参数为美标
std::string GermanySocket::GermanyInput(int inputVoltage) const
{
	//美标与德标一致的时候
	if (voltage == inputVoltage)
	{
		std::cout << "right input voltage" << std::endl;
	}
	else
	{
		std::cout << "error : the two voltages are inconsistent" << std::endl;
		exit(-1);
	}
	return "Germany Standard Socket";
}
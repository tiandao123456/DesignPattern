#include "Plug.h"
void Plug::UseAmericanPlug(std::shared_ptr<AmericanSocket> socket)
{
	//110为默认的美国电压数值
	std::cout << socket->AmericanInput(110) << std::endl;
}
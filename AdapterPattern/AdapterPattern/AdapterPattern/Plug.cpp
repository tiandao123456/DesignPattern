#include "Plug.h"
void Plug::UseAmericanPlug(std::shared_ptr<AmericanSocket> socket)
{
	//110ΪĬ�ϵ�������ѹ��ֵ
	std::cout << socket->AmericanInput(110) << std::endl;
}
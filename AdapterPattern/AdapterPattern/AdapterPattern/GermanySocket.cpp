#include "GermanySocket.h"
//����Ϊ����
std::string GermanySocket::GermanyInput(int inputVoltage) const
{
	//������±�һ�µ�ʱ��
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
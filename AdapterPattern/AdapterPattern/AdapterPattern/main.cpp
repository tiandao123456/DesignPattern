#include "AmericanSocket.h"
#include "ChineseSocket.h"
#include "ChineseSocketAdapter.h"
#include "GermanySocket.h"
#include "GermanySocketAdapter.h"
#include "Plug.h"

int main()
{
	std::shared_ptr<Plug> plug(new Plug);

	//������±��ѹһ��,������������ѹ��һ��
	//�����¹���׼�Ĳ���
	std::shared_ptr<GermanySocket> germanySocket(new GermanySocket);
	//����ת��������ת�±�
	std::shared_ptr<GermanySocketAdapter> germanySocketAdapter(new GermanySocketAdapter(germanySocket));
	plug->UseAmericanPlug(germanySocketAdapter);

	std::shared_ptr<ChineseSocket> chineseSocket(new ChineseSocket);
	std::shared_ptr<ChineseSocketAdapter> chineseSocketAdapter(new ChineseSocketAdapter(chineseSocket));
	plug->UseAmericanPlug(chineseSocketAdapter);
	
	return 0;
}
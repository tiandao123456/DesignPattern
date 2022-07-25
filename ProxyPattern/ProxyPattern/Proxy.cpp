#include "Proxy.h"
Proxy::Proxy()
{
	badStr.push_back("Chomper");
	badStr.push_back("Mimosa");
	badStr.push_back("Shrub");
}

int Proxy::generate(std::string animal)
{
	//���ʿ���,��badStr�в��ҵ��˷Ƿ��ַ���
	if (find(badStr.begin(), badStr.end(), animal) != badStr.end())
	{
		std::cout << "�Ƿ�������" << std::endl;
		return -1;
	}
	else
	{
		int temp;
		//������Ҫ��ѯ���ַ���
		//��ѯ���������Ƿ����
		if (cache.find(animal) != cache.end())
		{
			temp = cache[animal];
			std::cout << "���ʴ������øö�����������֣�" << temp << std::endl;
			return temp;
		}
		//�ڴ�������û�в�ѯ��
		else
		{
			//ֻ����һ�ζ���
			if (nullptr == numPtr)
			{
				numPtr = std::move(std::unique_ptr<Number>(new LuckyNumber));
			}
			//����ѯ���ݴ����������
			temp = numPtr->generate(animal);
			if (temp != 0)
			{
				cache[animal] = temp;
			}
		}
	}
}
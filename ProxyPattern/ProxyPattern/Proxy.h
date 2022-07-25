#pragma once
#include <algorithm>
#include <map>
#include <vector>
#include "Number.h"
#include "LuckyNumber.h"

class Proxy:public Number
{
private:
	std::unique_ptr<Number> numPtr;
	std::map<std::string, int> cache;
	//�ڴ����ж���һЩ�Ƿ��ַ�������������������������
	std::vector<std::string> badStr;
public:
	Proxy();
	//1���ӳٳ�ʼ������ʹ�õ���������ʱ���ٳ�ʼ��

	//2�����ݻ��棺һ���ڷ������в�ѯ����Ӧ�����ݣ��ͼ���cache������
	//֮��Ӵ������в�ѯ���ݣ���������û��ѯ�����ٵ��������в�ѯ
	//����������Ҳû��ѯ�����ٷ���ʧ��

	//3��Ȩ�޿��ƣ���ĳЩ�Ƿ����ʽ��п��ƣ����������������������
	int generate(std::string animal) override;
};


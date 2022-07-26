#pragma once
#include <iostream>
template<typename T>
class Singleton
{
public:
	static T& GetInstance()
	{
		static T instance;
		return instance;
	}
	//��ֹʹ����ֵ���ý��й���
	Singleton(T&&) = delete;
	//��ֹʹ����ֵ���й���
	Singleton(const T&) = delete;
	//��ֹʹ�ø�ֵ�����
	T& operator=(const T&) = delete;

	//Ĭ�Ϲ��캯������������Ϊprotected����������Ե���
protected:
	Singleton() = default;
	virtual ~Singleton() = default;
};
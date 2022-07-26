#pragma once
#include "MarioState.h"
#include "Singleton.h"
//������������Ҫ��д���캯������ֵ�������֤����ģʽ
class CapeMario:public MarioState, public Singleton<CapeMario>
{
public:
	CapeMario(const CapeMario&) = delete;
	CapeMario& operator=(const CapeMario&) = delete;
protected:
	CapeMario() = default;
	//����Ϊ��Ԫ��ʹ��ʵ����ģ�����ܹ�ͨ��GetInstance�����������������ܱ����Ĺ��캯��
	friend class Singleton<CapeMario>;

public:
	void GotMushroom(Mario* mario) override;
	void GotFireFlower(Mario* mario) override;
	void GotFeather(Mario* mario) override;
};

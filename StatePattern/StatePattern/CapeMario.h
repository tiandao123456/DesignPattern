#pragma once
#include "MarioState.h"
#include "Singleton.h"
//在派生类中需要重写构造函数、赋值运算符保证单例模式
class CapeMario:public MarioState, public Singleton<CapeMario>
{
public:
	CapeMario(const CapeMario&) = delete;
	CapeMario& operator=(const CapeMario&) = delete;
protected:
	CapeMario() = default;
	//设置为友元，使得实例化模板类能够通过GetInstance函数访问派生类中受保护的构造函数
	friend class Singleton<CapeMario>;

public:
	void GotMushroom(Mario* mario) override;
	void GotFireFlower(Mario* mario) override;
	void GotFeather(Mario* mario) override;
};

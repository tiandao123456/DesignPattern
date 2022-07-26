#include "Mario.h"
#include "SmallMario.h"
//马里奥的初始状态为小马里奥
Mario::Mario() 
{
	coin = 0;
	this->state = &SmallMario::GetInstance();
	std::cout << "目前是小马里奥" << std::endl;
}

//改变状态，马里奥的不同形态切换
void Mario::SetState(MarioState* state) 
{
	this->state = state;
}

void Mario::SetCoin(int numberOfCoins) 
{
	std::cout << "获得金币：" << numberOfCoins << std::endl;
	coin += numberOfCoins;
}

void Mario::ReportCoin() 
{
	std::cout << "总金币：" << coin << std::endl;
}

void Mario::GotMushroom() 
{
	this->state->GotMushroom(this);
};

void Mario::GotFireFlower() 
{
	this->state->GotFireFlower(this);
};

void Mario::GotFeather()
{
	this->state->GotFeather(this);
}
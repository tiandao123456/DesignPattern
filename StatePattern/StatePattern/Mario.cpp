#include "Mario.h"
#include "SmallMario.h"
//����µĳ�ʼ״̬ΪС�����
Mario::Mario() 
{
	coin = 0;
	this->state = &SmallMario::GetInstance();
	std::cout << "Ŀǰ��С�����" << std::endl;
}

//�ı�״̬������µĲ�ͬ��̬�л�
void Mario::SetState(MarioState* state) 
{
	this->state = state;
}

void Mario::SetCoin(int numberOfCoins) 
{
	std::cout << "��ý�ң�" << numberOfCoins << std::endl;
	coin += numberOfCoins;
}

void Mario::ReportCoin() 
{
	std::cout << "�ܽ�ң�" << coin << std::endl;
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
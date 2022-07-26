#include "SmallMario.h"
#include "SuperMario.h"
#include "FireMario.h"
#include "CapeMario.h"
#include "Mario.h"
void SmallMario::GotMushroom(Mario* mario) 
{
	mario->SetCoin(50);
	//״̬�ı�
	mario->SetState(&SuperMario::GetInstance());
	std::cout << "Ŀǰ�ǳ��������" << std::endl;
}

void SmallMario::GotFireFlower(Mario* mario) 
{
	mario->SetCoin(100);
	mario->SetState(&FireMario::GetInstance());
	std::cout << "Ŀǰ�ǻ��������" << std::endl;
}

void SmallMario::GotFeather(Mario* mario)
{
	mario->SetCoin(200);
	mario->SetState(&CapeMario::GetInstance());
	std::cout << "Ŀǰ�Ƿ��������" << std::endl;
}
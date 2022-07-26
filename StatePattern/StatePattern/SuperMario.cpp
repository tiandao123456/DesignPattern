#include "SuperMario.h"
#include "SmallMario.h"
#include "FireMario.h"
#include "CapeMario.h"
#include "Mario.h"

void SuperMario::GotMushroom(Mario* mario) 
{
	mario->SetCoin(50);
}

void SuperMario::GotFireFlower(Mario* mario) 
{
	mario->SetCoin(100);
	mario->SetState(&FireMario::GetInstance());
	std::cout << "Ŀǰ�ǻ��������" << std::endl;
}

void SuperMario::GotFeather(Mario* mario)
{
	mario->SetCoin(200);
	mario->SetState(&CapeMario::GetInstance());
	std::cout << "Ŀǰ�Ƿ��������" << std::endl;
}

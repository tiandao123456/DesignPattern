#include "SmallMario.h"
#include "SuperMario.h"
#include "FireMario.h"
#include "CapeMario.h"
#include "Mario.h"
void SmallMario::GotMushroom(Mario* mario) 
{
	mario->SetCoin(50);
	//状态改变
	mario->SetState(&SuperMario::GetInstance());
	std::cout << "目前是超级马里奥" << std::endl;
}

void SmallMario::GotFireFlower(Mario* mario) 
{
	mario->SetCoin(100);
	mario->SetState(&FireMario::GetInstance());
	std::cout << "目前是火焰马里奥" << std::endl;
}

void SmallMario::GotFeather(Mario* mario)
{
	mario->SetCoin(200);
	mario->SetState(&CapeMario::GetInstance());
	std::cout << "目前是飞翔马里奥" << std::endl;
}
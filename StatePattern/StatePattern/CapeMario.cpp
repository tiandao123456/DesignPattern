#include "CapeMario.h"
#include "FireMario.h"
#include "Mario.h"
void CapeMario::GotMushroom(Mario* mario)
{
	mario->SetCoin(50);
}

void CapeMario::GotFireFlower(Mario* mario)
{
	mario->SetCoin(100);
}

//飞翔马里奥吃了花之后变成火焰马里奥
void CapeMario::GotFeather(Mario* mario)
{
	mario->SetCoin(200);
	mario->SetState(&FireMario::GetInstance());
	std::cout << "目前是火焰马里奥" << std::endl;
}
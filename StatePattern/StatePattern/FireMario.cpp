#include "FireMario.h"
#include "CapeMario.h"
#include "Mario.h"
void FireMario::GotMushroom(Mario* mario)
{
	mario->SetCoin(50);
}
void FireMario::GotFireFlower(Mario* mario)
{
	mario->SetCoin(100);
}
void FireMario::GotFeather(Mario* mario)
{
	mario->SetCoin(200);
	mario->SetState(&CapeMario::GetInstance());
	std::cout << "Ŀǰ�Ƿ��������" << std::endl;
}
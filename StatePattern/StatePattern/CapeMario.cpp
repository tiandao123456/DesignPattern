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

//��������³��˻�֮���ɻ��������
void CapeMario::GotFeather(Mario* mario)
{
	mario->SetCoin(200);
	mario->SetState(&FireMario::GetInstance());
	std::cout << "Ŀǰ�ǻ��������" << std::endl;
}
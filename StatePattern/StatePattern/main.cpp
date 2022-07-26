#include "Mario.h"
#include "SmallMario.h"
#include "CapeMario.h"

int main()
{
	std::shared_ptr<Mario> mario(new Mario());

	mario->GotMushroom();
	mario->ReportCoin();

	mario->GotFireFlower();
	mario->ReportCoin();

	mario->GotFeather();
	mario->ReportCoin();
}
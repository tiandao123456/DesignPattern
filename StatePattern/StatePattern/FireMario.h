#pragma once
#include "MarioState.h"
#include "Singleton.h"
class FireMario : public MarioState, public Singleton<FireMario> 
{
public:
	FireMario(const FireMario&) = delete;
	FireMario& operator=(const FireMario&) = delete;
protected:
	FireMario() = default;
	friend class Singleton<FireMario>;
public:
	void GotMushroom(Mario* mario) override;
	void GotFireFlower(Mario* mario) override;
	void GotFeather(Mario* mario) override;
};


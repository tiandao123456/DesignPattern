#pragma once
#include "MarioState.h"
#include "Singleton.h"
class SmallMario : public MarioState, public Singleton<SmallMario> 
{
public:
	SmallMario(const SmallMario&) = delete;
	SmallMario& operator=(const SmallMario&) = delete;
protected:
	SmallMario() = default;
	friend class Singleton<SmallMario>;
public:
	void GotMushroom(Mario* mario) override;
	void GotFireFlower(Mario* mario) override;
	void GotFeather(Mario* mario) override;
};


#pragma once
#include "MarioState.h"
#include "Singleton.h"
class SuperMario : public MarioState, public Singleton<SuperMario>
{
public:
	SuperMario(const SuperMario&) = delete;
	SuperMario& operator=(const SuperMario&) = delete;
protected:
	SuperMario() = default;
	friend class Singleton<SuperMario>;
public:
	void GotMushroom(Mario* mario) override;
	void GotFireFlower(Mario* mario) override;
	void GotFeather(Mario* mario) override;
};


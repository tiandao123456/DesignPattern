#pragma once
class Mario;
//马里奥的状态：吃蘑菇、吃花、吃羽毛
class MarioState 
{
public:
	virtual void GotMushroom(Mario* mario) = 0;
	virtual void GotFireFlower(Mario* mario) = 0;
	virtual void GotFeather(Mario* mario) = 0;
};


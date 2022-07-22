#pragma once
#include <iostream>

//ÒÎ×Ó³éÏóÀà
class Chair
{
public:
	virtual ~Chair() {};
	virtual std::string ChairType() = 0;
};

class ArtChair :public Chair
{
public:
	ArtChair()
	{
		"ArtChair has been created";
	}
	virtual std::string ChairType()
	{
		return "ArtChair";
	}
};

class ModernChair :public Chair
{
public:
	ModernChair()
	{
		"ModernChair has been created";
	}
	virtual std::string ChairType()
	{
		return "ModernChair";
	}
};

class VictorianChair :public Chair
{
public:
	VictorianChair()
	{
		"VictorianChair has been created";
	}
	virtual std::string ChairType()
	{
		return "VictorianChair";
	}
};


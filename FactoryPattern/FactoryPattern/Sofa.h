#pragma once
#include <iostream>
class Sofa
{
public:
	virtual ~Sofa() {};
	virtual std::string SofaType() = 0;
};

class ArtSofa :public Sofa
{
public:
	ArtSofa()
	{
		"ArtSofa has been created";
	}
	virtual std::string SofaType()
	{
		return "ArtSofa";
	}
};

class ModernSofa :public Sofa
{
public:
	ModernSofa()
	{
		"ModernSofa has been created";
	}
	virtual std::string SofaType()
	{
		return "ModernSofa";
	}
};

class VictorianSofa :public Sofa
{
public:
	VictorianSofa()
	{
		"VictorianSofa has been created";
	}
	virtual std::string SofaType()
	{
		return "VictorianSofa";
	}
};
#pragma once
#include <iostream>
class Table
{
public:
	virtual ~Table() {};
	virtual std::string TableType() = 0;
};

class ArtTable :public Table
{
public:
	ArtTable()
	{
		"ArtTable has been created";
	}
	virtual std::string TableType()
	{
		return "ArtTable";
	}
};

class ModernTable :public Table
{
public:
	ModernTable()
	{
		"ModernTable has been created";
	}
	virtual std::string TableType()
	{
		return "ModernTable";
	}
};

class VictorianTable :public Table
{
public:
	VictorianTable()
	{
		"VictorianTable has been created";
	}
	virtual std::string TableType()
	{
		return "VictorianTable";
	}
};

#pragma once
#include <iostream>
class ObserverBase
{
public:
	virtual ~ObserverBase() = default;
	virtual void update(const std::string homework) = 0;
	virtual int GetNum() = 0;
};


#pragma once
#include <iostream>
template<typename T>
class Singleton
{
public:
	static T& GetInstance()
	{
		static T instance;
		return instance;
	}
	//禁止使用右值引用进行构造
	Singleton(T&&) = delete;
	//禁止使用左值进行构造
	Singleton(const T&) = delete;
	//禁止使用赋值运算符
	T& operator=(const T&) = delete;

	//默认构造函数，析构函数为protected，派生类可以调用
protected:
	Singleton() = default;
	virtual ~Singleton() = default;
};
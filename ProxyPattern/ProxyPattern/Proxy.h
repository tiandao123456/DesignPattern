#pragma once
#include <algorithm>
#include <map>
#include <vector>
#include "Number.h"
#include "LuckyNumber.h"

class Proxy:public Number
{
private:
	std::unique_ptr<Number> numPtr;
	std::map<std::string, int> cache;
	//在代理中定义一些非法字符串，避免服务器流量过大崩溃
	std::vector<std::string> badStr;
public:
	Proxy();
	//1、延迟初始化：在使用到服务器的时候再初始化

	//2、数据缓存：一旦在服务其中查询到相应的数据，就加入cache缓冲中
	//之后从代理缓冲中查询数据，若代理缓冲没查询到，再到服务器中查询
	//若服务器中也没查询到，再返回失败

	//3、权限控制：对某些非法访问进行控制，控制流量避免服务器崩溃
	int generate(std::string animal) override;
};


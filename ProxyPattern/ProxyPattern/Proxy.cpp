#include "Proxy.h"
Proxy::Proxy()
{
	badStr.push_back("Chomper");
	badStr.push_back("Mimosa");
	badStr.push_back("Shrub");
}

int Proxy::generate(std::string animal)
{
	//访问控制,在badStr中查找到了非法字符串
	if (find(badStr.begin(), badStr.end(), animal) != badStr.end())
	{
		std::cout << "非法动物名" << std::endl;
		return -1;
	}
	else
	{
		int temp;
		//输入需要查询的字符串
		//查询代理缓存中是否存在
		if (cache.find(animal) != cache.end())
		{
			temp = cache[animal];
			std::cout << "访问代理缓冲获得该动物的幸运数字：" << temp << std::endl;
			return temp;
		}
		//在代理缓存中没有查询到
		else
		{
			//只创建一次对象
			if (nullptr == numPtr)
			{
				numPtr = std::move(std::unique_ptr<Number>(new LuckyNumber));
			}
			//将查询数据存入代理缓存中
			temp = numPtr->generate(animal);
			if (temp != 0)
			{
				cache[animal] = temp;
			}
		}
	}
}
#include <iostream>
#include "Container.h"
#include <vector>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	Container<int> vec(arr, 9);

	for (auto& num : vec)
		std::cout << num << " ";
	std::cout<<std::endl;

	std::cout << "前向迭代器：";
	for (auto ite = vec.begin(); ite != vec.end(); ++ite)
	{
		std::cout << *ite << " ";
	}
	std::cout << std::endl;

	std::cout << "后向迭代器：";
	for (auto ite = vec.rbegin(); ite != vec.rend(); ++ite)
	{
		std::cout << *ite << " ";
	}
	std::cout << std::endl;
}
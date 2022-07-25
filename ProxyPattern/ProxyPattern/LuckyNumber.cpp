#include "LuckyNumber.h"
int LuckyNumber::generate(std::string animal) 
{
    int temp;
    if (numbers.find(animal) == numbers.end()) 
    {
        return 0;
    }
    else 
    {
        temp = numbers[animal];
        std::cout << "访问服务器获得该动物的幸运数字：" << temp << std::endl;
        return temp;
    }
}
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
        std::cout << "���ʷ�������øö�����������֣�" << temp << std::endl;
        return temp;
    }
}
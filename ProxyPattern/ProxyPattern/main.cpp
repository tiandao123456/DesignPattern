#include <iostream>
#include <map>
#include "Number.h"
#include "LuckyNumber.h"
#include "Proxy.h"

int main()
{
    std::unique_ptr<Proxy> proxy(new Proxy);
    proxy->generate("Chomper");

    proxy->generate("Rat");
    proxy->generate("Rat");

    proxy->generate("Monkey");
    proxy->generate("Monkey");
    return 0;
}
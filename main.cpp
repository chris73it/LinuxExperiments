#include <iostream>
#include "Calculator.h"

int main()
{
    Calculator c{};
    c.add(-1, 2.3);
    std::cout << c.getResult() << std::endl;
    return 0;
}

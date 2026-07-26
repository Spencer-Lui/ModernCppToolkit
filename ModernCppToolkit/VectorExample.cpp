#include "VectorExample.h"

#include <iostream>
#include <vector>

void RunVectorExample()
{
    std::vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    for (int number : numbers)
    {
        std::cout << number << '\n';
    }
}

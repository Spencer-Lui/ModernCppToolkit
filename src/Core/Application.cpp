#include <algorithm>
#include <iostream>
#include <vector>

#include "Core/Application.h"

int Application::Run()
{
    std::vector<int> numbers =
    {
        5,
        1,
        8,
        2,
        9,
        3
    };

    std::sort(
        numbers.begin(),
        numbers.end(),
        [](int left, int right)
        {
            return left < right;
        });

    for (int number : numbers)
    {
        std::cout << number << '\n';
    }

    return 0;
}
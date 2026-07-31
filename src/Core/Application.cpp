#include <algorithm>
#include <iostream>
#include <vector>

#include "Core/Application.h"

int Application::Run()
{
    std::vector<int> numbers =
    {
        10,
        20,
        30,
        40,
        50
    };

    auto it = std::find_if(
        numbers.begin(),
        numbers.end(),
        [](int number)
        {
            return number > 30;
        });

    if (it != numbers.end())
    {
        std::cout
            << "Found : "
            << *it
            << '\n';
    }

    return 0;
}
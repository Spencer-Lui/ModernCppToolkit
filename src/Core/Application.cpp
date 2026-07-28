#include <algorithm>
#include <iostream>
#include <vector>

#include "Core/Application.h"

int Application::Run()
{
    std::vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    auto it = std::find(
        numbers.begin(),
        numbers.end(),
        30);

    if (it != numbers.end())
    {
        std::cout << "Found : "
            << *it
            << '\n';
    }
    else
    {
        std::cout << "Not Found\n";
    }

    return 0;
}
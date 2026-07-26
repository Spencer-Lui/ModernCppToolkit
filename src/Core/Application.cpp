#include <iostream>
#include <vector> 
#include "Core/Application.h"

int Application::Run()
{
    std::vector<int> numbers;

    std::cout << "Initial Size : "
        << numbers.size()
        << '\n';

    numbers.push_back(10);

    std::cout << "After push 10 : "
        << numbers.size()
        << '\n';

    numbers.push_back(20);

    std::cout << "After push 20 : "
        << numbers.size()
        << '\n';

    numbers.push_back(30);

    std::cout << "After push 30 : "
        << numbers.size()
        << '\n';

    std::cout << "\nElements\n";

    for (int number : numbers)
    {
        std::cout << number << '\n';
    }

    return 0;
}
#include <iostream>
#include <vector> 
#include "Core/Application.h"

int Application::Run()
{
    std::vector<int> numbers;

    std::cout << "Initial\n";
    std::cout << "Size     : " << numbers.size() << '\n';
    std::cout << "Capacity : " << numbers.capacity() << "\n\n";

    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(i);

        std::cout
            << "Push "
            << i
            << " -> Size: "
            << numbers.size()
            << ", Capacity: "
            << numbers.capacity()
            << '\n';
    }

    return 0;
}
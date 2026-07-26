#include <iostream>
#include <vector> 
#include "Core/Application.h"

int Application::Run()
{
    std::vector<int> reserveVector;
    reserveVector.reserve(5);

    std::cout << "reserve()\n";
    std::cout << "Size     : "
        << reserveVector.size()
        << '\n';

    std::cout << "Capacity : "
        << reserveVector.capacity()
        << "\n\n";

    std::vector<int> resizeVector;
    resizeVector.resize(5);

    std::cout << "resize()\n";
    std::cout << "Size     : "
        << resizeVector.size()
        << '\n';

    std::cout << "Capacity : "
        << resizeVector.capacity()
        << "\n\n";

    std::cout << "Elements\n";

    for (int number : resizeVector)
    {
        std::cout << number << '\n';
    }

    return 0;
}
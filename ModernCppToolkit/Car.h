#pragma once

#include <iostream>

class Car
{
public:

    Car()
    {
        std::cout << "Car Created\n";
    }

    ~Car()
    {
        std::cout << "Car Destroyed\n";
    }

    void Drive()
    {
        std::cout << "Driving\n";
    }
};


#pragma once

#include <iostream>

class Engine
{
public:

    Engine()
    {
        std::cout << "Engine Created\n";
    }

    ~Engine()
    {
        std::cout << "Engine Destroyed\n";
    }

    void Start()
    {
        std::cout << "Engine Start\n";
    }
};


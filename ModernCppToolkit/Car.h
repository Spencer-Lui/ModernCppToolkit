#pragma once

#include <iostream>
#include <memory>

#include "Engine.h"

class Car
{
public:

    Car()
        : m_engine(std::make_unique<Engine>())
    {
        std::cout << "Car Created\n";
    }

    ~Car()
    {
        std::cout << "Car Destroyed\n";
    }

    void Drive()
    {
        m_engine->Start();

        std::cout << "Driving\n";
    }

private:

    std::unique_ptr<Engine> m_engine;
};


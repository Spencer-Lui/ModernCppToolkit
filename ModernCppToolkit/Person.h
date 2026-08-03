#pragma once

#include <iostream>
#include <string>

class Person
{
public:

    Person(const std::string& name)
        : m_name(name)
    {
        std::cout
            << "Constructor\n";
    }

    Person(const Person& other)
        : m_name(other.m_name)
    {
        std::cout
            << "Copy Constructor\n";
    }

    Person(Person&& other)
        : m_name(std::move(other.m_name))
    {
        std::cout
            << "Move Constructor\n";
    }

    ~Person()
    {
        std::cout
            << "Destructor\n";
    }

private:

    std::string m_name;
};


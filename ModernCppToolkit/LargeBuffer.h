#pragma once

#include <iostream>
#include <vector>

class LargeBuffer
{
public:

    LargeBuffer(std::size_t size)
        : m_data(size)
    {
        std::cout
            << "Constructor\n";
    }

    LargeBuffer(const LargeBuffer& other)
        : m_data(other.m_data)
    {
        std::cout
            << "Copy Constructor\n";
    }

    LargeBuffer(LargeBuffer&& other) noexcept
        : m_data(std::move(other.m_data))
    {
        std::cout
            << "Move Constructor\n";
    }

private:

    std::vector<int> m_data;
};


#pragma once

#include <iostream>
#include <vector>

class LargeBuffer
{
public:

    LargeBuffer(int id, std::size_t size)
        : m_id(id),
        m_data(size)
    {
        std::cout
            << "Constructor : "
            << m_id
            << '\n';
    }

    LargeBuffer(const LargeBuffer& other)
        : m_id(other.m_id),
        m_data(other.m_data)
    {
        std::cout
            << "Copy Constructor : "
            << m_id
            << '\n';
    }

    LargeBuffer(LargeBuffer&& other) noexcept
        : m_id(other.m_id),
        m_data(std::move(other.m_data))
    {
        std::cout
            << "Move Constructor : "
            << m_id
            << '\n';
    }

private:

    int m_id;

    std::vector<int> m_data;
};


#include "ScopeTimer.h"

#include <chrono>
#include <iostream>

ScopeTimer::ScopeTimer(const std::string& taskName)
    : m_taskName(taskName),
    m_startTime(Clock::now())
{
}

ScopeTimer::~ScopeTimer()
{
    auto endTime = Clock::now();

    auto duration =
        std::chrono::duration_cast<std::chrono::milliseconds>(
            endTime - m_startTime);

    std::cout
        << m_taskName
        << " : "
        << duration.count()
        << " ms"
        << '\n';
}

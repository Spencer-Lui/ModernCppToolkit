#include "ScopeTimer.h"

#include <chrono>
#include <iostream>

ScopeTimer::ScopeTimer(
    const std::string& taskName)
    : m_taskName(taskName),
    m_startTime(Clock::now()),
    m_lastCheckpoint(m_startTime)
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

void ScopeTimer::Checkpoint(
    const std::string& message)
{
    const auto now = Clock::now();

    const auto duration =
        std::chrono::duration_cast<std::chrono::milliseconds>(
            now - m_lastCheckpoint);

    std::cout
        << message
        << " : "
        << duration.count()
        << " ms"
        << '\n';

    m_lastCheckpoint = now;
}

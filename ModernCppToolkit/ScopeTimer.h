#pragma once

#include <chrono>
#include <string>

class ScopeTimer
{
public:

    explicit ScopeTimer(const std::string& taskName);

    ~ScopeTimer();

    void Checkpoint(
        const std::string& message);

private:

    using Clock = std::chrono::steady_clock;

    std::string m_taskName;

    Clock::time_point m_startTime;
};


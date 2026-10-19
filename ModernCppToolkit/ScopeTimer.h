#pragma once

#include <chrono>
#include <string>

#include "Logger.h"

class ScopeTimer
{
public:
    ScopeTimer(
        Logger& logger,
        const std::string& name);

    ~ScopeTimer();

    void Checkpoint(
        const std::string& message);

private:
    Logger& m_logger;

    std::string m_name;

    std::chrono::steady_clock::time_point m_start;
};

//private:
//
//    using Clock = std::chrono::steady_clock;
//
//    std::string m_taskName;
//
//    Clock::time_point m_startTime;
//
//    Clock::time_point m_lastCheckpoint;
//};


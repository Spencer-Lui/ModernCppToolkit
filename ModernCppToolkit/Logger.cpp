#include "Logger.h"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>

#include <iostream>

namespace
{
    std::string GetCurrentTime()
    {
        auto now = std::chrono::system_clock::now();

        auto time = std::chrono::system_clock::to_time_t(now);

        std::tm localTime;

#ifdef _WIN32
        localtime_s(&localTime, &time);
#else
        localtime_r(&time, &localTime);
#endif

        std::ostringstream oss;

        oss << std::put_time(
            &localTime,
            "%H:%M:%S");

        return oss.str();
    }
}

void Logger::Info(const std::string& message)
{
    std::cout
        << "["
        << GetCurrentTime()
        << "] "
        << "[INFO] "
        << message
        << '\n';
}

void Logger::Warning(
    const std::string& message)
{
    std::cout
        << "["
        << GetCurrentTime()
        << "] "
        << "[WARNING] "
        << message
        << '\n';
}

void Logger::Error(
    const std::string& message)
{
    std::cout
        << "["
        << GetCurrentTime()
        << "] "
        << "[ERROR] "
        << message
        << '\n';
}



#include "ScopeTimer.h"

#include <chrono>
#include <string>

ScopeTimer::ScopeTimer(
    Logger& logger,
    const std::string& name)
    : m_logger(logger),
    m_name(name),
    m_start(std::chrono::steady_clock::now())
{
    m_logger.Info(m_name + " started");
}

ScopeTimer::~ScopeTimer()
{
    auto end = std::chrono::steady_clock::now();

    auto elapsed =
        std::chrono::duration_cast<
        std::chrono::milliseconds>(
            end - m_start);

    m_logger.Info(
        m_name +
        " finished : " +
        std::to_string(elapsed.count()) +
        " ms");
}

void ScopeTimer::Checkpoint(
    const std::string& message)
{
    auto now = std::chrono::steady_clock::now();

    auto elapsed =
        std::chrono::duration_cast<
        std::chrono::milliseconds>(
            now - m_start);

    m_logger.Info(
        m_name +
        " - " +
        message +
        " : " +
        std::to_string(elapsed.count()) +
        " ms");
}
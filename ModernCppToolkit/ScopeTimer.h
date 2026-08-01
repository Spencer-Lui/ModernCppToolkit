#pragma once

#include <string>

class ScopeTimer
{
public:

    explicit ScopeTimer(
        const std::string& taskName);

    ~ScopeTimer();

private:

    std::string m_taskName;
};


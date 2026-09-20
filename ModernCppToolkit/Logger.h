#pragma once

#include <string>

class Logger
{
public:

    void Info(const std::string& message);

    void Warning(const std::string& message);

    void Error(const std::string& message);
};


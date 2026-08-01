#include <algorithm>
#include <iostream>
#include <vector>
#include <thread>

#include "../ModernCppToolkit/ScopeTimer.h"

#include "Core/Application.h"

int Application::Run()
{
    {
        ScopeTimer timer("Sleep Test");

        std::this_thread::sleep_for(
            std::chrono::milliseconds(200));

        timer.Checkpoint("After 200 ms");

        std::this_thread::sleep_for(
            std::chrono::milliseconds(300));
    }

    {
        ScopeTimer timer("Import CSV");

        std::this_thread::sleep_for(
            std::chrono::milliseconds(200));

        timer.Checkpoint("Read File");

        std::this_thread::sleep_for(
            std::chrono::milliseconds(100));

        timer.Checkpoint("Parse CSV");

        std::this_thread::sleep_for(
            std::chrono::milliseconds(50));
    }

    auto number =
        std::make_unique<int>(100);

    std::cout
        << *number
        << '\n';

    return 0;
}
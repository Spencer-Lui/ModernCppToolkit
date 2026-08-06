#include <algorithm>
#include <iostream>
#include <vector>
#include <thread>
#include <memory>


#include "../ModernCppToolkit/LargeBuffer.h"
#include "../ModernCppToolkit/ScopeTimer.h"
#include "../ModernCppToolkit/Person.h"
#include "../ModernCppToolkit/Car.h"
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

    {
        auto car =
            std::make_unique<Car>();

        car->Drive();
    }

    std::cout
        << "Application End\n";

    Person p1("Michael");

    Person p2(std::move(p1));

    /*{
        ScopeTimer timer("Copy Test");

        LargeBuffer buffer(10000000);

        LargeBuffer copy = buffer;
    }

    {
        ScopeTimer timer("Move Test");

        LargeBuffer buffer(10000000);

        LargeBuffer move = std::move(buffer);
    }*/

    std::vector<LargeBuffer> buffers;

    buffers.reserve(20);

    {
        ScopeTimer timer("Move Push");

        for (int i = 0; i < 20; i++)
        {
            LargeBuffer buffer(1000000);

            buffers.push_back(std::move(buffer));
        }
    }

    return 0;
}
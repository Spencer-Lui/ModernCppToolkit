#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <vector>
#include <thread>
#include <memory>
#include <string>
#include <map>


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

    std::map<int, std::string> students;

    students[1001] = "Michael";

    students[1002] = "John";

    students[1003] = "Mary";

    for (const auto& student : students)
    {
        std::cout
            << student.first
            << " : "
            << student.second
            << '\n';
    }


    /*std::map<int, std::string> didTable;

    didTable[0xF190] = "VIN";
    didTable[0xF187] = "Part Number";
    didTable[0xF18C] = "ECU Serial";

    for (const auto& did : didTable)
    {
        std::cout
            << did.first
            << " : "
            << did.second
            << '\n';
    }*/


    /*std::cout << "\nFind DID 0xF190\n";

    auto it = didTable.find(0xF190);

    if (it != didTable.end())
    {
        std::cout
            << it->first
            << " : "
            << it->second
            << '\n';
    }


    std::cout << "\nFind DID 0x1234\n";

    auto notFound = didTable.find(0x1234);

    if (notFound != didTable.end())
    {
        std::cout
            << notFound->second
            << '\n';
    }
    else
    {
        std::cout
            << "Not Found"
            << '\n';
    }*/


    std::unordered_map<int, std::string> didTable;

    didTable[0xF190] = "VIN";
    didTable[0xF187] = "Part Number";
    didTable[0xF18C] = "ECU Serial";

    for (const auto& did : didTable)
    {
        std::cout
            << std::hex
            << did.first
            << " : "
            << did.second
            << '\n';
    }

    return 0;
}
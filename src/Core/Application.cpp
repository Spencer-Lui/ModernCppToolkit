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
            std::chrono::milliseconds(500));
    }

    // 原本 STL 的程式放下面
    std::vector<int> numbers =
    {
        5,
        1,
        8,
        2,
        9,
        3
    };

    std::sort(
        numbers.begin(),
        numbers.end(),
        [](int left, int right)
        {
            return left < right;
        });

    for (int number : numbers)
    {
        std::cout << number << '\n';
    }

    return 0;
}
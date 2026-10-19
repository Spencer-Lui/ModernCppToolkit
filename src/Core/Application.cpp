#include <unordered_map>
#include <functional>
#include <algorithm>
#include <iostream>
#include <optional>
#include <vector>
#include <thread>
#include <memory>
#include <string>
#include <map>
#include <set>
#include <chrono>
#include <iomanip>


#include "../ModernCppToolkit/EventDispatcher.h"
#include "../ModernCppToolkit/LargeBuffer.h"
#include "../ModernCppToolkit/ScopeTimer.h"
#include "../ModernCppToolkit/Person.h"
#include "../ModernCppToolkit/Logger.h"
#include "../ModernCppToolkit/Car.h"
#include "Core/Application.h"


int Application::Run()
{
    
    std::function<int(int, int)> add;

    add =
        [](int a, int b)
        {
            return a + b;
        };

    std::cout
        << add(10, 20)
        << '\n';

    EventDispatcher dispatcher;

    dispatcher.Register(
        "Number",
        [](int value)
        {
            std::cout
                << "Receive : "
                << value
                << '\n';
        });

    dispatcher.Dispatch(
        "Number",
        100);

    dispatcher.Dispatch(
        "Number",
        999);


    Logger logger;

    {
        ScopeTimer timer(logger, "Import CSV");

        std::this_thread::sleep_for(
            std::chrono::milliseconds(200));

        timer.Checkpoint("Read File");

        std::this_thread::sleep_for(
            std::chrono::milliseconds(100));

        timer.Checkpoint("Parse CSV");

        std::this_thread::sleep_for(
            std::chrono::milliseconds(50));
    }


    

    return 0;
}

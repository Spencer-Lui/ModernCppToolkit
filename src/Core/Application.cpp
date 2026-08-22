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


#include "../ModernCppToolkit/EventDispatcher.h"
#include "../ModernCppToolkit/LargeBuffer.h"
#include "../ModernCppToolkit/ScopeTimer.h"
#include "../ModernCppToolkit/Person.h"
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
        "Hello",
        []()
        {
            std::cout
                << "Hello World\n";
        });

    dispatcher.Dispatch("Hello");

    dispatcher.Register(
        "Bye",
        []()
        {
            std::cout
                << "Good Bye\n";
        });

    dispatcher.Dispatch("Hello");

    dispatcher.Dispatch("Bye");

    return 0;
}
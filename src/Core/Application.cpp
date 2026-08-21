#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <optional>
#include <vector>
#include <thread>
#include <memory>
#include <string>
#include <map>
#include <set>


#include "../ModernCppToolkit/LargeBuffer.h"
#include "../ModernCppToolkit/ScopeTimer.h"
#include "../ModernCppToolkit/Person.h"
#include "../ModernCppToolkit/Car.h"
#include "Core/Application.h"

int Application::Run()
{
    
    int value = 10;

    auto print =
        [value]()
        {
            std::cout
                << value
                << '\n';
        };

    value = 20;

    print();

    return 0;
}
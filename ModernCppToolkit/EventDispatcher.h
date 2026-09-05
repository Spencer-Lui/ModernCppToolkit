#pragma once

#include <functional>
#include <string>
#include <unordered_map>

class EventDispatcher
{
public:

    void Register(
        const std::string& eventName,
        std::function<void(int)> callback);

    void Dispatch(
        const std::string& eventName,
        int value);

private:

    std::unordered_map<
        std::string,
        std::function<void(int)>> m_events;
};

#pragma once

#include <functional>
#include <string>
#include <unordered_map>

class EventDispatcher
{
public:

    void Register(
        const std::string& eventName,
        std::function<void()> callback);

    void Dispatch(
        const std::string& eventName);

private:

    std::unordered_map<
        std::string,
        std::function<void()>> m_events;
};

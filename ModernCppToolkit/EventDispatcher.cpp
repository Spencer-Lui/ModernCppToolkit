#include "EventDispatcher.h"

void EventDispatcher::Register(
    const std::string& eventName,
    std::function<void(int)> callback)
{
    m_events[eventName] = callback;
}

void EventDispatcher::Dispatch(
    const std::string& eventName,
    int value)
{
    auto it =
        m_events.find(eventName);

    if (it != m_events.end())
    {
        it->second(value);
    }
}

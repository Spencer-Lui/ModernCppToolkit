#include "EventDispatcher.h"

void EventDispatcher::Register(
    const std::string& eventName,
    std::function<void()> callback)
{
    m_events[eventName] = callback;
}

void EventDispatcher::Dispatch(
    const std::string& eventName)
{
    auto it =
        m_events.find(eventName);

    if (it != m_events.end())
    {
        it->second();
    }
}

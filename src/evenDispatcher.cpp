#include <iostream>
#include <vector>
#include <functional>
#include <string>

// Define an EventDispatcher class
class EventDispatcher {
public:
    // A list of listeners (callbacks)
    std::vector<std::function<void(const std::string&)>> listeners;

    // Method to register listeners
    void RegisterListener(const std::function<void(const std::string&)>& listener) {
        listeners.push_back(listener);
    }

    // Method to dispatch an event to all listeners
    void DispatchEvent(const std::string& eventMessage) {
        for (const auto& listener : listeners) {
            listener(eventMessage);  // Call the listener with the event message
        }
    }
};

// Listener classes that react to events
class EventListenerOne {
public:
    void OnEventReceived(const std::string& message) {
        std::cout << "EventListenerOne received: " << message << std::endl;
    }
};

class EventListenerTwo {
public:
    void OnEventReceived(const std::string& message) {
        std::cout << "EventListenerTwo received: " << message << std::endl;
    }
};

int main() {
    // Create an event dispatcher
    EventDispatcher dispatcher;

    // Create listeners
    EventListenerOne listener1;
    EventListenerTwo listener2;

    // Register listeners using lambdas to bind to their methods
    dispatcher.RegisterListener([&listener1](const std::string& message) {
        listener1.OnEventReceived(message);
    });
    
    dispatcher.RegisterListener([&listener2](const std::string& message) {
        listener2.OnEventReceived(message);
    });

    // Dispatch an event
    dispatcher.DispatchEvent("Game started!");
    
    return 0;
}

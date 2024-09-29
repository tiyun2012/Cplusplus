#include <iostream>
#include <vector>

// Define an interface (abstract class in C++) for listeners
class IListener {
public:
    virtual void OnEvent(const std::string& eventMessage) = 0;
};

class EventListener : public IListener {
public:
    void OnEvent(const std::string& eventMessage) override {
        std::cout << "Event received: " << eventMessage << std::endl;
    }
};

class EventEmitter {
    std::vector<IListener*> listeners;  // A list of listeners

public:
    // Method to register a listener
    void RegisterListener(IListener* listener) {
        listeners.push_back(listener);
    }

    // Method to trigger an event and notify all listeners
    void TriggerEvent(const std::string& eventMessage) {
        for (IListener* listener : listeners) {
            listener->OnEvent(eventMessage);        }
    }
};
int main() {
    EventEmitter emitter;       // Create an event emitter
    EventListener listener1;    // Create a listener
    EventListener listener2;    // Create another listener

    // Register listeners to the emitter
    emitter.RegisterListener(&listener1);
    emitter.RegisterListener(&listener2);

    // Trigger an event
    emitter.TriggerEvent("Button Clicked!");

    return 0;
}

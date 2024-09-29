#include <iostream>
#include <vector>
#include <string>

// Interface definition
class IEventListener {
public:
    virtual std::string OnEventReceived(const std::string& message) = 0;
    virtual ~IEventListener() = default;
};

// Base class from which listeners will derive
class GameObject {
public:
    virtual void Update() {
        std::cout << "GameObject is updating..." << std::endl;
    }

    virtual ~GameObject() = default;
};

// Derived class that inherits from both GameObject and implements IEventListener
class EventListenerOne : public GameObject, public IEventListener {
private:
    std::string storedMessage = "No event received";  // Default message

public:
    // Override the OnEventReceived method from IEventListener
    std::string OnEventReceived(const std::string& message) override {
        storedMessage = "EventListenerOne received: " + message;
        return storedMessage;
    }

    // Update method prints the stored message
    void Update() override {
        std::cout << storedMessage << std::endl;
    }
};

// Another derived class that inherits from GameObject and implements IEventListener
class EventListenerTwo : public GameObject, public IEventListener {
private:
    std::string storedMessage = "No event received";  // Default message

public:
    // Override the OnEventReceived method from IEventListener
    std::string OnEventReceived(const std::string& message) override {
        storedMessage = "EventListenerTwo received: " + message;
        return storedMessage;
    }

    // Update method prints the stored message
    void Update() override {
        std::cout << storedMessage << std::endl;
    }
};

// EventEmitter class that notifies all registered listeners
class EventEmitter {
private:
    std::vector<IEventListener*> listeners;

public:
    void RegisterListener(IEventListener* listener) {
        listeners.push_back(listener);
    }

    void TriggerEvent(const std::string& eventMessage) {
        for (IEventListener* listener : listeners) {
            listener->OnEventReceived(eventMessage);
        }
    }
};

// Main program to demonstrate the concept
int main() {
    // Create an event emitter
    EventEmitter emitter;

    // Create two listeners
    EventListenerOne listener1;
    EventListenerTwo listener2;

    // Register the listeners with the event emitter
    emitter.RegisterListener(&listener1);
    emitter.RegisterListener(&listener2);

    // Trigger an event
    emitter.TriggerEvent("Game Event!");

    // Call Update on the listeners (prints the stored message)
    listener1.Update();
    listener2.Update();

    return 0;
}

#include <iostream>      // Provides input/output functionality like cout

// Base class
class Base {
public:
    // Public function of Base class
    void show() const {
        std::cout << "Base public function\n";
    }
};

// Public inheritance
// Public members of Base remain public in PublicDerived
class PublicDerived : public Base {
};

// Private inheritance
// Public members of Base become private in PrivateDerived
class PrivateDerived : private Base {
public:
    // Public function to access the Base class function
    void callBaseShow() const {
        show();    // Calls the inherited Base class function
    }
};

// Main function - program execution starts here
int main() {

    // Creates an object of PublicDerived
    PublicDerived publicObject;

    // show() is public because of public inheritance
    publicObject.show();

    // Creates an object of PrivateDerived
    PrivateDerived privateObject;

    // Calls the public function that internally calls show()
    privateObject.callBaseShow();

    // Cannot directly call show() because it is private
    // through private inheritance
    // privateObject.show();  // Error

    return 0;    // Indicates successful program execution
}
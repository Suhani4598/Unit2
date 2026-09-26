#include <iostream>      // Provides input/output functionality like cout

// Base class
class Vehicle {
public:
    // Virtual function that can be overridden by derived classes
    virtual void move() const {
        std::cout << "Vehicle is moving\n";
    }

    // Virtual destructor for safe destruction of derived objects
    virtual ~Vehicle() = default;
};

// Car inherits from Vehicle
class Car : public Vehicle {
public:
    // Overrides the move() function of Vehicle
    void move() const override {
        std::cout << "Car moves on roads\n";
    }
};

// Boat inherits from Vehicle
class Boat : public Vehicle {
public:
    // Overrides the move() function of Vehicle
    void move() const override {
        std::cout << "Boat moves on water\n";
    }
};

// Main function - program execution starts here
int main() {

    // Creates a Car object
    Car car;

    // Creates a Boat object
    Boat boat;

    // Calls the move() function of Car
    car.move();

    // Calls the move() function of Boat
    boat.move();

    return 0;    // Indicates successful program execution
}
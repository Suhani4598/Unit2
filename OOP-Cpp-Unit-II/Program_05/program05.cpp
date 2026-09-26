#include <iostream>      // Provides input/output functionality like cout
#include <string>        // Provides the string data type
#include <utility>       // Provides std::move

// Base class
class Vehicle {
protected:
    std::string registrationNumber;    // Stores vehicle registration number

public:
    // Constructor of Vehicle class
    explicit Vehicle(std::string registration)
        : registrationNumber(std::move(registration)) {}

    // Function to start the vehicle
    void start() const {
        std::cout << "Vehicle " << registrationNumber << " started\n";
    }
};

// Car inherits from Vehicle
class Car : public Vehicle {
public:
    // Constructor of Car class
    explicit Car(std::string registration)
        : Vehicle(std::move(registration)) {}

    // Function specific to Car
    void openBoot() const {
        std::cout << "Car boot opened\n";
    }
};

// Bike inherits from Vehicle
class Bike : public Vehicle {
public:
    // Constructor of Bike class
    explicit Bike(std::string registration)
        : Vehicle(std::move(registration)) {}

    // Function specific to Bike
    void helmetReminder() const {
        std::cout << "Please wear a helmet\n";
    }
};

// Main function - program execution starts here
int main() {

    // Creates a Car object with its registration number
    Car car("MH12AB1234");

    // Creates a Bike object with its registration number
    Bike bike("MH12CD5678");

    // Calls the inherited start() function for Car
    car.start();

    // Calls the Car-specific function
    car.openBoot();

    // Calls the inherited start() function for Bike
    bike.start();

    // Calls the Bike-specific function
    bike.helmetReminder();

    return 0;    // Indicates successful program execution
}
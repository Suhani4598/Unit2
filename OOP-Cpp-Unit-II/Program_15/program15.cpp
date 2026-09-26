#include <iostream>      // Provides input/output functionality like cout
#include <string>        // Provides the string data type
#include <utility>       // Provides std::move

// Base class
class Vehicle {
protected:
    std::string registrationNumber;   // Stores vehicle registration number
    double ratePerDay;                // Stores rental rate per day

public:
    // Constructor of Vehicle class
    Vehicle(std::string registration, double rate)
        : registrationNumber(std::move(registration)), ratePerDay(rate) {}

    // Virtual function to calculate rent
    virtual double calculateRent(int days) const {
        return ratePerDay * days;    // Basic rent calculation
    }

    // Virtual function to display vehicle details
    virtual void display() const {
        std::cout << "Registration: " << registrationNumber << '\n';
        std::cout << "Rate per day: " << ratePerDay << '\n';
    }

    // Virtual destructor
    virtual ~Vehicle() = default;
};

// Car inherits from Vehicle
class Car : public Vehicle {
private:
    int numberOfDoors;     // Stores the number of doors

public:
    // Constructor of Car class
    Car(std::string registration, double rate, int doors)
        : Vehicle(std::move(registration), rate),
          numberOfDoors(doors) {}

    // Overrides the display() function
    void display() const override {

        // Calls the display() function of Vehicle
        Vehicle::display();

        // Displays car-specific information
        std::cout << "Doors: " << numberOfDoors << '\n';
    }
};

// Bike inherits from Vehicle
class Bike : public Vehicle {
private:
    int engineCapacity;    // Stores engine capacity in cc

public:
    // Constructor of Bike class
    Bike(std::string registration, double rate, int capacity)
        : Vehicle(std::move(registration), rate),
          engineCapacity(capacity) {}

    // Overrides calculateRent() for bikes
    double calculateRent(int days) const override {

        // Gives a 10% discount on the normal rent
        return ratePerDay * days * 0.9;
    }

    // Overrides the display() function
    void display() const override {

        // Calls the display() function of Vehicle
        Vehicle::display();

        // Displays bike-specific information
        std::cout << "Engine Capacity: "
                  << engineCapacity << " cc\n";
    }
};

// Main function - program execution starts here
int main() {

    // Creates a Car object
    Car car("MH12AB1234", 2000.0, 5);

    // Creates a Bike object
    Bike bike("MH12CD5678", 800.0, 150);

    // Displays car details
    std::cout << "Car Details\n";
    car.display();

    // Calculates and displays car rent for 3 days
    std::cout << "Rent for 3 days: "
              << car.calculateRent(3) << "\n\n";

    // Displays bike details
    std::cout << "Bike Details\n";
    bike.display();

    // Calculates and displays bike rent for 3 days
    std::cout << "Rent for 3 days: "
              << bike.calculateRent(3) << '\n';

    return 0;    // Indicates successful program execution
}
#include <iostream>      // Provides input/output functionality like cout
#include <string>        // Provides the string data type
#include <utility>       // Provides std::move

// Base class
class Employee {
protected:
    std::string name;    // Stores the employee's name

public:
    // Constructor of Employee class
    explicit Employee(std::string employeeName)
        : name(std::move(employeeName)) {}
};

// Derived class that inherits from Employee
class Developer : public Employee {
private:
    std::string language;    // Stores the programming language

public:
    // Constructor of Developer class
    Developer(std::string employeeName, std::string programmingLanguage)
        : Employee(std::move(employeeName)),
          language(std::move(programmingLanguage)) {}

    // Function to display developer details
    void display() const {
        std::cout << "Developer: " << name << '\n';       // Displays the employee name
        std::cout << "Language: " << language << '\n';   // Displays the programming language
    }
};

// Main function - program execution starts here
int main() {

    // Creates a Developer object with name "Neha" and language "C++"
    Developer developer("Neha", "C++");

    // Calls the display function to show developer details
    developer.display();

    return 0;    // Indicates successful program execution
}
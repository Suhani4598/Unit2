#include <iostream>      // Provides input/output functionality like cout
#include <string>        // Provides the string data type
#include <utility>       // Provides std::move

// Base class
class Person {
protected:
    std::string name;    // Stores the person's name

public:
    // Constructor of Person class
    explicit Person(std::string personName)
        : name(std::move(personName)) {}

    // Function to display person details
    void showPerson() const {
        std::cout << "Name: " << name << '\n';
    }
};

// Employee inherits from Person
class Employee : public Person {
protected:
    int employeeId;      // Stores the employee ID

public:
    // Constructor of Employee class
    Employee(std::string employeeName, int id)
        : Person(std::move(employeeName)), employeeId(id) {}

    // Function to display employee details
    void showEmployee() const {
        std::cout << "Employee ID: " << employeeId << '\n';
    }
};

// Manager inherits from Employee
// This creates multilevel inheritance:
// Person -> Employee -> Manager
class Manager : public Employee {
private:
    int teamSize;        // Stores the number of team members

public:
    // Constructor of Manager class
    Manager(std::string managerName, int id, int size)
        : Employee(std::move(managerName), id), teamSize(size) {}

    // Function to display manager details
    void showManager() const {
        showPerson();       // Calls function inherited from Person
        showEmployee();     // Calls function inherited from Employee
        std::cout << "Team Size: " << teamSize << '\n';
    }
};

// Main function - program execution starts here
int main() {

    // Creates a Manager object with name, ID and team size
    Manager manager("Ravi", 501, 8);

    // Calls the function to display all manager details
    manager.showManager();

    return 0;    // Indicates successful program execution
}
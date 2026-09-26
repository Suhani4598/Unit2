#include <iostream>      // Provides input/output functionality like cout
#include <string>        // Provides the string data type
#include <utility>       // Provides std::move

// Base class
class Employee {
protected:
    int employeeId;      // Stores employee ID
    std::string name;    // Stores employee name

public:
    // Constructor of Employee class
    Employee(int id, std::string employeeName)
        : employeeId(id), name(std::move(employeeName)) {}

    // Pure virtual function for calculating salary
    // Makes Employee an abstract class
    virtual double calculateSalary() const = 0;

    // Function to display basic employee details
    void displayBasicDetails() const {
        std::cout << "Employee ID: " << employeeId << '\n';
        std::cout << "Name: " << name << '\n';
    }

    // Virtual destructor
    virtual ~Employee() = default;
};

// PermanentEmployee inherits from Employee
class PermanentEmployee : public Employee {
private:
    double basicSalary;    // Stores basic salary
    double allowance;      // Stores additional allowance

public:
    // Constructor of PermanentEmployee
    PermanentEmployee(int id, std::string employeeName,
                      double basic, double extra)
        : Employee(id, std::move(employeeName)),
          basicSalary(basic), allowance(extra) {}

    // Overrides calculateSalary()
    double calculateSalary() const override {
        return basicSalary + allowance;    // Calculates total salary
    }
};

// ContractEmployee inherits from Employee
class ContractEmployee : public Employee {
private:
    double hourlyRate;     // Stores salary per hour
    int hoursWorked;       // Stores number of hours worked

public:
    // Constructor of ContractEmployee
    ContractEmployee(int id, std::string employeeName,
                     double rate, int hours)
        : Employee(id, std::move(employeeName)),
          hourlyRate(rate), hoursWorked(hours) {}

    // Overrides calculateSalary()
    double calculateSalary() const override {
        return hourlyRate * hoursWorked;   // Calculates salary based on hours
    }
};

// Function to display employee pay slip
// Takes Employee reference so it can work with different employee types
void displayPaySlip(const Employee& employee) {

    // Displays common employee details
    employee.displayBasicDetails();

    // Calls the appropriate calculateSalary() function
    std::cout << "Salary: "
              << employee.calculateSalary() << "\n\n";
}

// Main function - program execution starts here
int main() {

    // Creates a PermanentEmployee object
    PermanentEmployee permanentEmployee(
        101, "Asha", 40000.0, 8000.0
    );

    // Creates a ContractEmployee object
    ContractEmployee contractEmployee(
        102, "Vikas", 500.0, 80
    );

    // Displays pay slip for permanent employee
    displayPaySlip(permanentEmployee);

    // Displays pay slip for contract employee
    displayPaySlip(contractEmployee);

    return 0;    // Indicates successful program execution
}
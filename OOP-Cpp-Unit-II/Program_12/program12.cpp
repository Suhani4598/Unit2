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

    // Function to display the person's name
    void displayName() const {
        std::cout << "Name: " << name << '\n';
    }
};

// Student virtually inherits from Person
class Student : virtual public Person {
public:
    // Constructor of Student class
    Student() : Person("Unknown") {}
};

// Employee virtually inherits from Person
class Employee : virtual public Person {
public:
    // Constructor of Employee class
    Employee() : Person("Unknown") {}
};

// TeachingAssistant inherits from both Student and Employee
class TeachingAssistant : public Student, public Employee {
public:
    // Constructor of TeachingAssistant class
    explicit TeachingAssistant(std::string assistantName)
        // Initializes the single shared Person object
        : Person(std::move(assistantName)),
          Student(),
          Employee() {}
};

// Main function - program execution starts here
int main() {

    // Creates a TeachingAssistant object with the name "Riya"
    TeachingAssistant assistant("Riya");

    // Calls displayName() from the shared Person base class
    assistant.displayName();

    return 0;    // Indicates successful program execution
}
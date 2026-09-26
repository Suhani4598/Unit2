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

// Student class inherits from Person
class Student : public Person {
private:
    int rollNumber;      // Stores the student's roll number

public:
    // Constructor of Student class
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {}

    // Function to display student details
    void displayStudent() const {
        displayName();   // Calls the inherited function from Person class
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};

// Main function - program execution starts here
int main() {

    // Creates a Student object with name "Amit" and roll number 101
    Student student("Amit", 101);

    // Calls the function to display student details
    student.displayStudent();

    return 0;            // Indicates successful program execution
}
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
    void display() const {
        std::cout << "Name: " << name << '\n';              // Displays name
        std::cout << "Roll Number: " << rollNumber << '\n'; // Displays roll number
    }
};

// Main function - program execution starts here
int main() {

    // Creates a Student object with name "Kiran" and roll number 24
    Student student("Kiran", 24);

    // Calls the display function
    student.display();

    return 0;    // Indicates successful program execution
}
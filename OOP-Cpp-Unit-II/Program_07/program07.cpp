#include <iostream>      // Provides input/output functionality like cout

// Academic class
class Academic {
public:
    // Function to display academic information
    void display() const {
        std::cout << "Academic information\n";
    }
};

// Sports class
class Sports {
public:
    // Function to display sports information
    void display() const {
        std::cout << "Sports information\n";
    }
};

// Student inherits from both Academic and Sports
// This is called multiple inheritance
class Student : public Academic, public Sports {
public:
    // Function to display information from both classes
    void displayAll() const {
        Academic::display();    // Calls display() from Academic class
        Sports::display();      // Calls display() from Sports class
    }
};

// Main function - program execution starts here
int main() {

    // Creates an object of Student class
    Student student;

    // Calls display() from Academic class specifically
    student.Academic::display();

    // Calls display() from Sports class specifically
    student.Sports::display();

    // Calls displayAll() to display information from both classes
    student.displayAll();

    return 0;    // Indicates successful program execution
}
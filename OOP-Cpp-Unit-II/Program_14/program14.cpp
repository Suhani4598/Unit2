#include <iostream>      // Provides input/output functionality like cout
#include <string>        // Provides the string data type
#include <utility>       // Provides std::move

// University class
class University {
public:

    // Nested class inside University
    class Department {
    private:
        std::string name;    // Stores the department name

    public:
        // Constructor of Department class
        explicit Department(std::string departmentName)
            : name(std::move(departmentName)) {}

        // Function to display department name
        void display() const {
            std::cout << "Department: " << name << '\n';
        }
    };
};

// Main function - program execution starts here
int main() {

    // Creates a Department object using the scope of University
    University::Department department(
        "Artificial Intelligence and Data Science"
    );

    // Calls the display function of Department
    department.display();

    return 0;    // Indicates successful program execution
}
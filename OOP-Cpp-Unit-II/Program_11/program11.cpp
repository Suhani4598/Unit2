#include <iostream>      // Provides input/output functionality like cout

// Abstract base class
class Shape {
public:
    // Pure virtual function for calculating area
    // = 0 makes Shape an abstract class
    virtual double area() const = 0;

    // Virtual destructor
    virtual ~Shape() = default;
};

// Rectangle inherits from Shape
class Rectangle : public Shape {
private:
    double length;       // Stores length of rectangle
    double width;        // Stores width of rectangle

public:
    // Constructor of Rectangle class
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Overrides the pure virtual area() function
    double area() const override {
        return length * width;    // Calculates area of rectangle
    }
};

// Circle inherits from Shape
class Circle : public Shape {
private:
    double radius;       // Stores radius of circle

public:
    // Constructor of Circle class
    explicit Circle(double givenRadius)
        : radius(givenRadius) {}

    // Overrides the pure virtual area() function
    double area() const override {
        return 3.141592653589793 * radius * radius;  // Calculates area of circle
    }
};

// Main function - program execution starts here
int main() {

    // Creates a Rectangle object with length 5 and width 3
    Rectangle rectangle(5.0, 3.0);

    // Creates a Circle object with radius 2
    Circle circle(2.0);

    // Displays the area of the rectangle
    std::cout << "Rectangle Area: " << rectangle.area() << '\n';

    // Displays the area of the circle
    std::cout << "Circle Area: " << circle.area() << '\n';

    return 0;    // Indicates successful program execution
}
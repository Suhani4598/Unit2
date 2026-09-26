# Unit2
C++
Student Name : Suhani Dalve 
PRN :126UAD2003
Class/Division : SY-F
Course Name : Object Oriented Programing C++
 Unit II 

======List of Program======
1.Basic single inheritance
2.Protected member access
3.Public versus private inheritance 
4.Multilevel inheritance
5.Hierarchical inheritance 
6.Multiple inheritance
7.Multiple-inheritance ambiguity
8.Constructor and destructor order
9.Parameterized base constructor
10.Function overriding
11.Abstract class
12.Virtual base class 
13.Friend class 
14.Nested class 
15.Mini-project: Vehicle rental
16.Mini-project: Employee payroll

======Brief Descrition of Each Progarm======

1. Basic Single Inheritance

Concept: One base class → one derived class.
Person is the base class and Student inherits from it. Student gets the name and displays its own rollNumber.

Example:
Person → Student

2. Protected Member Access

Concept: A protected member can be accessed inside the base class and its derived classes.

Here, Developer inherits Employee and directly accesses the protected name variable.

Main point:
protected = accessible in parent + child class, but not directly outside.

3. Public vs Private Inheritance

Concept: Shows the difference between public and private inheritance.

Public inheritance: Base public members remain public.
Private inheritance: Base public/protected members become private in the derived class.
4. Multilevel Inheritance

Concept: Inheritance happens in multiple levels.

Person → Employee → Manager

Manager can use features inherited from both Employee and Person.

5. Hierarchical Inheritance

Concept: One base class has multiple derived classes.

Vehicle → Car
Vehicle → Bike

Both Car and Bike can use the start() function of Vehicle but also have their own functions.

6. Multiple Inheritance

Concept: One derived class inherits from two or more base classes.

Academic + Sports → Student

Student receives academic marks and sports marks and calculates total marks.

7. Resolving Multiple-Inheritance Ambiguity

Concept: Both parent classes have a function with the same name.

Both Academic and Sports have display().

The scope resolution operator :: tells C++ which function to call.

student.Academic::display();
student.Sports::display();

8. Constructor and Destructor Order

Concept: Shows the order in which constructors and destructors execute.

Creation:

Base constructor
↓
Derived constructor

Destruction:

Derived destructor
↓
Base destructor

9. Parameterized Base Constructor

Concept: A derived-class constructor calls the parameterized constructor of the base class using an initializer list.

Student(...) : Person(studentName), rollNumber(roll)

So, the Person part is initialized first, followed by Student.

10. Function Overriding

Concept: A derived class provides its own version of a base-class function.

Vehicle has move(), while Car and Boat override it.

Vehicle → move()
   ↓
Car   → Car moves on roads
Boat  → Boat moves on water

virtual and override are used.

11. Abstract Class

Concept: An abstract class contains a pure virtual function.

virtual double area() const = 0;

Shape is abstract, so we cannot create a Shape object directly.

Rectangle and Circle provide their own area() implementations.

12. Virtual Base Class / Diamond Inheritance

Concept: Solves the problem of getting duplicate copies of a base class in diamond inheritance.

       Person
       /    \
  Student  Employee
       \    /
   TeachingAssistant

virtual public Person ensures that only one Person object exists in TeachingAssistant.

13. Friend Class

Concept: A friend class can access the private members of another class.

Here, Auditor is declared as a friend of Account, so it can access the private balance.

friend class Auditor;
14. Nested Class

Concept: A class defined inside another class is called a nested class.

University
    ↓
Department

Department is defined inside University and is accessed as:

University::Department

15. Vehicle Rental System

Concept: A practical mini-project using inheritance and function overriding.

       Vehicle
       /     \
     Car     Bike
Car calculates normal rent.
Bike gets a 10% discount.
display() is overridden for different vehicle details.

Example:
Car = ₹2000/day × 3 = ₹6000
Bike = ₹800/day × 3 × 0.9 = ₹2160.

16. Employee Payroll System

Concept: Uses an abstract class + inheritance + function overriding.

          Employee
          /      \
 Permanent     Contract
 Employee      Employee
Permanent employee salary = basic salary + allowance.
Contract employee salary = hourly rate × hours worked.
calculateSalary() is a pure virtual function overridden by both classes.

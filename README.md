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

This program demonstrates single inheritance, where one derived class inherits properties and functions from one base class. Here, Student inherits from Person and displays the student's name and roll number.

2. Protected Member Access

This program demonstrates the protected access specifier. A derived class can directly access the protected data member of its base class. Here, Developer accesses the name inherited from Employee.

3. Public vs Private Inheritance

This program explains the difference between public and private inheritance. Public inheritance keeps base public members accessible, while private inheritance makes them private within the derived class.

4. Multilevel Inheritance

This program demonstrates inheritance through multiple levels. Manager inherits from Employee, and Employee inherits from Person. Therefore, Manager can use features from both classes.

5. Hierarchical Inheritance

This program demonstrates hierarchical inheritance, where multiple classes inherit from the same base class. Car and Bike both inherit common features from Vehicle and have their own special functions.

6. Multiple Inheritance

This program demonstrates multiple inheritance, where one class inherits from two base classes. Student inherits academic marks from Academic and sports marks from Sports, then calculates the total.

7. Multiple-Inheritance Ambiguity

This program shows what happens when two base classes have functions with the same name. The ambiguity is solved by specifying which base-class function should be called using the scope-resolution operator.

8. Constructor and Destructor Order

This program demonstrates the order of constructor and destructor execution in inheritance. The base constructor executes first, followed by the derived constructor. During destruction, the derived destructor executes first, followed by the base destructor.

9. Parameterized Base Constructor

This program shows how a derived class initializes a parameterized constructor of its base class. The student's name is passed to the Person class, while the roll number is initialized in the Student class.

10. Function Overriding

This program demonstrates function overriding. The base class provides a move function, and derived classes provide their own versions according to their behavior.

11. Abstract Class

This program demonstrates an abstract class using a pure virtual function. Shape defines the concept of calculating area, while Rectangle and Circle provide their own area calculations.

12. Virtual Base Class and Diamond Inheritance

This program solves the diamond inheritance problem. Virtual inheritance ensures that the final derived class has only one copy of the common base class Person.

13. Friend Class

This program demonstrates a friend class. The Auditor class is allowed to access the private balance of the Account class because it is declared as a friend.

14. Nested Class

This program demonstrates a nested class, where one class is defined inside another class. Here, Department is defined inside University and represents a department of the university.

15. Vehicle Rental System

This mini-project demonstrates inheritance in a vehicle rental system. Car and Bike inherit from Vehicle. The program displays vehicle details and calculates rental charges; the bike has a 10% discount.

16. Employee Payroll System

This mini-project demonstrates an employee salary system using an abstract base class. Permanent employees receive basic salary plus allowance, while contract employees are paid according to their hourly rate and hours worked.

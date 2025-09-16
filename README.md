# Inheritance in C++

Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a new class, called the derived class, to acquire the properties and behaviors of an existing class, known as the base class. This mechanism promotes code reusability and extensibility, enabling you to build hierarchical relationships that mirror real-world systems.

## Key Concepts of Inheritance
Base Class: The parent class from which another class inherits.

Derived Class: The child class that inherits from the base class. It can add its own unique features while also using the members of the base class.

Access Specifiers: These keywords determine which members of the base class are accessible in the derived class.

public: Public and protected members of the base class remain accessible as public and protected, respectively, in the derived class.

protected: Public and protected members of the base class become protected in the derived class.

private: All public and protected members of the base class become private in the derived class, meaning they are no longer directly accessible from outside the derived class or by its own derived classes.

## Types of Inheritance in C++
C++ supports various types of inheritance, allowing for flexible and powerful class design.

### Single Inheritance
This is the simplest form, where a single derived class inherits from a single base class.

Example: A Car class inheriting from a Vehicle class. The Car can reuse the Vehicle's color() method and add its own specific speed() method.

### Multilevel Inheritance
In this type, a class is derived from another derived class, creating a chain-like hierarchy.

Example: A Lab class inheriting from a Department class, which in turn inherits from a University class. This allows the Lab to access features from both Department and University.

### Hierarchical Inheritance
This involves multiple derived classes inheriting from a single base class. It's useful for creating a common base for several specialized classes.

Example: Department, Hostel, and Library classes all inheriting from a University class. Each derived class adds its own specific functionality while sharing a common foundation.

### Multiple Inheritance
This type allows a derived class to inherit from more than one base class, combining their functionalities.

Example: A Department class inheriting from both a University class and a Facility class, gaining features from both.

### Hybrid Inheritance
As the name suggests, this is a combination of two or more types of inheritance. A common example is combining hierarchical and multiple inheritance to model complex relationships.

Example: A Lab class inheriting from a Department class (multilevel), and the Department class is part of a hierarchical structure with Hostel, both inheriting from University. The Lab might also inherit from an additional class like Facility (multiple).

## Illustrative Algorithms
Here are some simplified algorithms to demonstrate how to implement these inheritance types.

### Single Inheritance:

1. Define a Vehicle base class with a method like displayColor().<br>
2. Create a Car derived class that inherits from Vehicle and has its own displaySpeed() method.<br>
3. In main(), create a Car object and call both the inherited displayColor() and its own displaySpeed() methods. <br>

### Multilevel Inheritance:

1. Define a base class Animal<br>
2. Define a derived class Mammal<br>
3. Define another derived class Dog<br>
4. Create an object named myDog of the Dog class.<br>
   Call the eat() method using the myDog object. This method is inherited from the Animal class.<br>
   Call the sleep() method using the myDog object. This method is also inherited from the Animal class.<br>
   Call the walk() method using the myDog object. This method is inherited from the Mammal class.<br>
   Call the bark() method using the myDog object. This method belongs to the Dog class itself.<br>


### Hierarchical Inheritance:

1. Define the Base Class Animal<br>
2. Define a Dog class and a Cat class.<br>
   Both classes inherit publicly from the Animal base class. This forms the hierarchical part of the structure, where multiple classes (Dog and Cat) derive from a single base class (Animal).<br>
3. Define two more classes: whitecat and blackcat.<br>
   Both of these classes inherit publicly from the Cat class. This creates a multilevel hierarchy, as whitecat and blackcat are derived from Cat, which is itself derived from Animal.<br>
4. Create an object for each class in main function: dog, cat, wc (white cat), and bc (black cat).<br>


## In Conclusion
Inheritance is a powerful tool in C++ that supports code reuse and extensibility. By modeling hierarchical relationships, it allows for a more organized and maintainable codebase. Understanding the different types of inheritance is crucial for designing flexible and robust object-oriented applications. Inheritance also serves as a foundational concept for polymorphism, another key pillar of OOP.

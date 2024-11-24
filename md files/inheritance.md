# INHERITANCE
`Inheritance` is a mechanism that allows one class (called the _derived or child class_) to acquire the _properties_ (attributes/variables) and _functions_ (methods) of another class (called the _base class or parent class_). It helps promote code reusability and establishes a relationship between different classes, where the _derived class_ can inherit functionality from the _base class_ and, if necessary, modify or extend it.

[Practical Questions](#questions-for-practice)

### *Types*
1. [Single Inheritance](#single-inheritance)<br>
2. [Multi-Level Inheritance](#multi-level-inheritance)<br>
3. [Multiple Inheritance](#multiple-inheritance)<br>
4. [Hierarchical Inheritance](#hierarchical-inheritance)<br>
5. [Hybrid Inheritance](#hybrid-inheritance)<br>
---
## SINGLE INHERITANCE

A child class inherits from only one parent class. The child class gains all the attributes and behaviors of the single parent class.<br>

__Example 1__: `Car` inherits from `Vehicle` in the following code.

```cpp
#include <iostream>
using namespace std;
// Base class
class Vehicle {
    int speed;

    public:
        void setSpeed(int spd) {
            speed = spd;
        }
        int getVehicle() {
            return speed;
        }
        void displayInfo() {
            cout << "Vehicle's Speed: " << speed << endl;
        }
};

// Derived class
class Car : public Vehicle {
    string brand;

    public:
        Car(string brnd, int sped) {
            this->brand = brnd;
            setSpeed(sped);
        }
        void carDetails() {
            cout << "Brand's name: " << brand << endl;
            cout << "Car Speed: " << getVehicle() << endl;
        }
};

// Main Function
int main() {
    Car honda("Honda", 120); // 1st object of DERIVED class
    honda.carDetails();
    Car hynd("Hyundai", 150); // 2nd object of DERIVED class
    hynd.carDetails();
    
    return 0;
}
```
<img src="/images/1-single_inheritance.png" alt="Example Diagram of Single Inheritance" width="300"/>

__Example 2__: `Ebook` inherits from `Book` in the following code.

```cpp
// Base Class
class Book {
    string title, author;
    public:
        // setter function sets the values of current class's private members equal to the values given by user
        void setBook(string title, string authr) {
            this->title = title;
            this->author = authr;
        }
        // getter functions return the set values of private members as private members can't be accessed outside the class
        string getTitle() {
            return title;
        }
        string getAuthor() {
            return author;
        }
};
// Derived Class
class Ebook : public Book {
    // for Ebook we have declared new private members
    int fileSize;
    string format;
    public:
        // Constructor to assign the values to private members
        Ebook(string title, string author, int fsize, string frmt) {
            this->fileSize = fsize;
            this->format = frmt;
            setBook(title, author); // this function can be accessed as it's parent class's function & it assigns the values to private mambers of parent class
        }
        void displayEbook() {
            cout << "Book Title: " << getTitle() << endl; // getTitle() returns the value of TITLE as string
            cout << "Book Author: " << getAuthor() << endl; // getAuthor() returns the value of AUTHOR as string
            cout << "Book File Size: " << fileSize << "KB"<< endl;
            cout << "Book File Format: ." << format << endl;
        }
};

int main() {
    // we create object of derived class and pass the values to constructor
    Ebook AHabits("Atomic Habits", "James Clear", 1300, "pdf");
    AHabits.displayEbook(); // this function displays all the values 
    return 0;
}
```
<img src="/images/2-single_inheritance.png" alt="Example Diagram of Single Inheritance" width="300"/>

## MULTI-LEVEL INHERITANCE

A derived class is derived from another derived class, forming a chain of inheritance. The derived class inherits from a base, which itself is a derived class of another base class.

__Example 1__: `Manager` class inherits from `Employee` class that inherits from `Person` class in the following code.

```cpp
// Base class
class Person {
    string name;
    int age;
    //
    public:
        // setter function sets the values of current class's private members equal to the values given by user
        void setPerson(string name, int age) {
            this->name = name;
            this->age = age;
        }
        // getter functions return values of private members as private members can't be accessed outside the class
        string getPersonName() {
            return name;
        }
        int getPersonAge() {
            return age;
        }
        // in case we want to make an Object of Person class then we can display the values
        void displayPerson() {
            cout << "Name: " << getPersonName() << endl;
            cout << "Age: " << getPersonAge() << endl;
        }
};
// Derived class of Person
class Employee : public Person {
    int employeeID;
    public:
        void setEmployee(string name, int age, int ID) {
            this->employeeID = ID;
            setPerson(name, age);
        }
        int getEmployeeID() {
            return employeeID;
        }
        // in case we want to make an Object of Employee class then we can display the values
        void displayEmployee() {
            cout << "Name: " << getPersonName() << endl;
            cout << "Age: " << getPersonAge() << endl;
            cout << "Employee ID: " << getEmployeeID() << endl;
        }
};
// Derived/Inherited Class of Employee class
class Manager : public Employee {
    string department;
    public:
    // Constructor of Manager class
        Manager(string name, int age, int id, string dept) {
            setEmployee(name, age, id);
            this->department = dept;
        }
        // displaying the values
        void displayManager() {
            cout << "Name: " << getPersonName() << endl;
            cout << "Age: " << getPersonAge() << endl;
            cout << "Employee ID: " << getEmployeeID() << endl;
            cout << "Department: " << department << endl;
        }
};

// Main function
int main() {
    cout << "Person" << endl; // This line is for differentiation of outputs
    // An Object of Person class
    Person p1;
    p1.setPerson("Ghauri", 34);
    p1.displayPerson();

    cout << endl << "Employee" << endl; // This line is for differentiation of outputs
    // An Object of Employee class
    Employee e1;
    e1.setEmployee("Shivani", 28, 1342);
    e1.displayEmployee();

    cout << endl << "Manager" << endl; // This line is for differentiation of outputs
    // An Object of Manager
    Manager mng1("John", 32, 1456, "Finance");
    mng1.displayManager();
    
    cout << endl << endl; // This line is for differentiation of outputs
    return 0;
}
```
<img src="/images/1-Multi_Level_Inheritance.png" alt="Example Diagram of Multilevel Inheritance" height="600" />

## MULTIPLE INHERITANCE

A derived class inherits from more than one base classes. The derived class combines the attributes and behaviors of multiple base classes.

__Example 1__: `CreativeEngineer` inherits from `Artist` &amp; `Engineer` in the following code.

```cpp
// Base Class
class Artist {
    string artForm;
    public:
        void setArtist(string artF) {
            this->artForm = artF;
        }
        string getArtist() {
            return artForm;
        }
};

// Base Class
class Engineer {
    string specialization;
    public:
        void setEngineer(string spec) {
            this->specialization = spec;
        }
        string getEngineer() {
            return specialization;
        }
};

// One Derived Class from Two Base Classes
class CreativeEngineer : public Artist, Engineer {
    string name;
    public:
        CreativeEngineer(string name, string spec, string artF) {
            this->name = name;
            setArtist(artF);
            setEngineer(spec);
        }
        void showProfile() {
            cout << "Name: " << name << endl;
            cout << "Art Form: " << getArtist() << endl;
            cout << "Specialization: " << getEngineer() << endl;
        }
};

int main() {
    cout << endl << endl; // This line is for differentiation of outputs
    CreativeEngineer ce1("Akash", "Software Engineer", "Painting");
    ce1.showProfile();
    cout << endl << endl; // This line is for differentiation of outputs
    return 0;
}
```
<img src="/images/1-multiple_inheritance.png" alt="Example Diagram of Multiple Inheritance" width="500"/>

__Example 2__: `Smartphone` class inherits from `Gadget`, `Camera`, &amp; `Storage` 3 different classes in the following code.
```cpp
class Gadget { // Base Class
    string brand;
    public:
        void setGadget(string brand) {
            this->brand = brand;
        }
        string getBrand() {
            return brand;
        }
};

class Camera { // Base Class
    int resolution;

    public:
        void setCamera(int res) {
            this->resolution = res;
        }
        int getResolution() {
            return resolution;
        }
};

class Storage { // Base Class
    double capacity;
    public:
        void setStorage(double cap) {
            this->capacity = cap;
        }
        double getCapacity() {
            return capacity;
        }
};

// One Derived Class from Three Base Classes
class Smartphone : public Gadget, Camera, Storage {
    public:
        Smartphone(string brand, int res, double cap) {
            setGadget(brand);
            setCamera(res);
            setStorage(cap);
        }

        void displayMobile() {
            cout << "Brand's Name: " << getBrand() << endl;
            cout << "Camera Resolution: " << getResolution() << "MP" << endl;
            cout << "Storage: " << getCapacity() << "GB" << endl;
        }
};

int main() {
    Smartphone mob1("Xiomi", 48, 128);
    system("cls");
    cout << endl << endl << "\t\tMobile's Details" << endl;
    mob1.displayMobile();
    cout << endl << endl;
    return 0;
}
```
<img src="/images/2-multiple_inheritance.png" alt="Example Diagram of Multiple Inheritance" width="500"/>

## HIERARCHICAL INHERITANCE

Multiple derived classes inherit from a single base class. Several child classes share a common parent class.

__Example 1__: `Dog` &amp; `Cat` classes inherit from single `Animal` class in the following code.

```cpp
class Animal {
    string name;
    int age;
    public:
        void setAnimal(string name, int age) {
            this->name = name;
            this->age = age;
        }
        string getAnimalName() {
            return name;
        }
        int getAnimalAge() {
            return age;
        }
        void displayAnimal() {
            cout << "Animal's Name: " << getAnimalName() << endl;
            cout << "Animal's Age: " << getAnimalAge() << endl;
        }
        void sound() {
            cout << "Animal's Sound..." << endl;
        }
};

class Dog : public Animal {
    public:
        Dog(string name, int age) {
            setAnimal(name, age);
        }
        void displayDog() {
            cout << "Dog's Name: " << getAnimalName() << endl;
            cout << "Dog's Age: " << getAnimalAge() << endl;
        }
        // Animal's sound() function's OVERRIDING
        void sound() {
            cout << "Barking...\tBarking...\nBarking..." << endl;
        }
};

class Cat : public Animal {
    public:
        Cat(string name, int age) {
            setAnimal(name, age);
        }
        void displayCat() {
            cout << "Cat's Name: " << getAnimalName() << endl;
            cout << "Cat's Age: " << getAnimalAge() << endl;
        }
        // Animal's sound() function's OVERRIDING
        void sound() {
            cout << "Meow...\tMeow...\nMeow..." << endl;
        }

};

int main() {
    cout << endl << endl;
    Animal a1;
    a1.setAnimal("Jogra", 8);
    a1.displayAnimal();
    a1.sound();
    cout << endl << endl;
    Dog dog1("Tommy", 3);
    dog1.displayDog();
    dog1.sound();
    
    cout << endl << endl;
    Cat cat1("Mano", 1);
    cat1.displayCat();
    cat1.sound();
    cout << endl << endl;
    return 0;
}
```
<img src="/images/1-hierarchical_inheritance.png" alt="Example Diagram of Hierarchical Inheritance" width="500"/>

## HYBRID INHERITANCE

A combination of two or more types of inheritance (e.g., a mix of single, multiple, and/or multilevel inheritance) in a single program or hierarchy.

__Example 1__: `Undergraduate` is derived from `Student` class and `ScholarshipStudent` class is derived from `Scholarship` &amp; `Undergraduate` classes in the following code.

```cpp
// Base Class
class Student {
    string name;
    double studentID;
    public:
        void setStudent(string name, double id) {
            this->name = name;
            this->studentID = id;
        }
        string getStudentName() { return name; }
        double getStudentID() { return studentID; }
        void displayStudentInfo() {
            cout << "Student name: " << getStudentName() << endl;
            cout << "Student ID: " << getStudentID() << endl;
        }
};
// Derived Class from Student
class Undergraduate : public Student {
    int year;
    string major;
    public:
        void setUndergraduate(string name, double id, string major, int year) {
            setStudent(name, id);
            this->year = year;
            this->major = major;
        }
        int getUndergraduateYear() { return year; }
        string getUndergraduateMajor() { return major; }
};
// Base Class
class Scholarship {
    double scholarshipAmount;
    public:
        void setScholarship(double amount) {
            this->scholarshipAmount = amount;
        }
        double getScholarshipDetails() { return scholarshipAmount; }
};
// Derived Class from `Undergraduate` &amp; `Scholarship` classes
class ScholarshipStudent : public Undergraduate, public Scholarship {
    public:
        ScholarshipStudent(string name, double id, int year, string major, double amount) {
            setUndergraduate(name, id, major, year);
            setScholarship(amount);
        }

        void displayScholarshipStudent() {
            cout << "Student name: " << getStudentName() << endl;markdown-preview-enhanced
            cout << "Student ID: " << getStudentID() << endl;
            cout << "Undergraduate Year: " << getUndergraduateYear() << endl;
            cout << "Student Major: " << getUndergraduateMajor() << endl;
            cout << "Scholarship Amount: $" << getScholarshipDetails() << endl;
        }
};

int main() {
    cout << endl << endl;
    ScholarshipStudent st1("John", 23421, 2023, "Computer Science", 650);
    st1.displayScholarshipStudent();
    cout << endl << endl;
    return 0;
}
```
<img src="/images/1-Hybrid_inheritance.png" alt="Example Diagram of Hybrid Inheritance" width="500"/>

---
## *Questions for Practice*
### Public Inheritance

_A_. You are tasked with designing a system for a transportation company.
- There is a base class `Vehicle` with common properties like `speed` and `fuel` and methods like `start()` and `stop()`.
- Create derived classes `Car` and `Bike` that inherit from `Vehicle`.
- Add specific properties such as `numberOfSeats` for `Car` and `hasSidecar` for `Bike`.
- Write a program to demonstrate how public inheritance allows the derived classes to share the behavior of the base class.


_B_. You need to design an educational system.
- Create a base class `Person` with attributes `name` and `age` and a method `displayInfo()`.
- Derive `Student` and `Teacher` classes. Add `grade` for `Student` and `subject` for `Teacher`.
- Write a program to create objects of `Student` and `Teacher`, and demonstrate how they inherit and override base class methods.

### Protected Inheritance
_A_. You are building an employee management system for a company.
- The base class `Employee` has attributes `name`, `salary`, and `position`.
- Use protected inheritance to create a derived class `Manager` with an additional method `calculateBonus()` that uses the `salary` of the `employee`.
- Demonstrate how the derived class can access and manipulate the protected attributes while keeping them hidden from outside the class.

_B_. A library system requires a class hierarchy for its assets.
- Create a base class `LibraryItem` with attributes `title` and `year` (protected).
- Use protected inheritance to derive classes `Book` and `Magazine`. Add specific attributes like `author` for `Book` and `issueNumber` for `Magazine`.
- Write a program to demonstrate how the protected members are accessible in the derived classes but hidden from outside.

### Private Inheritance

_A_. You are developing a smart home system.
- Create a base class `Appliance` with methods `turnOn()` and `turnOff()`.
- Derive a class `SmartFan` using private inheritance, adding methods like `setSpeed()` and `getStatus()`.
- Demonstrate how the `SmartFan` internally uses the base class's methods but doesn’t expose them to the outside world.

_B_. Design a game inventory system.
- The base class `Item` contains attributes `name` and `weight`.
- Derive a class `Weapon` using private inheritance, adding an attribute `damage`.
- Demonstrate how the derived class uses the functionality of the base class without exposing it directly to the main program.

### Mixed Inheritance
_A_. Design a banking system with the following hierarchy:
- A base class `Account` with attributes `accountNumber` and `balance` and methods `deposit()` and `withdraw()`.
- Derive `SavingsAccount` using public inheritance, adding `interestRate`.
- Derive `LoanAccount` using protected inheritance, adding `loanAmount`.
- Write a program to demonstrate how different types of inheritance work in this hierarchy.

_B_. You are creating a university hierarchy.
- Create a base class `University` with attributes `name` and `location`.
- Derive `Department` using protected inheritance, adding attributes like `departmentName`.
- Derive `Student` from `Department` using public inheritance, adding attributes like `studentName` and `rollNumber`.
- Write a program to show multi-level inheritance and how access levels affect it.


### Diamond Problem
_A_. Design a music player system with the following structure:
- A base class `Device` with a method `turnOn()`.
- Two intermediate classes `Speaker` and `Player` derived from `Device`.
- Create a derived class `SmartSpeaker` from both `Speaker` and `Player`.
- Demonstrate how to resolve the diamond problem using virtual inheritance.


### Function Overriding
_A_. You are designing a vehicle simulation game.
- Create a base class `Vehicle` with a method `drive()`.
- Derive classes `Car`, `Truck`, and `Motorcycle`.
- Override the `drive()` method in each derived class to display specific messages (e.g., "Driving a car", "Driving a truck").
- Write a program to demonstrate polymorphism using function overriding.


### Virtual Functions
_A_. You are building a graphics editor.
- Create a base class `Shape` with a virtual method `draw()`.
- Derive classes `Circle`, `Rectangle`, and `Triangle`, overriding the `draw()` method.
- Write a program to demonstrate runtime polymorphism by storing derived class objects in base class pointers and calling the `draw()` method.


### Abstraction
_A_. Develop an online payment system.
- Create an abstract base class `Payment` with a pure virtual method `pay()`.
- Derive classes `CreditCardPayment`, `DebitCardPayment`, and `PayPalPayment` to implement the `pay()` method.
- Demonstrate how abstraction is used to handle multiple payment methods uniformly.

### Hybrid Inheritance
_A_. You are building an educational app.
- Create a base class `User` with attributes `username` and `password`.
- Derive two classes `Teacher` and `Student` from `User`.
- Create a derived class `TeachingAssistant` that inherits both `Teacher` and `Student`.
- Demonstrate how to resolve ambiguities in hybrid inheritance using virtual inheritance.

_B_. You are building a hotel management system.
- Create a base class `Room` with attributes `roomNumber` and `price`.
- Derive two classes `SingleRoom` and `Suite` using public inheritance, adding attributes like `bedCount` and `hasLivingRoom`.
- Create a derived class `VIPRoom` from `Suite` that adds an attribute `personalButler`.
- Write a program to show multi-level inheritance and how derived classes enhance the functionality of the base class.
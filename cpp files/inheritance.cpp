#include <iostream>
using namespace std;
// SINGLE LEVEL INHERITANCE
/*
class Animal {
    string name;
    int age;

    public:
        void speak() {
            cout << "Barking..." << endl;
        }
};

class Dog : public Animal {
};

// Main function
int main() {
    Dog dog1;
    dog1.speak();
    return 0;
}
*/
/* 

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
 */
/* 
class Book {
    string title, author;
    public:
        void setBook(string title, string authr) {
            this->title = title;
            this->author = authr;
        }
        string getTitle() {
            return title;
        }
        string getAuthor() {
            return author;
        }
};

class Ebook : public Book {
    int fileSize;
    string format;
    public:
        Ebook(string title, string author, int fsize, string frmt) {
            this->fileSize = fsize;
            this->format = frmt;
            setBook(title, author);
        }
        void displayEbook() {
            cout << "Book Title: " << getTitle() << endl;
            cout << "Book Author: " << getAuthor() << endl;
            cout << "Book File Size: " << fileSize << "KB"<< endl;
            cout << "Book File Format: ." << format << endl;
        }
};

int main() {
    Ebook AHabits("Atomic Habits", "James Clear", 1300, "pdf");
    AHabits.displayEbook();
    return 0;
}
 */

// MULTI-LEVEL INHERITANCE
/*
class Person {
    string name;
    int age;
    public:
        void setPerson(string name, int age) {
            this->name = name;
            this->age = age;
        }
        string getPersonName() {
            return name;
        }
        int getPersonAge() {
            return age;
        }
        void displayPerson() {
            cout << "Name: " << getPersonName() << endl;
            cout << "Age: " << getPersonAge() << endl;
        }
};
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
        void displayEmployee() {
            cout << "Name: " << getPersonName() << endl;
            cout << "Age: " << getPersonAge() << endl;
            cout << "Employee ID: " << getEmployeeID() << endl;
        }
};
class Manager : public Employee {
    string department;
    public:
        Manager(string name, int age, int id, string dept) {
            setEmployee(name, age, id);
            this->department = dept;
        }
        void displayManager() {
            cout << "Name: " << getPersonName() << endl;
            cout << "Age: " << getPersonAge() << endl;
            cout << "Employee ID: " << getEmployeeID() << endl;
            cout << "Department: " << department << endl;
        }
};

int main() {
    cout << "Person" << endl;
    Person p1;
    p1.setPerson("Ghauri", 34);
    p1.displayPerson();

    cout << endl << "Employee" << endl;

    Employee e1;
    e1.setEmployee("Shivani", 28, 1342);
    e1.displayEmployee();

    cout << endl << "Manager" << endl;

    Manager mng1("John", 32, 1456, "Finance");
    mng1.displayManager();
    
    cout << endl << endl;
    
    return 0;
}
*/

// MULTIPLE INHERITANCE
/*
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
    cout << endl << endl;
    CreativeEngineer ce1("Akash", "Software Engineer", "Painting");
    ce1.showProfile();
    cout << endl << endl;
    return 0;
}
*/


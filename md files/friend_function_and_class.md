- [Friend Function](#friend-functions)
- [Friend Class](#friend-class)

## Friend Functions
- A friend function is the function that can access public as well as private & protected members of the class's Object.
- A friend function can't be called without an objecct as objects are passed as parameters to a friend function.
- A friend function is not a member function of a class i.e., it can access members of many different as well as same class's different Objects, so it is not a member function.

A friend function is declared within the class as follow:

_SYNTAX:_

```cpp
friend return_type function_name(parameters);
```

An Object is passed as a parameter to friend function.
Defining a friend function outside the class:

_SYNTAX:_
```cpp
return_type function_name(Class_name Object_name) {
    Object_name.private_member = some_value;
}
```

### Practice Programs

Imagine a class `Rectangle` that represents a rectangle’s dimensions. Write a friend function that calculates the area of the rectangle by accessing the private members of the class.

```cpp
class Rectangle {
private:
    double width = 3, length = 4;
public:
    // You can use a setter to set the private values
    void setRectangle(double w, double l) {
        this->width = w;
        this->length = l;
    }
    // Declaring the friend function
    friend void areaCalculator(Rectangle);
};
// Defining the friend function
void areaCalculator(Rectangle a) {
    cout << "Area of the rectangle = " << (a.width * a.length) << endl;
}

int main() {
    Rectangle rec1;
    rec1.setRectangle(3, 5);
    // calling friend function
    areaCalculator(rec1);
    return 0;
}
```

Create a class `Box` and a friend function `doubleVolume` that calculates the volume using the class’s private data members. Test the function with different instances of `Box`.

```cpp
class Box {
    double height, width, length;
public:
    static int boxCreated;
    Box() {
        boxCreated++;
    }
    void setBox(double h, double w, double l) {
        this->height = h;
        this->width = w;
        this->length = l;
    }
    friend void doubleVolume(Box);
};
int Box::boxCreated = 0;

void doubleVolume(Box a) {
    cout << "Volume = " << (a.height * a.length * a.width) << endl;
}

int main() {
    Box box1, box2;
    box1.setBox(2, 3, 4);
    box2.setBox(2, 6, 4);
    doubleVolume(box1);
    doubleVolume(box2);

    cout << "Total box created: " << Box::boxCreated << endl;
    return 0;
}
```
## Friend Class

Friend class allows one class to access the private and protected members of another class. This is useful when two classes are closely related, and one needs to access the internal state of the other.

### Practice Program

`BankAccount` class represents a bank account, and create a `BankManager` class that can access the private data of BankAccount to help manage customer accounts.

```cpp
class BankAccount {
    string accountHolder;
    double balance;
public:
    BankAccount(string holder, double initial_balance) 
        : accountHolder(holder), balance(initial_balance) {}

    // Declare BankManager as a friend class so it can access private members
    friend class BankManager;
};

class BankManager {
public:
    void showAccountDetails(const BankAccount& account) {
        cout << "Account Holder: " << account.accountHolder << endl;
        cout << "Account Balance: $" << account.balance << endl;
    }

    void deposit(BankAccount& account, double amount) {
        if (amount > 0) {
            account.balance += amount;
            cout << "$" << amount << " deposited. New balance: $" << account.balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(BankAccount& account, double amount) {
        if (amount > 0 && account.balance >= amount) {
            account.balance -= amount;
            cout << "$" << amount << " withdrawn. New balance: $" << account.balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }
};

int main() {
    BankAccount myAccount("John Doe", 1000.00);
    BankManager manager;
    // BankManager can access and modify private data of BankAccount
    manager.showAccountDetails(myAccount);
    manager.deposit(myAccount, 500.00);     // Deposite money
    manager.withdraw(myAccount, 200.00);    // Withdraw money

    manager.showAccountDetails(myAccount);    
    return 0;
}
```
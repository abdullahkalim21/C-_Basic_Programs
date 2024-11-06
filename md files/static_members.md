# STATIC MEMBERS
___[STATIC DATA MEMBERS](#static-data-members)___<br>
___[STATIC MEMBER FUNCTIONS](#static-member-functions)___<br>

## *STATIC DATA MEMBERS*

> ### What is the purpose of static data members in a class?

- A static data member is used to keep track of the number of objects created of a class.
- It just has class scope.
- It is declared within the class and defined outside the class.
- For declaring, the basic difference of other data members and static data members is that static data members have ```static``` keyword in the beginning.<br>

___SYNTAX:___
    
```cpp
    static data_type data_member;
```
You must define the static data members outside the class.<br>
Following is the syntax for defining:<br>

___SYNTAX:___
```cpp
    data_type Class_Name::data_member = some_value;
    
    // Example
    int Student::studentsCreated = 0;
```

> ### How can you access a static data member outside of the class? Demonstrate with an example.<br>

Static data members can be accessed using a scope resolution operator ```::``` after the class name and following the static data member's name.<br>
___SYNTAX:___
```cpp
    Class_Name::Static_Member
```

> ### Can a static data member be initialized within the constructor of a class? Why or why not?

- A static data member can't be initialized within the constructor.
- If we initialize the static member within constructor, the compiler shows the following error.<br>

___ERROR:___
```cpp
    undefined reference to 'student::studentsCreated'
```

### Practice Code
```cpp
class Student {
    private:
        string name;
        int rollNo;
    public:
        // defining the static data member
        static int studentsCreated;
        Student() {
            // studentsCreated = 0;
            // ERROR: undefined reference to 'student::studentsCreated'
            cout << "Constructor called" << endl;
            studentsCreated++;
        }
        void setStudent(string n, int r) {
            this->name = n;
            this->rollNo = r;
        }
        void getStudent() {
            cout << "Student's Name: " << this->name << endl;
            cout << "Student's Roll No.: " << this->rollNo << endl;
        }

        ~Student(){
            cout << "Destructor called." << endl;
        }
};

// Defining the static data member
int Student::studentsCreated = 0;

int main() {
    Student ali, ahmed;
    // ali.setStudent("Ali", 2001);
    // ali.getStudent();
    cout << "Total students created: " << Student::studentsCreated << endl;
    return 0;
}
```

### Scenario for practice
> Imagine a scenario where you are designing a class for a bank account system. You need to keep track of the total number of accounts created. Implement this using a static data member. How would you ensure that this count increases with each new account?<br>

```cpp
class Account {
    private:
        string accountName;
        double accountBalance;
    public:
        static int accountsCreated;
        Account() {
            cout << "A new accout is created" << endl;
            accountsCreated++;
        }
        void setAccount(string name, double balance) {
            this->accountName = name;
            this->accountBalance = balance;
        }
        void getAccount() {
            cout << "Account Name: " << accountName << endl;
            cout << "Account Balance: " << accountBalance << endl;
        }

        ~Account(){
            cout << "Destructor called" << endl;
        }
};
int Account::accountsCreated = 0;

int main() {
    Account account1;
    account1.setAccount("John", 1500);
    account1.getAccount();
    cout << "Total Accounts created: " << Account::accountsCreated << endl;

    Account account2;
    account2.setAccount("Fari", 1011);
    account2.getAccount();
    cout << "Total Accounts created: " << Account::accountsCreated << endl;
    return 0;
}
```
## *STATIC MEMBER FUNCTIONS*<br>

> ### What are the restrictions on static member functions compared to regular member functions?

- Static member functions are same as the other member functions but the key difference is that static member functions can only access static data members & ```this``` pointer is not used in static member functions<br>

Using this pointer:
```cpp
    cout << "Balance: " << this.accountBalance << endl;
```
___ERROR:___
```cpp
'this' may only be used inside a nonstatic member function
```
> ### How can you access a static data member outside of the class?

- Static data members can be accessed using a scope resolution operator ```::``` after the class name and following the static data member's name.<br>
___SYNTAX:___
```cpp
    Class_Name::Static_Member_function
```
> ### Can a static member function access non-static members of the class? Why or why not?

This is what the compiler shows when any other data member is accessed by a static function
```cpp
    double Account::accountBalance
```
___ERROR:___
```cpp
    a nonstatic member reference must be relative to a specific object
```
### Practice Code
```cpp
class Account {
    private:
        string accountName;
        double accountBalance;
    public:
        static int accountsCreated;

        static void staticFunction() {
            cout << "Staitc member function was called" << endl;
            cout << "(Static Method) Total Accounts created: " << Account::accountsCreated << endl;
            // cout << "Balance: " << accountBalance << endl;
            // ERROR: a nonstatic member reference must be relative to a specific object
            // cout << "Balance: " << this.accountBalance << endl;
            // ERROR: 'this' may only be used inside a nonstatic member function
        }
        Account() {
            cout << "A new accout is created" << endl;
            accountsCreated++;
        }
        void setAccount(string name, double balance) {
            this->accountName = name;
            this->accountBalance = balance;
        }
        void getAccount() {
            cout << "Account Name: " << accountName << endl;
            cout << "Account Balance: " << accountBalance << endl;
        }
        ~Account(){
            cout << "Destructor called" << endl;
        }
};
int Account::accountsCreated = 0;

int main() {
    Account account1, account2;
    account1.setAccount("John", 1500);
    account1.getAccount();
    // Accessing static member function
    Account::staticFunction();
    cout << "Total Accounts created: " << Account::accountsCreated << endl;
    return 0;
}
```
### Scenario for Practice
> Design a class ```Utility``` with a static function ```convertToUpper``` that takes a string and converts it to uppercase. This function should be usable without creating an instance of the ```Utility``` class.

```cpp
class Utility {
    public:
        // Static function declaration
        static void convertToUpper(string s) {
            for (int i = 0; i < s.length(); i++) {
                s[i] = toupper(s[i]);
            }
            cout << s;
        }
};

int main() {
    Utility::convertToUpper("Super");
    return 0;
}
```

> Create a class ```Calculator``` with static methods for basic arithmetic operations (```addition```, ```subtraction```, ```multiplication```, ```division```). Test these methods by calling them without creating an object of the class.

```cpp
class Calculator {
    public:
        static int objCreated;
        static void Sum(int a, int b) {
            cout << "Sum = " << a + b << endl;
        }
        static void Subtract(int a, int b) {
            cout << "Subtraction = " << a - b << endl;
        }
        static void Multiplication(int a, int b) {
            cout << "Multiplication = " << a * b << endl;
        }
        static void Division(int a, int b) {
            if (b < 1 || b > a)
                cout << "ERROR: Can't divide.";
            else
                cout << "Division = " << a / b << endl;
        }
};
int Calculator::objCreated = 0;
int main() {

    Calculator::Sum(6, 4);
    Calculator::Subtract(6, 4);
    Calculator::Multiplication(6, 4);
    Calculator::Division(6, 4);

    cout << "Total Objects created: " << Calculator::objCreated << endl;   
    return 0;
}
```
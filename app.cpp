#include <iostream>
using namespace std;
/*
    Every Program is commented so it's upto to you that which program you want to use. So Remove the multi-line comments' signs from the program that you want to use
    OR
    You can copy the program code and run it in your own file (I'll recommend you to copy the code to not get into more complications)
*/
// 4 Arithmetic Operations of 2 Numbers
/*
int main() {
    int x, y, sum, sub, pro;
    float div;
    cout << "Input first number: ";
    cin >> x;
    cout << "Input second number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum (+) is: " << sum << endl;
    sub = x - y;
    cout << "Subtraction (-) is: " << sub << endl;
    pro = x * y;
    cout << "Product (*) is: " << pro << endl;
    div = x / y;
    cout << "Division (/) is: " << div << endl;
} */

// Product of Numbers
/*
int main() {
    int x, y;
    int product;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    product = x * y;
    cout << "Product of two numbers is: " << product;
} */

// Subtraction of Numbers
/*
int main() {
    int a, b;
    int sub;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    sub = a - b;
    cout << "Subtraction of two numbers is: " << sub;
} */

// If-Else Function
/*
int main() {
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 50) {
        cout << "Pass" << endl;
    }
      else {
        cout << "Fail" << endl;
      }
    return 0;
} */

// Greater between two Integers
/*
int main() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    if (a > b) {
        cout << "Greater number is: " << a << endl;
        }
        else {
            cout << "Greater number is: " << b << endl;
        }
    return 0;
}*/

//Swaping two numbers with 3 variable containers
/*
int main() {
    int x, y, z;
    cout << "First input X: ";
    cin >> x;
    cout << "Second input Y: ";
    cin >> y;
    z = x;  // Value of x is assigned to z
    x = y;  // Value of y is assigned to x 
    y = z;  // Value of z is assigned to y that was actual value of x & now the value of z is empty/nothing
    cout << "Swapped numbers are: \n X= " << x << " \n Y= " << y;
} */

// Swaping two numbers with SWAP function
/*
int main() {
    int x, y;
    cout << "Enter the value for x: ";
    cin >> x;
    cout << "Enter the value for y: ";
    cin >> y;
    cout << "Before swapping: x = " << x << " y = " << y << endl;
    swap(x, y);  // It's a pre-built function for swaping values
    cout << "After swapping: x = " << x << " y = " << y << endl;
} */

// Area of a circle
/*
int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = 3.14 * radius * radius;
    cout << "Area of the circle is: " << area << endl;
} */

// Students Result Card
/*
int main () {
    int rollNum;
    float math, phy, chem, eng, comp, obtainedMarks, percentage;  //float is used because value can be in points (like 60.3)
    string name, fatherName;
    // Input from user
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your father's name: ";
    cin >> fatherName;
    cout << "Enter your Roll No.: ";
    cin >> rollNum;
    cout << "Enter marks in Maths: ";
    cin >> math;
    cout << "Enter marks in Physics: ";
    cin >> phy;
    cout << "Enter marks in Chemistry: ";
    cin >> chem;
    cout << "Enter marks in English: ";
    cin >> eng;
    cout << "Enter marks in Computer Science: ";
    cin >> comp;
    // Output to user
    cout << "Name: " << name << endl;
    cout << "Father Name: " << fatherName << endl;
    cout << "Roll No.: " << rollNum << endl;
    cout << "Maths Marks: " << math << endl;
    cout << "Physics Marks: " << phy << endl;
    cout << "Chemistry Marks: " << chem << endl;
    cout << "English Marks: " << eng << endl;
    cout << "Computer Science Marks: " << comp << endl;
    obtainedMarks = math + phy + chem + eng + comp;  // Calculating Total Marks
    cout << "Obtained Marks: " << obtainedMarks << endl;
    percentage = (obtainedMarks / 500) * 100;  // Calculating Percentage
    cout << "Percentage: " << percentage << "%";
} */

// Table of an Integer using for loop
/*
int main () {
    int number, multiplier;
    cout << "Please enter a number: " << endl;
    cin >> number;
    for (multiplier = 1; multiplier <= 10; multiplier++) {  // multiplier starts from 1 and goes upto 10
        cout << number << " * " << multiplier << " = " << (number * multiplier) << endl;
    }
} */

// Table of an Integer with manually writing till 10
/*
int main () {
    int number;
    cout << "Please enter a number: " << endl;
    cin >> number;
    cout << number << " * 1 = " << (number * 1) << endl;
    cout << number << " * 2 = " << (number * 2) << endl;
    cout << number << " * 3 = " << (number * 3) << endl;
    cout << number << " * 4 = " << (number * 4) << endl;
    cout << number << " * 5 = " << (number * 5) << endl;
    cout << number << " * 6 = " << (number * 6) << endl;
    cout << number << " * 7 = " << (number * 7) << endl;
    cout << number << " * 8 = " << (number * 8) << endl;
    cout << number << " * 9 = " << (number * 9) << endl;
    cout << number << " * 10 = " << (number * 10) << endl;
} */

// Reverse of 3 digits
/*
int main() {
    int n, a, b;
    cout << "Enter a three digit number: ";
    cin >> n;
    a = n / 100;
    n = n % 100;
    b = n / 10;
    n = n % 10;
    cout << "Reverse is " << n << b << a << endl;
    return 0;
} */

// Reverse of 4 digits simple
/*
int main() {
    int n, a, b, c;
    cout << "Enter a four digit number: ";
    cin >> n;
    a = n / 1000;
    n = n % 1000;
    b = n / 100;
    n = n % 100;
    c = n / 10;
    n = n % 10;
    cout << "Reverse is " << n << c << b << a << endl;
    return 0;
}*/

// Sepration, Reverse, & Increment of 4 digits
/*
int main() {
    int num, a, b, c, d;
    cout << "Enter a four digit number: ";
    cin >> num;
    a = num / 1000;
    num = num % 1000;
    b = num / 100;
    num = num % 100;
    c = num / 10;
    num = num % 10;
    d = num;
    // cout << a << "\t" << b << "\t" << c << "\t" << d ;  // Seprates each digit
    // cout << d << "\t" << c << "\t" << b << "\t" << a ;  // Displays each digit in reverse
    // cout << ++a << "\t" << ++b << "\t" << ++c << "\t" << ++d ;  //Increments each digit by 1
    return 0;
}*/

// Salary Increment of Employees
/*
int main() {
    int grade;
    double salary, bonus;
    cout << "Enter the employee's grade (12-18): ";
    cin >> grade;
    cout << "Enter the employee's salary: ";
    cin >> salary;
    if(grade >= 15 && grade <= 18) {
        bonus = salary * 50 / 100;   // Calculates bonus with 50% increment
        salary = salary + bonus;    // New salary is 50% Increased
        cout << "Your Salary is " << salary;
        }
        else if(grade >= 12 && grade < 15) {
            bonus = salary * 25 / 100;  // Calculates bonus with 25% increment
            salary = salary + bonus;    // New salary is 25% Increased
            cout << "Your Salary is " << salary;
        }
    return 0;
} */

// Displaying Equal Numbers
/*
int main () {
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a == b && a == c) {
        cout << "All the numbers are equal.";
        }
        else if (a == b) {
            cout << "1st & 2nd numbers are equal";
        }
        else if (a == c) {
            cout << "1st & 3rd numbers are equal";
        }
        else {
            cout << "The numbers are not equal";
        }
    return 0;
}*/

// Dial Menu for Students to calculate Percentage & Grade
/*
int main() {
    int obtainedMarks, totalMarks, percentage, response;
    string grade;
    cout << "Enter the obtained marks: ";
    cin >> obtainedMarks;
    cout << "Enter the total marks: ";
    cin >> totalMarks;
    percentage = (obtainedMarks * 100) / totalMarks;  //Here Percentage is calculated with given Obtained & Total Marks
    
    // If--else function to get Grades
    if (percentage >= 90) {
            grade = "A+";
        }
        else if (percentage >= 85) {
            grade = "A";
        }
        else if (percentage >= 80) {
            grade = "B";
        }
        else if (percentage >= 70) {
            grade = "C";
        }
        else if (percentage >= 60) {
            grade = "D";
        }
        else if (percentage >= 50) {
            grade = "E";
        }
        else {
            grade = "F";
        }
    cout << "Enter 1 to calculate percentage \nEnter 2 to display grade" << endl;  // This is the dial menu for the user to respond
    cin >> response;

    // If--else function on the basis of Dial Menu response by user
    if (response == 1) {
        cout << "Your percentage is " << percentage << endl;  // It just Prints Percentage
        }
        else if (response == 2) {
            cout << "Your grade is: " << grade << endl;  // It just displays Grades
        }
    return 0;
} */

// Celsius to Fahrenheit
/*
int main() {
    float cel, fah;
    cout << "Enter temperature in Celsius: ";
    cin >> cel;
    fah = (1.8 * cel) + 32;
    cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit." << endl;
    return 0;
} */

// Distance Calculator Kilometre to Miles
/*
int main () {
    float km, miles;  
    cout << "Enter distance in Kilometres: ";
    cin >> km;
    miles = km * 0.62;
    cout << "Distance in Miles: " << miles << endl;
}*/

// Distance Calculator Miles to Kilometres
/*
int main () {
    float km, miles;
    cout << "Enter distance in Miles: ";
    cin >> miles;
    km = miles* 1.61;
    cout << "Distance in Kilometres: " << km << endl;
} */

// Age in months
/*
int main () {
    int ageInYears, ageInMonths;
    cout << "Enter your age in years: ";
    cin >> ageInYears;
    ageInMonths = ageInYears * 12;
    cout << "You're " << ageInMonths << " months old" << endl;
}*/

// Age in Days
/*
int main () {
    int ageInYears, ageInDays;
    cout << "Enter your age in years: ";
    cin >> ageInYears;
    ageInDays = ageInYears * 365;
    cout << "You're " << ageInDays << " days old" << endl;
} */

// Light years to Astronomical units
// Astronomical Units is distance from earth to sun (about 150M km/93M miles)
/*
int main () {
    double lightYears, astroUnits;
    cout << "Enter the numbers of light years: ";
    cin >> lightYears;
    astroUnits = lightYears * 63240;
    cout << lightYears << " light years = " << astroUnits << " astronomical units." ;
} */

// Calculate Hours, Minutes & Seconds into Seconds
/*
int main()
{
  int hours, minutes, seconds;
  cout << "\n\nEnter hours: ";
  cin >> hours;
  cout << "Enter minutes: ";
  cin >> minutes;
  cout << "Enter seconds: ";
  cin >> seconds;
  int total_seconds = (hours * 3600) + (minutes * 60) + seconds;
  cout << "Total seconds: " << total_seconds << endl;
  return 0;
} */

// Displaying greater and smaller or equal number among 3 integers input by user
/*
int main() {
    int a, b, c, max, min;
    cout << "Enter three integer values: \n";
    cin >> a >> b >> c;
    if(a >= b && a >= c){
        max = a;            // If a is greater than b & c then max value is a
        } else if(b >= a && b >= c){
            max = b;        // If b is greater than a & c then max value is b
            }else{
                max = c;    // otherwise max value is c
                }
    if(a <= b && a <= c){
        min = a;            // If a is smaller than b & c then min value is a
        } else if(b <= a && b <= c){
            min = b;        // If b is smaller than a & c then min value is b
            }else{
                min = c;    // otherwise min value is c
                }
    cout << "Maximum value is : " << max << endl;   // Maximum Value is displayed
    cout << "Minimum value is : " << min << endl;   // Minimum Value is displayed
    return 0;
} */

// Find Quotient & Remainder
/*
int main() {
    int num1, num2;
    float quotient, remainder;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num2 != 0) {            // if num2 is not equal to 0 then it calculates & displays quotient & remainder
            quotient = num1 / num2;
            cout << "Quotient: " << quotient << endl;
            remainder = num1 % num2;
            cout << "Remainder: " << remainder << endl;
        }
        else {      // if num2 is equal to 0 then it displays this message
            cout << "Your second number must not be 0." << endl;
        }
    return 0;
} */

// Find size of int, float, double & char in your system
/*
int main() {
    // These sizeof() functions are built-in functions
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    return 0;
} */

// Sum & Average of different Data types
/*
int main() {
    int a, b, c;
    float d, average;
    double e, sum;
    cout << "Enter 3 integers: " ;
    cin >> a >> b >> c;
    cout << "Enter 1 Floating number: ";
    cin >> d;
    cout << "Enter 1 double: ";
    cin >> e;
    sum = a + b + c + d + e;
    cout << "Sum = " << sum << endl;
    average = (a + b + c + d + e) / 5;
    cout << "Average = " << average << endl;
    return 0;
} */
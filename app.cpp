#include <iostream>
using namespace std;
/*
    Every Program is commented so it's upto to you that which program you want to use. So Remove the multi-line comments' signs from the program that you want to use
    OR
    You can copy the program code and run it in your own file (I'll recommend you to copy the code to not get into more complications)
*/
// 4 Arithmetic Operations of 2 Numbers

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
}

// Product of Numbers

int main() {
    int x, y;
    int product;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    product = x * y;
    cout << "Product of two numbers is: " << product;
}

// Subtraction of Numbers

int main() {
    int a, b;
    int sub;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    sub = a - b;
    cout << "Subtraction of two numbers is: " << sub;
}

// If-Else Function

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
}

// Greater between two Integers

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
}

//Swaping two numbers with 3 variable containers

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
}

// Swaping two numbers with SWAP function

int main() {
    int x, y;
    cout << "Enter the value for x: ";
    cin >> x;
    cout << "Enter the value for y: ";
    cin >> y;
    cout << "Before swapping: x = " << x << " y = " << y << endl;
    swap(x, y);  // It's a pre-built function for swaping values
    cout << "After swapping: x = " << x << " y = " << y << endl;
}

// Area of a circle

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = 3.14 * radius * radius;
    cout << "Area of the circle is: " << area << endl;
}

// Students Result Card

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
}

// Table of an Integer using for loop

int main () {
    int number, multiplier;
    cout << "Please enter a number: " << endl;
    cin >> number;
    for (multiplier = 1; multiplier <= 10; multiplier++) {  // multiplier starts from 1 and goes upto 10
        cout << number << " * " << multiplier << " = " << (number * multiplier) << endl;
    }
}

// Table of an Integer with manually writing till 10

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
}

// Reverse of 3 digits

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
}

// Reverse of 4 digits simple

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
}

// Sepration, Reverse, & Increment of 4 digits

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
}

// Salary Increment of Employees

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
}

// Displaying Equal Numbers

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
}

// Dial Menu for Students to calculate Percentage & Grade

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

    // Using Switch statement on the basis of Dial Menu response by user
    switch (response) {
        case 1:
            cout << "Your percentage is " << percentage << "%" << endl;
            break;
            case 2:
            cout << "Your grade is: " << grade << endl;
            break;
        
        default:
            cout << "Invalid Input!" << endl;
            break;
        }

    // If--else function on the basis of Dial Menu response by user
    if (response == 1) {
        cout << "Your percentage is " << percentage << endl;  // It just Prints Percentage
        }
        else if (response == 2) {
            cout << "Your grade is: " << grade << endl;  // It just displays Grades
        }
    return 0;
}

// Celsius to Fahrenheit

int main() {
    float cel, fah;
    cout << "Enter temperature in Celsius: ";
    cin >> cel;
    fah = (1.8 * cel) + 32;
    cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit." << endl;
    return 0;
}

// Distance Calculator Kilometre to Miles

int main () {
    float km, miles;  
    cout << "Enter distance in Kilometres: ";
    cin >> km;
    miles = km * 0.62;
    cout << "Distance in Miles: " << miles << endl;
}

// Distance Calculator Miles to Kilometres

int main () {
    float km, miles;
    cout << "Enter distance in Miles: ";
    cin >> miles;
    km = miles* 1.61;
    cout << "Distance in Kilometres: " << km << endl;
}

// Age in months

int main () {
    int ageInYears, ageInMonths;
    cout << "Enter your age in years: ";
    cin >> ageInYears;
    ageInMonths = ageInYears * 12;
    cout << "You're " << ageInMonths << " months old" << endl;
}

// Age in Days

int main () {
    int ageInYears, ageInDays;
    cout << "Enter your age in years: ";
    cin >> ageInYears;
    ageInDays = ageInYears * 365;
    cout << "You're " << ageInDays << " days old" << endl;
}

// Light years to Astronomical units
// Astronomical Units is distance from earth to sun (about 150M km/93M miles)

int main () {
    double lightYears, astroUnits;
    cout << "Enter the numbers of light years: ";
    cin >> lightYears;
    astroUnits = lightYears * 63240;
    cout << lightYears << " light years = " << astroUnits << " astronomical units." ;
}

// Calculate Hours, Minutes & Seconds into Seconds

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
}

// Displaying greater and smaller or equal number among 3 integers input by user

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
}

// Find Quotient & Remainder

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
}

// Find size of int, float, double & char in your system

int main() {
    // These sizeof() functions are built-in functions
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    return 0;
}

// Sum & Average of different Data types

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
}

// Display Square of Natural numbers

int main() {
    int i = 1, n = 1;
    while (i < 10) {
        n = i * i;
        cout << n << endl;
        i++;
    }
    return 0;
}

// Display maximum number from five different numbers input from user

int main() {
    int a, b, c, d, e, max;
    cout << "Enter five different integer values: ";
    cin >> a >> b >> c >> d >> e;
    if(a > b && a > c && a > d && a > e){
        max = a;    // If a has higher value then max is assigned value of a
        } else if(b > a && b > c && b > d && b > e){
            max = b;    // If b has higher value then max is assigned value of b
            }else if (c > a && c > b && c > d && c > e){
                max = c;    // If c has higher value then max is assigned value of c
                }
                else if (d > a && d > b && d > c && d > e) {
                    max = d;    // If d has higher value then max is assigned value of d
                }
                else{
                    max = e;    // Else the max is assigned value of e
                }
    cout << "Maximum value is: " << max << endl;    // Maximum value is displayed
    return 0;
}

// get one ASCII value from user and display next five symbols of ASCII values without using loop

int main() {
  int asciiValue;
    cout << "Enter an ASCII value: ";
    cin >> asciiValue;      // Gets number input
    char currentChar = asciiValue;      // Current ASCII character with user's given value is evaluated
    char char1 = asciiValue + 1;        // given value has addition of 1 & assigned the relevent ASCII character
    char char2 = asciiValue + 2;        // given value has addition of 2 & assigned the relevent ASCII character
    char char3 = asciiValue + 3;        // given value has addition of 3 & assigned the relevent ASCII character
    char char4 = asciiValue + 4;        // given value has addition of 4 & assigned the relevent ASCII character
    char char5 = asciiValue + 5;        // given value has addition of 5 & assigned the relevent ASCII character
    cout << "The current character: " << currentChar << endl;       // Current value's ASCII character is displayed
    cout << "Next 5 values are: " << char1 << "\t" << char2 << "\t" << char3 << "\t" << char4 << "\t" << char5 << endl;
    // Next 5 characters from current character are displayed
    return 0;
}

// Write a program that reverses a number using a while loop


int main() {
    // Declare variables
    int number, reversedNumber = 0, remainder;
    // Input: Get a number from the user
    cout << "Enter a number: ";
    cin >> number;
    // Reverse the number using a while loop
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;

        // Don't put this line here (it shows different result)
        // cout << "Reversed number: " << reversedNumber << endl;
    }
    // Output: Display the reversed number
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}

// Write a multiplication table that take input from user using while loop

int main() {
    // Declare variables
    int number, i = 1;

    // Input: Get a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Output: Display the multiplication table using a while loop
    cout << "Multiplication Table for " << number << ":\n";
    while (i <= 10) {
        cout << number << " x " << i << " = " << (number * i) << endl;
        i++;
    }

    return 0;
}

// Write a program that shows even or odd number using while loop

int main() {
    // Declare variables
    int number;

    // Input: Get a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Determine if the number is even or odd using a while loop
    while (number != 0) {
        if (number % 2 == 0) {
            cout << number << " is an even number." << endl;
        } else {
            cout << number << " is an odd number." << endl;
        }

        // Input: Get the next number or 0 to exit the program
        cout << "Enter another number (or 0 to exit): ";
        cin >> number;
    }

    return 0;
}

// Uses a while loop to calculate the sum of numbers from 1 to a user-defined limit

int main() {
    // Declare variables
    int limit, currentNumber = 1, sum = 0;

    // Input: Get a limit from the user
    cout << "Enter a limit: ";
    cin >> limit;

    // Calculate the sum of numbers from 1 to the user-defined limit using a while loop
    while (currentNumber <= limit) {
        sum = sum + currentNumber;
        currentNumber++;

        // Don't put this line here (it shows different result)
        // cout << "The sum of numbers from 1 to " << limit << " is: " << sum << endl;
    }

    // Output: Display the sum
    cout << "The sum of numbers from 1 to " << limit << " is: " << sum << endl;

    return 0;
} 

// Factorial of a number

int main() {
    // Declare variables
    int number, factorial = 1, i = 1;

    // Input: Get a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the factorial of the number using a while loop
    while (i <= number) {
        factorial = factorial * i;
        i++;
    }

    // Output: Display the factorial
    cout << "The factorial of " << number << " is: " << factorial << endl;

    return 0;
}

// Find the fourth power of numb using While Loop

int main() {
    int limit;
    // Declare variables
    int i = 1;
    cout << "Enter a limit: ";
    cin >> limit;
    // Calculate the fourth power using a while loop
    while (i <= limit) {
        int result = i*i*i*i;
        cout << result << endl;
        i++;
    }

    return 0;
}

// The user enters numbers, and the loop continues until 0 is entered, at which point the loop and the program terminate.

int main() {
    int number;

    cout << "Enter numbers (enter 0 to terminate):\n";
    cin >> number;

    while (number != 0) {
        // Process the entered number (you can perform additional actions here)
        // For this example, the program simply echoes the entered number
        cout << "You entered: " << number << endl;

        // Get the next number
        cin >> number;
    }

    // Output: Display a message indicating the end of the program
    cout << "Program terminated. 0 was entered.\n";

    return 0;
}

// Display first 10 natural numbers

int main() {
    int i = 1;
    while (i <= 10)
    {
        cout << "The natural numbers are: " << i << endl;
        i++;
    }
    return 0;
}

// Display first 10 natural numbers and their sum
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// Sumof first 10 natural numbers = 55

int main() {
    int i = 1, sum = 0;
    while (i <= 10)
    {
        cout << "The natural numbers are: " << i << endl;
        sum = sum + i;
        i++;
    }
        cout << "The sum of first 10 natural numbers: " << sum << endl;
    return 0;
}

// Get a number from user and display whether it's prime number or not (you can use loop)

int main() {
    int num, i, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            count++;
            }
        }
            if (count > 0)
            cout << "\n" << num << " is not a prime number.";
            else
            cout << "\n" << num << " is a prime number.";
    return 0;
}

// Get a number from user and display it's factorial using while loop

int main() {
    int number, factorial = 1, i = 1;
    cout << "Enter a number: ";
    cin >> number;
    while (i <= number) {
        factorial = factorial * i;
        i++;
    }
    cout << "The factorial of " << number << " is: " << factorial << endl;
    return 0;
}

// Get three/four digits number from user and display it's sum like 123, sum = 6

int main() {
    int dig, dig1, dig2, sum;
    cout << "Enter 3 digit number: ";
    cin >> dig;
    dig1 = dig / 100;
    dig = dig % 100;
    dig2 = dig / 10;
    dig = dig % 10;
    sum = dig + dig1 + dig2;
    cout << "Sum of digits = " << sum;
    return 0;
}

// Get two numbers & display sum using while loop and ask the user if he/she wants to again sum two numbers

int main() {
    int choice, num1, num2, sum;
    cout << "Enter 1 to calculate another sum (0 to terminate)";
    cin >> choice;
    while (choice == 1) {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        sum = num1 + num2;
        cout << "Sum = " << sum << endl;

        cout << "Enter 1 to calculate another sum (0 to terminate)";
        cin >> choice;
    }
    return 0;
}

// Display Fibonacci numbers till 500

int main() {
    int first = 0, second = 1, next;
    cout << "Fibonacci Series till 500:\n";
    cout << first << "\n" << second << "\n";
    next = first + second;
    while (next <= 500) {
        cout << next << "\n";
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
}

// Dairy Farm Calculation (Milk production and profit)

int main() {
    double totalMilkProd, cartonsReq, totalExpense,profit;
    cout << "Enter the amount of milk produced today morning(in Liters): ";
    cin >> totalMilkProd;
    cartonsReq = totalMilkProd / 3.78;
    totalExpense = totalMilkProd * 0.78;
    profit = cartonsReq * 0.7;
    cout << "Cartons Required: " << cartonsReq << endl;
    cout << "Total Expense: $" << totalExpense << endl;
    cout << "Total Profit: $" << profit << endl;
    return 0;
    }

// Retail Discount on Customer Type

int main()
{
    int cusType;
    double purchaseAmount, payableAmount, discount;
    cout << "Total purchase amount: ";
    cin >> purchaseAmount;
    cout << "Type of Customer:\n1 for Regular Customers\n2 for Premium Customers\n3 for VIP Customers ";
    cin >> cusType;
    switch (cusType)
    {
    case 1:
        discount = (purchaseAmount * 10) / 100;
        break;
    case 2:
        discount = (purchaseAmount * 15) / 100;
        break;
    case 3:
        discount = (purchaseAmount * 20) / 100;
        break;
    default:
        discount = 0;
    }
    payableAmount = purchaseAmount - discount;
    cout << "Total Purchase: $" << purchaseAmount << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Total Payable: $" << payableAmount << endl;
    return 0;
}

// Diaplay n terms of even numbers and their sum using do-while loop

int main() {
    int n, sum;
    cout << "Enter the number of elements: ";
    cin >> n;
    do {
        if ((n % 2) == 0) {
        }
    }
}

// Sum of digits of a number

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    do {
        sum += num % 10;
        num /= 10;
    } while (num > 0);
    cout << "Sum = " << sum << endl;
    return 0;
}

// Whether the character is Vowel or Consonant

int main() {
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
         cout << ch << " is Vowel.";
        } else {
            cout << ch << " is Consonant.";
        }
    return 0;
}

// Find number of vowels, digits, consonants and white spaces in a string

int main() {
    int vowels = 0, digits = 0, consonants = 0, white_spaces = 0;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);


    for (int i = 0; i < str.length(); i++) {
        char c = str[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        } else if (str[i]>= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        } else if (str[i] == ' ') {
            white_spaces++;
        }
    }

    cout << "Number of vowels : " << vowels << endl;
    cout << "Number of digits : " << digits << endl;
    cout << "Number of constants : " << constants << endl;
    cout << "Number of white spaces : " << white_spaces << endl;

    return 0;
}

// Display Fibonacci numbers till 500

int main() {
    int first = 0, second = 1, next;
    cout << "Fibonacci Series till 500:\n";
    cout << first << "\n" << second << "\n";
    next = first + second;
    while (next <= 500) {
        cout << next << "\n";
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
}
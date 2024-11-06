# Table of Contents

[Basic C++ Header Files](#basic-c-header-files)

1. [Calculation of the area of a circle](#1-calculation-of-the-area-of-a-circle)
2. [Weekly Salary calculator with user-defined Functions](#2-weekly-salary-calculator-with-user-defined-functions)
3. [Program to calculate Highest, Lowest, Average temperature & count number of days above user-defined Temperature Threshold](#3-program-to-calculate-highest-lowest-average-temperature--count-number-of-days-above-user-defined-temperature-threshold)
4. [Program to calculate Square, Cube & their Sum](#4-program-to-calculate-square-cube--their-sum)

---

## Basic C++ Header Files

You can use these basic header files in your C++ projects depending on the functionality you need

```cpp
#include <iostream>     // The `<iostream>` header file is used to handle input and output operations in C++
#include <iomanip>    // The <iomanip> header file is used to manipulate the input/output format
#include <cmath>    // The <cmath> header file contains mathematical functions
#include <string>   // The <string> header file is used to work with strings in C++
#include <vector>   // The <vector> header file is used to work with dynamic arrays
#include <algorithm>    // The <algorithm> header file is used for common algorithms like sorting, searching, etc.
#include <cctype>   // The <cctype> header file is used for character handling functions
#include <ctime>    // The <ctime> header file is used to manipulate date and time
#include <map>  // The <map> header file is used to work with associative arrays (maps)
#include <set>  // The <set> header file is used to work with sets, which store unique elements

using namespace std;
/*
It provides a convenient shorthand for accessing standard library components. You are essentially telling the compiler to assume that names within the std namespace are being referenced. This means that you no longer need to qualify these names with the std:: prefix
*/
```

---

## 1. Calculation of the area of a circle

```cpp
// Square of a Number
int square(int a)
{
    return a * a;
}
// Get radius of a circle
int getRadius()
{
    int radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    return radius;
}
// main function for above 2 user-defined fuctions
int main()
{
    int radius;
    float areaOfCircle;
    radius = getRadius();
    areaOfCircle = 3.14 * square(radius);
    cout << "The total area of circle = " << areaOfCircle << endl;
    return 0;
}
```

## 2. Weekly Salary calculator with user-defined Functions

```cpp
// Weekly Salary calculator with user-defined Functions
const double HOURLY_RATE = 10.0;
const double OVERTIME_RATE = 15.0;

double getBasePay(double hoursWorked)
{
    return hoursWorked * HOURLY_RATE;
}

double getOvertimePay(double hoursWorked)
{
    double overtimeHours = hoursWorked - 40;
    if (overtimeHours > 0)
    {
        return overtimeHours * OVERTIME_RATE;
    }
    else
    {
        return 0;
    }
}
// main function for above 2 user-defined functions
int main()
{
    double hoursWorked, basePay, overtimePay, grossPay;

    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;

    basePay = getBasePay(hoursWorked);

    overtimePay = getOvertimePay(hoursWorked);

    grossPay = basePay + overtimePay;

    cout << "Base Pay: $" << basePay << endl;
    cout << "Overtime Pay: $" << overtimePay << endl;
    cout << "Gross Pay: $" << grossPay << endl;

    return 0;
}
```

## 3. Program to calculate Highest, Lowest, Average temperature & count number of days above user-defined Temperature Threshold

```cpp
// Program to calculate Highest, Lowest, Average temperature & count days above user defined Threshold
// Function to input temperature data
void inputData(int temperatures[], int &numDays)
{
    cout << "Enter the number of days of data (up to 31): ";
    cin >> numDays;
    while (numDays < 1 || numDays > 31)
    {
        cout << "Invalid number of days. Please enter a number between 1 and 31: ";
        cin >> numDays;
    }

    cout << "Enter temperature for each day:" << endl;
    for (int i = 0; i < numDays; i++)
    {
        cout << "Enter temperature for day " << (i + 1) << ": ";
        cin >> temperatures[i];
    }
}
// Function to calculate the highest temperature
int calculateHighest(int temperatures[], int numDays)
{
    int highest = temperatures[0];
    for (int i = 1; i < numDays; i++)
    {
        if (temperatures[i] > highest)
        {
            highest = temperatures[i];
        }
    }
    return highest;
}
// Function to calculate the lowest temperature
int calculateLowest(int temperatures[], int numDays)
{
    int lowest = temperatures[0];
    for (int i = 1; i < numDays; i++)
    {
        if (temperatures[i] < lowest)
        {
            lowest = temperatures[i];
        }
    }
    return lowest;
}
// Function to calculate the average temperature
double calculateAverage(int temperatures[], int numDays)
{
    int sum = 0;
    for (int i = 0; i < numDays; i++)
    {
        sum += temperatures[i];
    }
    return sum / numDays;
}
// Function to count days above threshold
int countAboveThreshold(int temperatures[], int numDays, int threshold)
{
    int count = 0;
    for (int i = 0; i < numDays; i++)
    {
        if (temperatures[i] > threshold)
        {
            count++;
        }
    }
    return count;
}
// main function for the above 5 user-defined functions
int main()
{
    int temperatures[31];
    int numDays;

    inputData(temperatures, numDays);

    int highest = calculateHighest(temperatures, numDays);
    cout << "Highest Temperature: " << highest << endl;

    int lowest = calculateLowest(temperatures, numDays);
    cout << "Lowest Temperature: " << lowest << endl;

    double average = calculateAverage(temperatures, numDays);
    cout << "Average Temperature: " << average << endl;

    int threshold;
    cout << "Enter the threshold for temperature: ";
    cin >> threshold;
    int aboveThreshold = countAboveThreshold(temperatures, numDays, threshold);
    cout << "Number of days above threshold: " << aboveThreshold << endl;

    return 0;
}
```

## 4. Program to calculate Square, Cube & their Sum

```cpp
int fun1(int a, int b)
{
    return (a * a) + (b * b * b);
}
int main()
{
    int userInput1, userInput2;
    cout << "Enter two number: ";
    cin >> userInput1 >> userInput2;
    cout << "Square of " << userInput1 << " = " << (userInput1 * userInput1) << endl;
    cout << "Cube of " << userInput2 << " = " << (userInput2 * userInput2 * userInput2) << endl;
    cout << "Sum of " << (userInput1 * userInput1) << " & " << (userInput2 * userInput2 * userInput2) << " = " << fun1(userInput1, userInput2) << endl;
}
```
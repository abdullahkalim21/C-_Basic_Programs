/*
------------Table of Contents------------
1. Calculation of the area of a circle
2. Weekly Salary calculator with user-defined Functions
3. Program to calculate Highest, Lowest, Average temperature & count number of days above user-defined Temperature Threshold
4. Program to calculate Square, Cube & their Sum

*/

#include <iostream>
using namespace std;
// 1st Program till line 36
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
// 2nd Program till line 78
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
// 3rd Program till line 172
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
// 4rd Program till line 187
// Program to calculate Square, Cube & their Sum
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
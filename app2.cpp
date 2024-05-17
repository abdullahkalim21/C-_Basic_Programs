/*
------------Table of Contents------------
1. Fibonacci Series till 500
2. Whether a number is Palindrome or NOT
3. Maximum, Minimum & Average of user defined numbers
4. Total and Average Daily Sales
5. University recommendations based on marks in FSC/ICS & NTS

*/

#include <iostream>
#include <string>
using namespace std;

// Fibonacci Series till 500
int main()
{
    int first = 0, second = 1, next;
    cout << "Fibonacci Series till 500:\n";
    cout << first << "\n"
         << second << "\n";
    next = first + second;
    while (next <= 500)
    {
        cout << next << "\n";
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
}

// Whether a number is Palindrome or NOT
int main()
{
    int original, reverseNum = 0, remainder;
    cout << "Enter a number: ";
    cin >> original;

    int tempOriginal = original;

    while (tempOriginal != 0)
    {
        remainder = tempOriginal % 10;
        reverseNum = reverseNum * 10 + remainder;
        tempOriginal = tempOriginal / 10;
    }

    if (original == reverseNum)
    {
        cout << original << " is a Palindrome." << endl;
    }
    else
    {
        cout << original << " is not a Palindrome." << endl;
    }
    return 0;
}

// Maximum, Minimum & Average of user defined numbers
int main()
{
    int i, userInput, sumOfAll = 0, maximumNum, minimumNum, numberOfInputs;
    do
    {
        cout << "Enter a number (-1 to quit): ";
        cin >> userInput;
        if (userInput > 0)
        {
            maximumNum = userInput;
        }
        else if (userInput < 0)
        {
            minimumNum = userInput;
        }
        sumOfAll += userInput;
        numberOfInputs++;
    } while (userInput != -1);

    cout << "Maximum number = " << maximumNum << endl;
    cout << "Minimum number = " << minimumNum << endl;
    cout << "Average of all = " << (sumOfAll / numberOfInputs) << endl;
    return 0;
}

// Total and Average Daily Sales
int main()
{
    int i, dailySales, averageDailySales, totalSales, numberOfDays;
    cout << "For how many days you have done the sales: ";
    cin >> numberOfDays;
    for (i = 1; i <= numberOfDays; i++)
    {
        cout << "Enter the sales for day " << i << ": ";
        cin >> dailySales;
        totalSales += dailySales;
    }
    averageDailySales = totalSales / numberOfDays;
    cout << "Total Sales = " << totalSales << " for " << numberOfDays << " days" << endl;
    cout << "Average Daily Sales = " << averageDailySales << endl;
    return 0;
}

// University recommendations based on marks in FSC/ICS & NTS
int main()
{
    int marksInFSC, marksInNTS;
    string universityName, departmentName;
    cout << "I'll help you to secure admission in any department of a university based on your recent results" << endl;
    cout << "Enter your marks in FSc (in %): ";
    cin >> marksInFSC;
    cout << "Enter your marks in NTS (in %): ";
    cin >> marksInNTS;

    if (marksInFSC >= 70)
    {
        if (marksInNTS >= 70)
        {
            universityName = "Oxford";
            departmentName = "IT";
        }
        else if (marksInNTS >= 60)
        {
            universityName = "Oxford";
            departmentName = "Electronics Engineering";
        }
        else if (marksInNTS >= 50)
        {
            universityName = "Oxford";
            departmentName = "Telecommunication";
        }
    }

    if (marksInNTS >= 50)
    {
        if (marksInFSC < 70)
        {
            if (marksInFSC >= 60)
            {
                universityName = "MIT";
                departmentName = "IT";
            }
            else if (marksInFSC >= 50)
            {
                universityName = "MIT";
                departmentName = "Chemical Engineering";
            }
            else if (marksInFSC >= 40)
            {
                universityName = "MIT";
                departmentName = "Computer Engineering";
            }
        }
    }

    cout << "For " << marksInFSC << "% marks in FSc & " << marksInNTS << "% marks in NTS you can secure admission in "
         << universityName << " university in the department of " << departmentName << endl;
    return 0;
}
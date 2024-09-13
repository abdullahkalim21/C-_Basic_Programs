# Table of Contents

[Basic C++ Header Files](#basic-c-header-files)
1. [Fibonacci Series till 500](#1-fibonacci-series-till-500)
2. [Whether a number is Palindrome or NOT](#2-whether-a-number-is-palindrome-or-not)
3. [Maximum, Minimum & Average of user defined numbers](#3-maximum-minimum--average-of-user-defined-numbers)
4. [Total and Average Daily Sales](#4-total-and-average-daily-sales)
5. [University recommendations based on marks in FSC/ICS & NTS](#5-university-recommendations-based-on-marks-in-fscics--nts)

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

## 1. Fibonacci Series till 500

```cpp
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
```

## 2. Whether a number is Palindrome or NOT

```cpp
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
```

## 3. Maximum, Minimum & Average of user defined numbers

```cpp
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
```

## 4. Total and Average Daily Sales

```cpp
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
```

## 5. University recommendations based on marks in FSC/ICS & NTS

```cpp
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
```
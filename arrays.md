# Table of Contents

[Basic C++ Header Files](#basic-c-header-files)

1. [Sum & Average of an Array](#1-sum--average-of-an-array)
2. [Searching in an ARRAY](#2-searching-in-an-array)
3. [Sorting in an Array for Integers](#3-sorting-in-an-array-for-integers)
4. [Sorting in an Array for Strings](#4-sorting-in-an-array-for-strings)
5. [Highest, Lowest & Average of Temperatures using ARRAY](#5-highest-lowest--average-of-temperatures-using-array)
6. [Searching & Sorting in an Array](#6-searching--sorting-in-an-array)
7. [Exchange 2 Arrays' values](#7-exchange-2-arrays-values)
8. [Getting a 2D Array](#8-getting-a-2d-array)
9. [Displaying 2D Array](#9-displaying-2d-array)
10. [2D Array swapping Rows & Columns](#10-2d-array-swapping-rows--columns)
11. [Function to SUM 2 user-defined 2D Arrays](#11-function-to-sum-2-user-defined-2d-arrays)

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

## 1. Sum & Average of an Array

```cpp
int main()
{
    int classNums[] = {6, 9, 73, 13, 69, 25};
    int sum, average;
    for (int i = 0; i < 6; i++)
    {
        sum += classNums[i];
    }
    average = sum / 6;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
```

## 2. Searching in an ARRAY

```cpp
int main()
{
    int myArray[15] = {45, 45, 23, 8, 5, 6, 9, 41, 45, 89, 22, 12, 32, 63, 21};
    int target, timesFound = 0;
    cout << "Enter an integer to find: ";
    cin >> target;
    for (int i = 0; i < 15; i++)
    {
        if (myArray[i] == target)
        {
            cout << "The value " << target << " is at index " << i << endl;
            timesFound++;
        }
    }
    cout << "The given value was found " << timesFound << " times.";

    return 0;
}
```

## 3. Sorting in an Array for Integers

```cpp
int main()
{
    int definedValue;
    cout << "How many values you want to enter in an array? : " << endl;
    cin >> definedValue;
    int myArray[definedValue];
    for (int i = 0; i < definedValue; i++)
    {
        cout << "Enter Value " << (i + 1) << " of array: ";
        cin >> myArray[i];
    }
    // Search in the Array
    int target;
    cout << "\nEnter a number to search: ";
    cin >> target;
    // Sorting an Array
    cout << "\nBefore sorting: " << endl;
    for (int i = 0; i < definedValue; i++)
    {
        cout << myArray[i] << "\t";
    }
    cout << "After sorting: " << endl;
    for (int i = 0; i < definedValue; i++)
    {
        cout << myArray[i] << "\t";
    }
}
```

## 4. Sorting in an Array for Strings

```cpp
int main()
{
    string classStudents[] = {"Qaisar", "Shafi", "Zohan", "Girls", "Boys", "Abdullah"};
    cout << "\nBefore sorting" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << classStudents[i] << endl;
    }
    cout << endl;
    int n = sizeof(classStudents) / sizeof(classStudents[0]);
    sort(classStudents, classStudents + n); // use <algorithm> header file to sort

    cout << "After sorting" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << classStudents[i] << endl;
    }
    cout << endl;

    return 0;
}
```

## 5. Highest, Lowest & Average of Temperatures using ARRAY

```cpp
int main()
{
    float recordedTempInDays[31];
    int inputDays;
    cout << "Enter the number of days(up to 31)";
    cin >> inputDays;
    // Get average temperature of each day
    for (int i = 0; i < inputDays; i++)
    {
        cout << "Enter temperature for day " << (i + 1) << " : ";
        cin >> recordedTempInDays[i];
    }
    float totalTemp, averageTemp;
    int totalDays = 0;
    // calculate the average of temperature
    for (int i = 0; i < inputDays; i++)
    {
        totalTemp += recordedTempInDays[i];
        averageTemp = totalTemp / inputDays;
    }
    // Highest & Lowest Temp calculation
    float highestTemp, lowestTemp;
    for (int i = 0; i < inputDays; i++)
    {
        if (recordedTempInDays[i] >= averageTemp)
            highestTemp = recordedTempInDays[i];
        if (recordedTempInDays[i] < averageTemp)
            lowestTemp = recordedTempInDays[i];
    }

    cout << "Highest Temp = " << highestTemp << endl;
    cout << "Lowest Temp = " << lowestTemp << endl;
    cout << "Average Temp = " << averageTemp << endl;

    return 0;
}
```

## 6. Searching & Sorting in an Array

```cpp
int main()
{
    int definedValue;
    cout << "How many values you want to enter in an array? : " << endl;
    cin >> definedValue;
    int myArray[definedValue];
    for (int i = 0; i < definedValue; i++)
    {
        cout << "Enter Value " << (i + 1) << " of array: ";
        cin >> myArray[i];
    }
    // Search in the Array
    int target;
    cout << "\nEnter a number to search: ";
    cin >> target;
    cout << "\nBefore sorting: " << endl;
    for (int i = 0; i < definedValue; i++)
    {
        cout << myArray[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < definedValue; i++)
    {
        if (myArray[i] == target)
        {
            cout << target << " is at index: " << i << endl;
        }
    }
    // Sorting an Array
    int temp;
    for (int i = 0; i < definedValue; i++)
    {
        for (int j = 0; i < definedValue; i++)
        {
            if (myArray[j] < myArray[i])
            {
                temp = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = temp;
            }
        }
    }
    cout << "After sorting: " << endl;
    for (int i = 0; i < definedValue; i++)
    {
        cout << myArray[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < definedValue; i++)
    {
        if (myArray[i] == target)
        {
            cout << target << " is at index: " << i << endl;
        }
    }
}
```

## 7. Exchange 2 Arrays' values

```cpp
int main()
{
    string class1[6] = {"Qaisar", "Shafi", "Zohan", "Girls", "Boys", "Abdullah"};

    cout << "\n1st Array's values: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Array1[" << i << "] = " << class1[i] << endl;
    }
    cout << endl;

    string class2[6];

    for (int i = 0; i < 6; i++)
    {
        class2[i] = class1[i];
    }

    cout << "2nd Array's values: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Array2[" << i << "] = " << class1[i] << endl;
    }
    cout << endl;

    return 0;
}
```

## 8. Getting a 2D Array

```cpp
int main()
{
    int rows, columns;
    cout << "\nHow many rows you want to enter in an Array? : " << endl;
    cin >> rows;
    cout << "\nHow many columns you want to enter in an Array? : " << endl;
    cin >> columns;
    int my2dArray[rows][columns];
    cout << "Enter values of array: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> my2dArray[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << my2dArray[i][j] << "\t";
        }
        cout << endl;
    }
}
```

## 9. Displaying 2D Array

```cpp
int main()
{
    int rows, columns;
    cout << "\nHow many rows you want to enter in an Array? :" << endl;
    cin >> rows;
    cout << "\nHow many columns you want to enter in an Array?" << endl;
    cin >> columns;
    int my2dArray[rows][columns];
    cout << "Enter " << (rows * columns) << " values of array: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> my2dArray[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << my2dArray[i][j] << "\t";
        }
        cout << endl;
    }
}
```

## 10. 2D Array swapping Rows & Columns

```cpp
int main()
{
    int rows, columns;
    cout << "\nHow many rows you want to enter in an Array? :" << endl;
    cin >> rows;
    cout << "\nHow many columns you want to enter in an Array?" << endl;
    cin >> columns;
    int my2dArray[rows][columns];
    cout << "Enter " << (rows * columns) << " values of array: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> my2dArray[i][j];
        }
    }
    cout << "Before Swapping Rows & Columns" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << my2dArray[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "After Swapping Rows & Columns" << endl;
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << my2dArray[j][i] << "\t";
        }
        cout << endl;
    }
}
```

## 11. Function to SUM 2 user-defined 2D Arrays

```cpp
int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int A[rows][cols], B[rows][cols];

    cout << "Enter elements for matrix A" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> A[i][j];
        }
    }

    cout << "Enter elements for matrix B" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> B[i][j];
        }
    }

    int C[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```
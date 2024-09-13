# Table of Contents

[Basic C++ Header Files](#basic-c-header-files)

1. [Program to SUM/SUBTRACT values using pointers and referrences](#1-program-to-sumsubtract-values-using-pointers-and-referrences)
2. [Program to Swap values using pointers](#2-program-to-swap-values-using-pointers)
3. [Using pointers in Arrays for Traversal & Address display](#3-using-pointers-in-arrays-for-traversal--address-display)

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

## 1. Program to SUM/SUBTRACT values using pointers and referrences

```cpp
int main()
{
    int a, b;
    char choice;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    cout << "Enter an operator(+ -): ";
    cin >> choice;
    if (choice == '+')
    {
        cout << "Sum = " << *ptr1 + *ptr2 << endl;
    }
    else if (choice == '-')
    {
        cout << "Subtraction = " << *ptr1 - *ptr2 << endl;
    }
    return 0;
}
```

## 2. Program to Swap values using pointers

```cpp
// User-defined function to swap values using pointers
void swapValues(int &a, int &b)
{
    int z;
    z = a;
    a = b;
    b = z;
}
// main function for above 1 user-defined function
int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Before swapping\na = " << a << "\nb = " << b << endl;
    swapValues(a, b);
    cout << "After swapping\na = " << a << "\nb = " << b << endl;
}
```

## 3. Using pointers in Arrays for Traversal & Address display

```cpp
int main()
{
    int array[5];   // Declare an integer array of size 5
    cout << "Enter 5 values of an array: "; // Prompt the user to enter values
    for (int i = 0; i < 5; i++)
        cin >> array[i]; // Read 5 integer values from the user and store them in the array

    int *ptr1 = &array[0]; // Initialize a pointer to the first element of the array

    for (int i = 0; i < 5; i++)
        cout << *ptr1++ << "\t"; // Print the values of the array using the pointer and increment the pointer

    cout << endl; // Print a newline for better formatting

    for (int i = 0; i < 5; i++)
        cout << &array[i] << "\t"; // Print the memory addresses of each element in the array

    return 0;
}
```

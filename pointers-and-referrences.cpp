/*
------------Table of Contents------------
1. Program to SUM/SUBTRACT values using pointers and referrences
2. Program to Swap values using pointers

*/

#include <iostream>
using namespace std;

// Program to SUM/SUBTRACT values using pointers and referrences
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

int main()
{
    int array[5];
    cout << "Enter 5 values of an array: ";
    for (int i = 0; i < 5; i++)
        cin >> array[i];
    int *ptr1 = &array[0];
    for (int i = 0; i < 5; i++)
        cout << *ptr1++ << "\t";
    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << &array[i] << "\t";
    return 0;
}
// Program to Swap values using pointers
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
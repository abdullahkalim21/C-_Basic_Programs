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
// Using pointers in Arrays for Traversal & Address display

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
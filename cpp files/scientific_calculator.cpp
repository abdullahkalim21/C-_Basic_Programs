#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
// Show Current Time
void showTime() {
    time_t now = time(0);
    char* currentTime = ctime(&now);
    cout << "Current Time: " << currentTime;
}
// BASIC FUNCTIONS
// Function for Addition
double add(double a, double b) {
    return a + b;
}

// Function for Subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function for Multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function for Division
double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero." << endl;
        return NAN;
    }
}

// Function to calculate Power of a number
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Function to calculate Square Root of a number
double squareRoot(double a) {
    if (a >= 0)
        return sqrt(a);
    else {
        cout << "Error: Negative input for square root." << endl;
        return NAN;
    }
}

// Function to calculate Logarithmic value of a radian
double logarithm(double a) {
    if (a > 0)
        return log(a);
    else {
        cout << "Error: Logarithm of non-positive number." << endl;
        return NAN;
    }
}

// Function to calculate SINE value of an angle
double sine(double a) {
    double radian = a * M_PI / 180.0;
    return sin(radian);
}

// Function to calculate COSINE value of an angle
double cosine(double a) {
    double radian = a * M_PI / 180.0;
    return cos(radian);
}

// Function to initial MENU for user
void displayMenu() {
    cout << "\n||---------->>> Scientific Calculator <<<----------||" << endl;
    cout << "1. Addition";
    cout << "\t2. Subtraction";
    cout << "\t3. Multiplication";
    cout << "\n4. Division";
    cout << "\t5. Power";
    cout << "\t6. Square Root";
    cout << "\n7. Logarithm";
    cout << "\t8. Sine";
    cout << "\t9. Cosine";
    cout << "\n10. Display History";
    cout << "\n-1. Exit" << endl;
}
// Function to Display History of previously performed operations
void displayHistory(vector<string> history) {
    if (history.size() == 0) {
        cout << "\nNo calculations in history." << endl;
    } else {
        cout << "\nRecent calculations:" << endl;
        for (int i = 0; i < history.size(); i++) {
            cout << history[i] << endl;
        }
    }
}
// main function
int main() {
    int choice;
    double num1, num2;
    vector<string> history;     // Dynamic array to store history
    // Array of basic operations to avoid if-else statements clutter
    // Each pointer in operations points to a function & each function accepts and return double values
    double (*operations[5])(double, double) = {add, subtract, multiply, divide, power};

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        // Whenever user enters -1 the loop breaks
        if (choice == -1) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 5) {
            string operators[5] = {"+", "-", "*", "/", "^"};
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            double result = operations[choice - 1](num1, num2);
            cout << "\n" << num1 << " " << operators[choice - 1] << " " << num2 << " = " << result << endl;
            // following statement stores the performed function in history
            history.push_back(to_string(num1) + " " + operators[choice - 1] + " " + to_string(num2) + " = " + to_string(result));
        } else if (choice == 6) {
            cout << "Enter a number: ";
            cin >> num1;
            double result = squareRoot(num1);
            cout << "\nSquare root of " << num1 << " = " << result << endl;
            // following statement stores the performed function in history
            history.push_back("Square Root of " + to_string(num1) + " = " + to_string(result));
        } else if (choice == 7) {
            cout << "Enter a number: ";
            cin >> num1;
            int logChoice;
            cout << "Select a log\n1. Natural Logarithm\t2. Base-10 Logarithm" << endl;
            cin >> logChoice;
            if (logChoice == 1) {
                double result = logarithm(num1);
                cout << "\nln of " << num1 << " = " << result << endl;
                // following statement stores the performed function in history
                history.push_back("ln of " + to_string(num1) + " = " + to_string(result));
            } else if (logChoice == 2) {
                double result = log10(num1);
                cout << "\nlog10 of " << num1 << " = " << result << endl;
                history.push_back("log10 of " + to_string(num1) + " = " + to_string(result));
            } else {
                cout << "Invalid choice. Please try again." << endl;
            }
        } else if (choice == 8) {
            cout << "Enter an angle: ";
            cin >> num1;
            double result = sine(num1);
            cout << "\nsin(" << num1 << ") = " << result << endl;
            // following statement stores the performed function in history
            history.push_back("sin(" + to_string(num1) + ") = " + to_string(result));
        } else if (choice == 9) {
            cout << "Enter an angle: ";
            cin >> num1;
            double result = cosine(num1);
            cout << "\ncos(" << num1 << ") = " << result << endl;
            // following statement stores the performed function in history
            history.push_back("cos(" + to_string(num1) + ") = " + to_string(result));
        } else if (choice == 10) {      // display whatever the previous operations have been performed
            displayHistory(history);
        } else {        // exceptional case if user enters any number other than MENU
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    // Shows current time when user exits program
    showTime();
    return 0;
}
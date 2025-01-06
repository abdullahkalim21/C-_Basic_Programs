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

class Calculator {
    vector<string> history;     // Dynamic array to store history
public:
    Calculator() {
        cout << "Calculator Initialized." << endl;
    }
    // Function for Addition
    double add(double a, double b) {
        double result = a + b;
        addToHistory(to_string(a) + " + " + to_string(b) + " = " + to_string(result));
        return result;
    }
    // Function for Subtraction
    double subtract(double a, double b) {
        double result = a - b;
        addToHistory(to_string(a) + " - " + to_string(b) + " = " + to_string(result));
        return result;
    }
    // Function for Multiplication
    double multiply(double a, double b) {
        double result = a * b;
        addToHistory(to_string(a) + " * " + to_string(b) + " = " + to_string(result));
        return result;
    }
    // Function for Division
    double divide(double a, double b) {
        if (b != 0) {
            double result = a / b;
            addToHistory(to_string(a) + " / " + to_string(b) + " = " + to_string(result));
            return result;
        } else {
            cout << "Error: Division by zero." << endl;
            return NAN;     // Not A Number
        }
    }
    // add to history
    void addToHistory(const string& entry) {
        history.push_back(entry);
    }
    // Function to Display History of previously performed operations
    void displayHistory() {
        if (history.size() == 0) {
            cout << "\nNo calculations in history." << endl;
        } else {
            cout << "\nRecent calculations:" << endl;
            for (int i = 0; i < history.size(); i++) {
                cout << history[i] << endl;
            }
        }
    }
};

class ScientificCalculator : public Calculator {
public:
    ScientificCalculator() {
        cout << "Scientific Calculator Initialized." << endl;
    }
    // Function to calculate Power of a number
    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    // Function to calculate Square Root of a number
    double squareRoot(double a) {
        if (a >= 0) {
            double result = sqrt(a);
            addToHistory("Square Root of " + to_string(a) + " = " + to_string(result));
            return result;
        }
        else {
            cout << "Error: Negative input for square root." << endl;
            return NAN;
        }
    }

    // Function to calculate Logarithmic value
    double logarithm(double a) {
        if (a > 0) {
            double result = log(a);
            addToHistory("Natural Log of " + to_string(a) + " = " + to_string(result));
            return result;
        }
        else {
            cout << "Error: Logarithm of non-positive number." << endl;
            return NAN;
        }
    }

    // Function to calculate SINE value of an angle
    double sine(double a) {
        double radian = a * M_PI / 180.0;
        double result = sin(radian);
        addToHistory("sin(" + to_string(a) + ") = " + to_string(result));
        return result;
    }

    // Function to calculate COSINE value of an angle
    double cosine(double a) {
        double radian = a * M_PI / 180.0;
        double result = cos(radian);
        addToHistory("cos(" + to_string(a) + ") = " + to_string(result));
        return result;
    }
    // Function to calculate TAN
    double tan(double a) {
        double radian = a * M_PI / 180.0;
        double result = sin(radian) / cos(radian);
        addToHistory("tan(" + to_string(a) + ") = " + to_string(result));
        return result;
    }
    // Function to calculate TAN
    double cot(double a) {
        double radian = a * M_PI / 180.0;
        double result = cos(radian) / sin(radian);
        addToHistory("cot(" + to_string(a) + ") = " + to_string(result));
        return result;
    }

};

// Function to initial MENU for user
void displayMenu() {
    cout << "\n||---------->>> Scientific Calculator <<<----------||" << endl;
    cout << "1. Basic Operations" << endl;
    cout << "2. Advanced Operations" << endl;
    cout << "3. History" << endl;
    cout << "-1. Exit" << endl;
}
// main function
int main() {
    ScientificCalculator sc_cal;
    int choice;
    double num1, num2;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        // Whenever user enters -1 the loop breaks
        if (choice == -1) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        switch (choice) {
            case 1: {
                int secChoice;
                cout << "\nBasic Operations:\n";
                cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n-1. Main Menu" << endl;
                cout << "Enter your choice: ";
                cin >> secChoice;
                if (secChoice == -1) {
                    cout << "Returning to main menu." << endl;
                } else if (secChoice >= 1 && secChoice <=4) {
                    cout << "Enter two numbers: ";
                    cin >> num1 >> num2;
                    if (secChoice == 1) {
                        cout << num1 << " + " << num2 << " = " << sc_cal.add(num1, num2) << endl;
                    } else if (secChoice == 2) {
                        cout << num1 << " - " << num2 << " = " << sc_cal.subtract(num1, num2) << endl;
                    } else if (secChoice == 3) {
                        cout << num1 << " * " << num2 << " = " << sc_cal.multiply(num1, num2) << endl;
                    } else if (secChoice == 4) {
                        cout << num1 << " / " << num2 << " = " << sc_cal.divide(num1, num2) << endl;
                    }
                } else {
                    cout << "Invalid choice. Returning to main menu." << endl;
                }
                break;
            }
            case 2: {
                int advancedChoice;
                cout << "\nAdvanced Operations:\n";
                cout << "1. Power\n2. Square Root\n3. Sine\n4. Cosine\n5. Tan\n6. Cot" << endl;
                cout << "Enter your choice: ";
                cin >> advancedChoice;

                if (advancedChoice == 1) {
                    cout << "Enter base and exponent: ";
                    cin >> num1 >> num2;
                    cout << num1 << " ^ " << num2 << " = " << sc_cal.power(num1, num2) << endl;
                } else if (advancedChoice == 2) {
                    cout << "Enter a number: ";
                    cin >> num1;
                    cout << "Square Root of " << num1 << " = " << sc_cal.squareRoot(num1) << endl;
                } else if (advancedChoice == 3) {
                    cout << "Enter an angle (degrees): ";
                    cin >> num1;
                    cout << "sin(" << num1 << ") = " << sc_cal.sine(num1) << endl;
                } else if (advancedChoice == 4) {
                    cout << "Enter an angle (degrees): ";
                    cin >> num1;
                    cout << "cos(" << num1 << ") = " << sc_cal.cosine(num1) << endl;
                } else if (advancedChoice == 5) {
                    cout << "Enter an angle (degrees): ";
                    cin >> num1;
                    cout << "tan(" << num1 << ") = " << sc_cal.tan(num1) << endl;
                } else if (advancedChoice == 6) {
                    cout << "Enter an angle (degrees): ";
                    cin >> num1;
                    cout << "cot(" << num1 << ") = " << sc_cal.cot(num1) << endl;
                } else {
                    cout << "Invalid choice. Returning to main menu." << endl;
                }
                break;
            }
            case 3: {       // Display History
                sc_cal.displayHistory();
                break;
            }
        
            default: {
                cout << "Invalid choice. Returning to main menu." << endl;
                break;
            }
        }
    }
    // Shows current time when user exits program
    showTime();
    return 0;
}
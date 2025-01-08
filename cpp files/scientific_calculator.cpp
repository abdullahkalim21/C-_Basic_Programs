#include <iostream>      	// cin, cout
#include <cmath>            // mathematical functions (sin, cos, sqrt, pow)
#include <string>           // string and its operations (converting int to string)
#include <vector>           // For Dynamic Arrays like to store history
#include <ctime>            // to display current time
#include <fstream>          // to work with text file
using namespace std;

// Show Current Time
void showTime() {
    time_t now = time(0);
    char* currentTime = ctime(&now);
    cout << "Current Time: " << currentTime;
}

class HistoryManager {
private:
    vector<string> history; // Dynamic array to store history
public:
    void addToHistory(const string& entry) {
        history.push_back(entry);
    }
    void saveHistoryToFile() {
        ofstream file("history.txt", ios::app); // Open in append mode
        if (file.is_open()) {
            for (const auto& entry : history) {
                file << entry << endl;
            }
            file.close();
        }
    }
    void displayHistory() const {
        if (history.empty()) {
            cout << "\nNo calculations in history." << endl;
        } else {
            cout << "\nRecent calculations:" << endl;
            for (const auto& entry : history) {
                cout << entry << endl;
            }
        }
    }
    const vector<string>& getHistory() const {
        return history;
    }
};

class Calculator {
protected:
    static int calculatorCount;
    HistoryManager historyManager; // Association: Calculator "has-a" HistoryManager
public:
    Calculator() {
        calculatorCount++;
    }
    virtual ~Calculator() {
        historyManager.saveHistoryToFile();
    }

    // Friend function to access historyManager
    friend void mergeHistories(const Calculator& c1, const Calculator& c2);

    virtual double add(double a, double b) {
        double result = a + b;
        historyManager.addToHistory(to_string(a) + " + " + to_string(b) + " = " + to_string(result));
        return result;
    }

    virtual double subtract(double a, double b) {
        double result = a - b;
        historyManager.addToHistory(to_string(a) + " - " + to_string(b) + " = " + to_string(result));
        return result;
    }

    virtual double multiply(double a, double b) {
        double result = a * b;
        historyManager.addToHistory(to_string(a) + " * " + to_string(b) + " = " + to_string(result));
        return result;
    }

    virtual double divide(double a, double b) {
        if (b != 0) {
            double result = a / b;
            historyManager.addToHistory(to_string(a) + " / " + to_string(b) + " = " + to_string(result));
            return result;
        } else {
            cout << "Error: Division by zero." << endl;
            return NAN; // Not A Number
        }
    }

    void displayHistory() const {
        historyManager.displayHistory();
    }

    static int getCalculatorCount() {
        return calculatorCount;
    }
};

int Calculator::calculatorCount = 0;

void mergeHistories(const Calculator& c1, const Calculator& c2) {
    const auto& history1 = c1.historyManager.getHistory();
    const auto& history2 = c2.historyManager.getHistory();

    cout << "\nMerged History:" << endl;
    for (const auto& entry : history1) {
        cout << entry << endl;
    }
    for (const auto& entry : history2) {
        cout << entry << endl;
    }
}

class ScientificCalculator : public Calculator {
public:
    ScientificCalculator() {}

    double power(double base, double exponent) {
        double result = pow(base, exponent);
        historyManager.addToHistory(to_string(base) + " ^ " + to_string(exponent) + " = " + to_string(result));
        return result;
    }

    double squareRoot(double a) {
        if (a >= 0) {
            double result = sqrt(a);
            historyManager.addToHistory("Square Root of " + to_string(a) + " = " + to_string(result));
            return result;
        } else {
            cout << "Error: Negative input for square root." << endl;
            return NAN;
        }
    }

    double logarithm(double a) {
        if (a > 0) {
            double result = log(a);
            historyManager.addToHistory("Natural Log of " + to_string(a) + " = " + to_string(result));
            return result;
        } else {
            cout << "Error: Logarithm of non-positive number." << endl;
            return NAN;
        }
    }

    double sine(double a) {
        double radian = a * M_PI / 180.0;
        double result = sin(radian);
        historyManager.addToHistory("sin(" + to_string(a) + ") = " + to_string(result));
        return result;
    }

    double cosine(double a) {
        double radian = a * M_PI / 180.0;
        double result = cos(radian);
        historyManager.addToHistory("cos(" + to_string(a) + ") = " + to_string(result));
        return result;
    }

    double tan(double a) {
        double radian = a * M_PI / 180.0;
        double result = tan(radian);
        historyManager.addToHistory("tan(" + to_string(a) + ") = " + to_string(result));
        return result;
    }

    double cot(double a) {
        double radian = a * M_PI / 180.0;
        double result = 1 / tan(radian);
        historyManager.addToHistory("cot(" + to_string(a) + ") = " + to_string(result));
        return result;
    }

    double sin_over_cos(double a, double b) {
        double radian_a = a * M_PI / 180.0;
        double radian_b = b * M_PI / 180.0;
        double result = sin(radian_a) / cos(radian_b);
        historyManager.addToHistory("sin(" + to_string(a) + ") / cos(" + to_string(b) + ") = " + to_string(result));
        return result;
    }

    double cos_over_sin(double a, double b) {
        double radian_a = a * M_PI / 180.0;
        double radian_b = b * M_PI / 180.0;
        double result = cos(radian_a) / sin(radian_b);
        historyManager.addToHistory("cos(" + to_string(a) + ") / sin(" + to_string(b) + ") = " + to_string(result));
        return result;
    }
};

// Function to display MENU for user
void displayMenu() {
    cout << "\n||---------->>> Scientific Calculator <<<----------||" << endl;
    cout << "1. Basic Operations" << endl;
    cout << "2. Advanced Operations" << endl;
    cout << "3. History" << endl;
    cout << "4. Total Number of Calculator Objects" << endl;
    cout << "-1. Exit" << endl;
}

// Main function
int main() {
    ScientificCalculator sc_cal;
    int choice;
    double num1, num2;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == -1) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        switch (choice) {
            case 1: {
                int secChoice;
                cout << "\nBasic Operations:" << endl;
                cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n-1. Main Menu" << endl;
                cout << "Enter your choice: ";
                cin >> secChoice;
                if (secChoice == -1) {
                    cout << "Returning to main menu." << endl;
                } else {
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
                    } else {
                        cout << "Invalid choice. Returning to main menu." << endl;
                    }
                }
                break;
            }
            case 2: {
                int advancedChoice;
                cout << "\nAdvanced Operations:" << endl;
                cout << "1. Power\n2. Square Root\n3. Sine\n4. Cosine\n5. Tan\n6. Cot\n7. Sin / Cos\n8. Cos / Sin" << endl;
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
                } else if (advancedChoice == 7) {
                    cout << "Enter two angles (degrees) for sin(a) / cos(b): ";
                    cin >> num1 >> num2;
                    cout << "sin(" << num1 << ") / cos(" << num2 << ") = " << sc_cal.sin_over_cos(num1, num2) << endl;
                } else if (advancedChoice == 8) {
                    cout << "Enter two angles (degrees) for cos(a) / sin(b): ";
                    cin >> num1 >> num2;
                    cout << "cos(" << num1 << ") / sin(" << num2 << ") = " << sc_cal.cos_over_sin(num1, num2) << endl;
                } else {
                    cout << "Invalid choice. Returning to main menu." << endl;
                }
                break;
            }
            case 3:
                sc_cal.displayHistory();
                break;
            case 4:
                cout << "Total number of calculators created: " << Calculator::getCalculatorCount() << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
    showTime();
    return 0;
}
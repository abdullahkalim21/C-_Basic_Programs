#include <iostream>
using namespace std;

int main()
{

    int employeePayCode, managerSalary = 1000, commWorkerBasicSalary = 250;
    float totalWorkHours, extraWorkHours, regularWorkHours = 40.0, regularWorkHourSalary, extraWorkHourSalary, hourlyWorkerSalary;
    do          // using a do-while loop so user don't have to run the program again & again
    {
        cout << "\nEnter the employee Pay Code: ";
        cin >> employeePayCode;
        if (employeePayCode == 1)
        {
            cout << "\nManager's Salary is: $" << managerSalary << endl;    
            // Manager's salary is fixed so we don't have to ask for extra info
        }
        else if (employeePayCode == 2)
        {
            cout << "\nHow many hours did you work: ";  // total hours in a week a worker has worked
            cin >> totalWorkHours;
            if (totalWorkHours > 40)        // if totalHours > 40 we calculate the extra hours he worked
            {
                extraWorkHours = totalWorkHours - regularWorkHours;
            } else if (totalWorkHours < 40) {       // if user inputs totalHours < 40 we display an error message
                cout << "Error! You must enter value above 40" << endl;
                continue;       // using continue statement to make loop run again from beginning
            }
            regularWorkHourSalary = regularWorkHours * 10;          // regularWorkHours Salary is calculated at 1x hour rate
            extraWorkHourSalary = extraWorkHours * (10 * 1.5);      // extraWorkHours salary is calculated at 1.5x hour rate
            hourlyWorkerSalary = regularWorkHourSalary + extraWorkHourSalary;   // total salary is calculated by addintion of regular & extra works hours
                // displaying all of the details of Hourly Worker's Salary
            cout << "\nHourly Worker regular hours salary is: $" << regularWorkHourSalary << endl;
            cout << "Hourly Worker extra hours salary is: $" << extraWorkHourSalary << endl;
            cout << "Hourly Worker total Salary is: $" << hourlyWorkerSalary << endl;
        }
        else if (employeePayCode == 3)
        {
            float grossSale, commOfGrossSale, commWorkerFinalSalary;        // variables are declared as float, as the sale is in dollars and could be in points (cents) also
            cout << "\nEnter gross sale of this week: $";       // the gross sale done in Dollars
            cin >> grossSale;
            commOfGrossSale = grossSale * 0.057;    // calculating the gross sale's commission at 5.7%
            commWorkerFinalSalary = commWorkerBasicSalary + commOfGrossSale;        // Commissioned Worker's Final Salary is calculated
            // Displaying the details of salary
            cout << "Basic salary of Commissioned Worker is: $" << commWorkerBasicSalary << endl;
            cout << "\nTotal commission for the $" << grossSale << " gross sale is: $" << commOfGrossSale << endl;
            cout << "Total salary of Commission Worker is: $" << commWorkerFinalSalary << endl;
        }
        else if (employeePayCode == 4)
        {
            int pencilsAssembled, booksAssembled;
            float pencilsAssembledPay, booksAssembledPay, pieceWorkerSalary;
            cout << "\nNo. of pencils assembled: ";         // Numbers of pieces assembled
            cin >> pencilsAssembled;
            cout << "No. of books assembled: ";             // Numbers of pieces assembled
            cin >> booksAssembled;
            pencilsAssembledPay = pencilsAssembled * 1.2;
            booksAssembledPay = booksAssembled * 1.5;
            pieceWorkerSalary = pencilsAssembledPay + booksAssembledPay;

            // Displaying the details of salary
            cout << "\nFor " << pencilsAssembled << " pencils assembled your pay is: $" << pencilsAssembledPay << endl;
            cout << "For " << booksAssembled << " books assembled your pay is: $" << booksAssembledPay << endl;
            cout << "Your total pay is: $" << pieceWorkerSalary << endl;
        }
        else if (employeePayCode == -1)         // to break the loop user enters -1
        {
            cout << "\nProgram closed!" << endl;
            break;              // The loop is exited & program closed
        }
        else            // if user enters value other than above the ERROR message is displayed
        {
            cout << "Wrong Input!" << endl;
            // don't use break; statement here as jus the input is wrong, but we want the program to continue
        }
    } while (employeePayCode != -1);        // the loop continues till -1 is entered to break the loop & exit program
    
    return 0;
}
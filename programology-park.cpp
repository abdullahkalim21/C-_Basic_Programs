#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\t\tWelcome to Programology\n\t\tA Park for Programmers ;)" << endl;
    int personsVisiting, stayHours, numberOfCars, parkingFee;
    cout << "How many persons are visiting the Park: ";
    cin >> personsVisiting;
    cout << "How many hours you're going to stay there: ";
    cin >> stayHours;
    cout << "How many cars you're going to take with you (for parking purpose): ";
    cin >> numberOfCars;
    // Calculate the parking fee
    parkingFee = numberOfCars * (stayHours * 10);
    cout << "Now, how many persons will ride swings\nThere are 2 types of swings\n\t\t- Discovery Swing\n\t\t- Maryland Swing" << endl;
    // Discovery Ride's Fair Calculation
    int discoveryRiders, discoveryRidersAge, discoveryRiderFair, totalDiscoveryFair = 0;
    cout << "How many Discovery Swing riders are there: ";
    cin >> discoveryRiders;
    for (int i = 1; i <= discoveryRiders; i++)
    {
        cout << "Enter age of rider " << i << ": ";
        cin >> discoveryRidersAge;
        const int discoveryFair = 100;
        if (discoveryRidersAge < 10)
        {
            discoveryRiderFair = 0;
            cout << "Children below age 10 are not allowed.\n"
                 << endl;
        }
        else if (discoveryRidersAge >= 10 && discoveryRidersAge < 15)
        {
            discoveryRiderFair = discoveryFair - (discoveryFair * 0.1);
        }
        else if (discoveryRidersAge >= 15 && discoveryRidersAge < 20)
        {
            discoveryRiderFair = discoveryFair - (discoveryFair * 0.05);
        }
        else if (discoveryRidersAge >= 20)
        {
            discoveryRiderFair = discoveryFair;
        }
        totalDiscoveryFair += discoveryRiderFair;
    }
    // Maryland Ride's Fair Calculation
    int marylandRiders, marylandRidersAge, marylandRiderFair, totalMarylandFair = 0;
    cout << "How many Maryland Swing riders are there: ";
    cin >> marylandRiders;
    for (int i = 1; i <= marylandRiders; i++)
    {
        cout << "Enter age of rider " << i << ": ";
        cin >> marylandRidersAge;
        const int marylandFair = 100;
        if (marylandRidersAge >= 1 && marylandRidersAge < 5)
        {
            marylandRiderFair = marylandFair - (marylandFair * 0.5);
        }
        else if (marylandRidersAge >= 5 && marylandRidersAge < 10)
        {
            marylandRiderFair = marylandFair - (marylandFair * 0.25);
        }
        else if (marylandRidersAge > 10)
        {
            marylandRiderFair = marylandFair;
        }
        totalMarylandFair += marylandRiderFair;
    }
    cout << "Total parking fee of " << numberOfCars << " vahicle for " << stayHours << " hours stay is PKR " << parkingFee << endl;
    cout << "Total Maryland swing tickets fair for " << marylandRiders << " persons is PKR " << totalMarylandFair << endl;
    cout << "Total Discovery swing tickets fair for " << discoveryRiders << " persons is PKR " << totalDiscoveryFair << endl;
    cout << "Thanks for visiting Programology website\n\t\tBest of Luck!\nProgram Closed!" << endl;
    return 0;
}
// Michael Hom
// CS102 Laboratory 9A Program A / C
// This program looks at the dynamic memory allocations with arrays

#include <iostream>
#include <iomanip>
#include <memory>
using namespace std;

int main()
{
    // declare variables
    // BEFORE double *sales = nullptr,
    double total = 0.0,
    average;
    int numDays, count;

    // Get number of days
    cout << "How many days of sales figures do you wish to process? ";

    cin >> numDays;


    // Dynamically allocate an array large enough to hold
    // that many days of sales amounts.

    // BEFORE sales = new double[numDays];
    unique_ptr<double[]> sales (new double[numDays]);

    cout << "Enter the sales figures below. \n";
    for (count = 0; count < numDays; count++)
    {
        cout << "Day " << (count + 1) << ": ";
        cin >> sales[count];
    }
    // Calculate the total sales
    for (count = 0; count < numDays; count++)
        total += sales[count];

    // Calculate the average sales per day
    average = total / numDays;

    // Display the results
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    // Free dynamically allocated memory
    // BEFORE delete [] sales;
    // BEFORE sales = nullptr; // Make sales a nullptr.

    cin.ignore();
    cin.get();
    return 0;
}

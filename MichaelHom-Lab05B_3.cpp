// Michael Hom
// CS102 Laboratory 5B Program C
// This program will calculate the year by year interest
// and total interest at the end of the years

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    //declare variables
    double principal, rate, totalInterest = 0, yearEndBalance, yearInterest;
    int years , count = 1;
    const int TIMES_COMPOUNDED = 12;

    cout << "What is initial deposit? " ;
    cin >> principal;

    while (principal <= 0)
    {
        cout << "Invalid, must be greater than 0. ";
        cout << "Reenter: ";
        cin >> principal;
    }

    cout << "Annual interest rate (as a percent)? " ;
    cin >> rate;

    while (rate <= 0)
    {
        cout << "Invalid, must be greater than 0. ";
        cout << "Reenter: ";
        cin >> rate;
    }

    cout << "Number of years on deposit? " ;
    cin >> years;

    while (years <= 0)
    {
        cout << "Invalid, must be greater than 0. ";
        cout << "Reenter: ";
        cin >> years;
    }

    cout << "Let's see how your money will grow!\n";
    cout << left << setw(6)<< "Year" << "Balance\n";

    rate /= 100;

    cout << setprecision(2) << fixed;

    for (; count <= years; count++)
    {
        yearEndBalance = principal * pow (1 + rate / TIMES_COMPOUNDED, TIMES_COMPOUNDED);
        yearInterest = yearEndBalance - principal;

        totalInterest += yearInterest;

        cout << setw(6)<< count << yearEndBalance << endl;

        principal = yearEndBalance; // this changes principal to the new end total.

    }

    cout << "Total interest earned is $ " << totalInterest << endl;
    cout << "Coded By Michael Hom";
    cin.ignore();
    cin.get();

    return 0;
}

// Michael Hom
// CS102 Laboratory 7B Program C
// This program stores employees hours worked having same hourly wage

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];

    double payrate;
    double grossPay;

    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees ";
    cout << "who all earn the same hourly rate.\n";

    for (int &val : hours)
    {
        static int count = 1;
        cout << "Enter hours for Employee #" << count << ": ";
        cin >> val;
        count++;
    }

    cout << "Enter the hourly pay rate for all the employees: ";
    cin >> payrate;

    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);

    for (int val : hours)
    {   static int count = 1;
        grossPay = val * payrate;
        cout << "Employee # " << count;
        cout << ":$" << grossPay << endl;
        count++;
    }
    cin.ignore();
    cin.get();
    return 0;
}

//Lab 01B
//Gross Pay Calculation
//Michael Hom
#include <iostream>
using namespace std;

int main()
{
    double hours, payRate, grossPay;
//Get hours
    cout << "How many hours did you work?";
    cin >> hours;

//Get payRate
    cout << "How much do you get paid per hour?";
    cin >> payRate;

//multiply hours and payRate
    grossPay = hours * payRate;

//Say grossPay
    cout << "You have earned $" << grossPay;
    cin.ignore();
    cin.get();
    return 0;
}

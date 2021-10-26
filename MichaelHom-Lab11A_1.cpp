// Michael Hom
// CSS102 Laboratory 12B Program A
// This program calculates the min and max for rainfall
// using enumerated data type

#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_OF_MONTHS = 12;
string intToMonth (int &);

enum Month {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
                JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

int main ()
{

    double rainfall[NUM_OF_MONTHS] = {4.72, 4.49, 3.39, 1.42, 0.79, 0.12, 0.00, 0.08 , 0.24 , 1.38, 2.87, 4.49};

    double min = rainfall[JANUARY];
    double max = rainfall[JANUARY];
    int nameMinInt = JANUARY;
    int nameMaxInt = JANUARY;

    string nameMinStr;
    string nameMaxStr;
    double sum = 0;
    double average;
    for (Month mon = JANUARY; mon <= DECEMBER;
                                mon = static_cast<Month>(mon + 1))
    {
        if (rainfall[mon] > max)
        {
            max = rainfall[mon];
            nameMaxInt = mon;
        }
        if (rainfall[mon] < min)
        {
            min = rainfall[mon];
            nameMinInt = mon;

        }
        sum += rainfall[mon];
    }
    nameMinStr = intToMonth(nameMinInt);
    nameMaxStr = intToMonth(nameMaxInt);

    cout << setprecision(2) << fixed;
    average = static_cast<double>(sum) / NUM_OF_MONTHS;
    cout << "The average is " << average << endl;
    cout << "The sum of the rainfall is " << sum << endl;
    cout << "The minimum is " << min << " in the month "<< nameMinStr << endl;
    cout << "The maximum is " << max << " in the month "<< nameMaxStr << endl;
    cin.get();
    return 0;
}

string intToMonth (int &num)
{
    string str;
    switch(num)
    {
        case JANUARY :
            str = "January";
            break;
        case FEBRUARY :
            str = "February";
            break;
        case MARCH :
            str = "March";
            break;
        case APRIL:
            str = "April";
            break;
        case MAY :
            str = "May";
            break;
        case JUNE:
            str = "June";
            break;
        case JULY :
            str = "July";
            break;
        case AUGUST :
            str = "August";
            break;
        case SEPTEMBER :
            str = "September";
            break;
        case OCTOBER :
            str = "October";
            break;
        case NOVEMBER :
            str = "November";
            break;
        case DECEMBER :
            str = "December";
            break;
        default:
            cout << "Something went wrong.";
    }
    return str;
}

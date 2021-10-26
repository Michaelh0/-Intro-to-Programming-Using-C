//Michael Hom
//CS-102 Laboratory 3 Program C
//This program aligns different data
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    //declare variables
    string item1, item2;

    double price1, price2;
    item1 = "Buffalo Wings";
    item2 = "Nachos";
    price1 = 10.50;
    price2 = 8.50;

    //adding two decimals
    cout << setprecision(2) << fixed;
    cout << item1 << " $" << price1 << endl;
    cout << item2 << " $" << price2 << endl;
    cout << endl;


    //add field width for numbers
    cout << setprecision(2) << fixed;
    cout << item1 << " $" << setw(6) << price1 << endl;
    cout << item2 << " $" << setw(6) << price2 << endl;
    cout << endl;


    //lines up strings
    cout << setprecision(2) << fixed;
    cout << setw(15) << item1 << " $" << setw(6) << price1 << endl;
    cout << setw(15) << item2 << " $" << setw(6) << price2 << endl;
    cout << endl;


    //left aligning strings
    cout << setprecision(2) << fixed;
    cout << left << setw(15) << item1 << " $" << right << setw(6) << price1 << endl;
    cout << left << setw(15) << item2 << " $" << right << setw(6) << price2 << endl;
    cout << endl;

    //lining dollar sign with number
    int boxSize1, boxSize2, totalBox;
    const int ADDED_SPACE = 2;
    boxSize1 = static_cast<int>(log10(price1));
    boxSize2 = static_cast<int>(log10(price2));
    totalBox = boxSize1 + boxSize2 + ADDED_SPACE;

    cout << setprecision(2) << fixed;
    cout << left << setw(15) << item1 << right << setw(totalBox-boxSize1) << "$" << price1 << endl;
    cout << left << setw(15) << item2 << right << setw(totalBox-boxSize2) << "$" << price2 << endl;
    cout << endl;

    cin.get();
    return 0;
}

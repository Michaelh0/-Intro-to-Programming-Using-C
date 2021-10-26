// Michael Hom
//CS102 Laborator 6B Program B
// This program asks user for value and doubles the num
// by passing value through variables

#include <iostream>
using namespace std;

int getNum();
int doubleNum(int);

int main()
{
    //declare variables
    int number, newNum;

    number = getNum();
    newNum = doubleNum(number);

    cout << "That value doubled is " << newNum << endl;
    cin.ignore();
    cin.get();
    return 0;
}

int getNum ()
{
    int userNum;
    cout << "Enter number: ";
    cin >> userNum;
    return userNum;
}
int doubleNum (int value)
{
    value *= 2;
    return value;
}

// Michael Hom
// CS102 Laboratory 6B Program A
// This program gets number from user and doubles
// using reference variables

#include <iostream>
using namespace std;

void getNum (int &);
void doubleNum (int &);

int main()
{
    //declare variables
    int value;

    getNum(value);

    doubleNum(value);

    cout << "That value doubled is " << value << endl;
    cin.ignore();
    cin.get();
    return 0;
}

void getNum (int &userNum)
{
    cout << "Enter number: ";
    cin >> userNum;
}

void doubleNum (int & num)
{
    num *= 2;
}

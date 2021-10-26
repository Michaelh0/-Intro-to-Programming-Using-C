//Michael Hom
//CS102 Laboratory 5 Program A Part A
//This program allows the user to input integers until the user types -99
//Michael Hom
#include <iostream>
using namespace std;

int main()
{
    //declare variables
    int num,
        sum = 0,
        totalNum = 0;
    double average;

    //Get hours
    cout << "Michael Hom's Statistics Program\n";
    cout << "This is a program you can enter many integers.\n";
    cout << "To receive the number of integers you typed, \n";
    cout << "the sum, and the average, type -99.\n";
    cout << "Enter an integer: ";
    cin >> num;
    while (num != -99)
    {
        sum += num;
        totalNum++;
        cout << "Enter an integer: ";
        cin >> num;
    }
    if (totalNum)
    {
        average = static_cast<double>(sum) / totalNum;
        cout << "The number of numbers you entered is: " << totalNum << endl;
        cout << "The sum of numbers you entered is: " << sum << endl;
        cout << "The average value is: " << average << endl;
    }
    cin.ignore();
    cin.get();
    return 0;
}

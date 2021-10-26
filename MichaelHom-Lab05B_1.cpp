// Michael Hom
// CS102 Laboratory 5B Program 1
// This program raises the user's number to the powers of 0 through 10.
#include <iostream>
using namespace std;

int main()
{
    //declare variables
    int num;
    const int MIN_NUMBER = 2;
    cout << "This program will determine";
    cout << " all the factors of the number you selected.\n";
    cout << "Enter a number that is "<< MIN_NUMBER <<" or greater: ";
    cin >> num;

    while (num < MIN_NUMBER)
    {
        cout << num << " is not greater or equal to " << MIN_NUMBER << "." <<endl;
        cout << "Enter a number: ";
        cin >> num;
    }

    cout << "The divisors of "<< num <<" are\n";

    for (int divisor = 1; divisor <= num; divisor ++)
        if (num % divisor == 0)
            cout << divisor << endl;

    cout << "Coded By Michael Hom";
    cin.ignore();
    cin.get();

    return 0;
}

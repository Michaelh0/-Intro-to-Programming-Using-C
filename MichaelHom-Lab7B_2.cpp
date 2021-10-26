// Michael Hom
// CS102 Laboratory 7B Program B
// This program receives numbers from user
// using range loops and reference variables

#include <iostream>
using namespace std;

int main()
{
    // declare array
    const int SIZE = 5;
    int number[SIZE];
    // get values for array
    for (int &val : number)
    {
        cout << "Enter an integer: ";
        cin >> val;
    }
    // displays values in the array
    cout << "Here are the values you entered:\n";

    for (int val : number)
        cout << val << endl;
    cin.ignore();
    cin.get();
    return 0;
}

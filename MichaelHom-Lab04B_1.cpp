// Michael Hom
//CS102 Laboratory 4B Part 1
// The program display 1, 2, or 3, based on user's input
// using switch statements
#include <iostream>
using namespace std;

int main()
{
    int userNum;
    cout << "Enter one of the numbers 1, 2, or 3: ";
    cin >> userNum;

    switch(userNum)
    {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        default:
            cout << "The the number you entered was not 1, 2, or 3.\n";
            cout << "Please restart the program and try again.";

    }
    cout << "\nCoded by Michael Hom";
    cin.ignore();
    cin.get();

    return 0;
}

//Michael Hom
//CS102 Laboratory 4 Program A Part 4
//This program displays a response based on a letter grade.
#include <iostream>
using namespace std;

int main()
{
    // declare variables

    char choice;

    //output

    cout << "Enter a letter grade: ";
    cin >> choice;

    switch(choice)
    {
        case 'a':
        case 'A':
            cout << "Excellent\n";
            break;

        case 'b':
        case 'B':
            cout << "Above Average\n";
            break;

        case 'c':
        case 'C':
            cout << "Average\n";
            break;

        case 'd':
        case 'D':
        case 'f':
        case 'F':
            cout << "Below Average\n";
            break;

        default:
            cout << "The character that you typed in was not a letter grade.\n";
            cout << "Please restart the program and try again.\n";

    }

    cout << "\nCoded by Michael Hom";

    cin.ignore();
    cin.get();

    return 0;
}

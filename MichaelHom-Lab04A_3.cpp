//Michael Hom
//CS102 Laboratory 4 Program A Part 3
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

    if (choice == 'A' || choice == 'a')
        cout << "Excellent\n";
    else if (choice == 'B' || choice == 'b')
        cout << "Above Average\n";
    else if (choice == 'C' || choice == 'c')
        cout << "Average\n";
    else if (choice == 'D' || choice == 'd' || choice == 'F' || choice == 'f')
        cout << "Below Average\n";
    else
    {
        cout << "The character that you typed in was not a letter grade.\n";
        cout << "Please restart the program and try again.\n";
    }

    cout << "\nCoded by Michael Hom";

    cin.ignore();
    cin.get();

    return 0;
}

//Michael Hom
//CS102 Laboratory 4 Program A Part 1
//This program displays a menu.
#include <iostream>
using namespace std;

int main()
{
    // declare variables

    int choice;
    int months;
    double charges;

    // membership constants

    const double    ADULT = 40.0,
                    SENIOR = 30.0,
                    CHILD = 20.0;

    const int       ADULT_CHOICE = 1,
                    CHILD_CHOICE = 2,
                    SENIOR_CHOICE = 3,
                    QUIT_CHOICE = 4;

    //output menu options

    cout << "\t\tHealth Club Membership Menu\n\n";
    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit the Program\n\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == ADULT_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * ADULT;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == SENIOR_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * SENIOR;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == CHILD_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * CHILD;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == QUIT_CHOICE)
    {
        cout << "Quiting Program\n";
    }
    else
    {
        cout << "The valid choices are 1 through 4. Run the\n";
        cout << "program again and select one of those.\n";
    }

    cout << "\nCoded by Michael Hom";

    cin.ignore();
    cin.get();

    return 0;
}

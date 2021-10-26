// Michael Hom
//CS102 Laboratory 4B Part 2
// The program is a rewritten version of menu of formula
// using switch statements instead of if else/if statements

#include <iostream>
using namespace std;
int main()
{
    int selection;
    cout << "Which formula do you want to see?\n\n";
    cout << "1. Area of a circle\n";
    cout << "2. Area of a rectangle\n";
    cout << "3. Area of a cylinder\n";
    cout << "4. None of them!\n";
    cin >> selection;
    //selecting options
    switch (selection)
    {
        case 1:
            cout << "Pi times radius squared\n";
            break;
        case 2:
            cout << "Length times width\n";
            break;
        case 3:
            cout << "Pi times radius squared times height\n";
            break;
        case 4:
            cout << "Well! OK then, good bye!\n";
            break;
        default:
            cout << "Not good with numbers, eh?\n";
    }
    cout << "\nCoded by Michael Hom";
    cin.ignore();
    cin.get();

    return 0;
}

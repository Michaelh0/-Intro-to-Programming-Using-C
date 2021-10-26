// Michael Hom
//CS102 Laboratory 4B Part 3
// The program offers 3 options for a TV using if / else statements
#include <iostream>
using namespace std;

int main()
{
    int modelNum;

    cout << "Our TV's come in three models:\n";
    cout << "The 100, 200, and 300. Which one do you want? ";
    cin >> modelNum;

    //displays the model's features
    if (modelNum == 300 || modelNum == 200 || modelNum == 100)
        cout << "That model has the following features:\n";
    if (modelNum == 300)
        cout << "\tPicture-in-a-picture.\n";
    if (modelNum == 300 || modelNum == 200)
        cout << "\tStereo sound.\n";
    if (modelNum == 300 || modelNum == 200 || modelNum == 100)
        cout << "\tRemote control.\n";
    else
        cout << "You can only choose the 100, 200, or 300.\n ";
    cin.ignore();
    cin.get();

    return 0;
}

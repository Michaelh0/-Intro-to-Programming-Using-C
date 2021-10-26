//Michael Hom
//CS102 Laboratory 3 Program A
//This program creates a story using strings inputted by user

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    //declare variables
    string name;

    cout << "Coded by Michael Hom\n";

    //input variables
    cout << "Enter your full name: ";
    cin >> setw(10)>> name;


    //output story
    cout << "\nThere once was a person named " << name << " who lived in  city "<< endl;

    cin.ignore();
    cin.get();

    return 0;
}

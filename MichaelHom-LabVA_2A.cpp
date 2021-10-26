// Michael Hom
// CS102 Laboratory 6A Program B Part 1
// This program reads a number of strings
// and creates a file containing them

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    // declare variables
    int numberOfStrings;
    string word;

    //create file
    ofstream outputFile;
    outputFile.open("Planet.txt");

    cout << "Enter the number of strings you want to type in: ";
    cin >> numberOfStrings;
    cin.ignore();

    for (int count = 1; count <= numberOfStrings; count++)
    {
        cout << "Enter your string: ";
        cin >> word;
        outputFile << word << endl;
    }
    outputFile.close();
    cout << "File Planet.txt was created";
    cin.ignore();
    cin.get();
    return 0;
}

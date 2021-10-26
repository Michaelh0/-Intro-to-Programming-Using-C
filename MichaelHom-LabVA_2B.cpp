// Michael Hom
// CS 102 Laboratory 6A Program B Part 1
// This program reads the file Planet.txt
// which contains strings

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //declare variables
    string word;

    //input file
    ifstream inputFile;
    inputFile.open("Planet.txt");

    if(inputFile)
    {
        while (inputFile >> word)
            cout << word << endl;
    }
    else
        cout << "Error File Not Found";
    cin.get();
    return 0;
}

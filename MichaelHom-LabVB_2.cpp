// Michael Hom
// CS102 Laboratory 6B Program B
// This program gets the frequency and
// outputs the color and frequency

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //declare variables
    double frequency;
    string color;

    ifstream inputFile;
    inputFile.open("colorFrequency.txt");

    if (inputFile)
    {
        while (inputFile >> color)
        {
            inputFile >> frequency;
            cout << "The frequency of " << color
            << " is " << frequency << " THz\n";
        }
    }
    else
        cout << "Error file not found.";

    inputFile.close();
    cin.get();
    return 0 ;
}

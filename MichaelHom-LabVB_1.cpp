// Michael Hom
// CS102 Laboratory 6B Program A
// This program takes wavelength from one file
// and converts it into frequency and puts it in another file.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    //declare variables
    int lambda;
    double frequency;
    string color;
    const double speedLight = 299792.46;

    ifstream inputFile;
    inputFile.open("myfile.txt");

    ofstream outputFile;
    outputFile.open("colorFrequency.txt");

    if (inputFile)
    {
        while(inputFile >> lambda)
        {
            frequency = speedLight / lambda;
            inputFile >> color;
            cout << color << " " << frequency << endl;
            outputFile << color << " " << frequency << endl;
        }
    }
    else
        cout << "Error file not read.";

    cout << "Data has been transferred from myfile.txt to colorFrequency.txt.";

    inputFile.close();
    outputFile.close();
    cin.get();
    return 0;
}

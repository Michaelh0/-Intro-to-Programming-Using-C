// Michael Hom
// CS102 Laboratory 6A Program A Part 2
// This program reads Sales.txt created in the previous program

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //declare variables
    double num;

    //input file
    ifstream inputFile;
    inputFile.open("Sales.txt");

    if (inputFile)
    {
        while (inputFile >> num)
            cout << num << endl;
    }
    else
        cout << "Error. File was not read.";
    inputFile.close();
    cin.get();
    return 0;
}

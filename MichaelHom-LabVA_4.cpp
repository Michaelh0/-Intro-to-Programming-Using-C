// Michael Hom
// CS102 Laboratory 6A Program D
// This program determines the greatest and least

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //declare variables
    int num, greatest = 0, least = 10000;

    //input file
    ifstream inputFile;
    inputFile.open("Randnums.txt");

    if (inputFile)
    {
        while (inputFile >> num)
        {
            greatest = (num > greatest) ? num : greatest;
            least = (num < least) ? num : least;

        }
        cout << "The greatest is " << greatest << endl;
        cout << "The least is " << least << endl;
    }
    else
        cout << "Error File Was Not Read.";

    inputFile.close();
    cin.get();

    return 0;

}

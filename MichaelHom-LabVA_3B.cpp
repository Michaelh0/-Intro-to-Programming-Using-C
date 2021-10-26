// Michael Hom
// CS102 Laboratory 6A Program C Part 2
// This program calculates the mean of 1000
// psuedo random numbers

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //declare variables
    int num;
    double sum = 0, mean;
    int count = 0;

    //input random numbers
    ifstream inputFile;
    inputFile.open("Randnums.txt");

    if (inputFile)
    {
        while (inputFile >> num)
        {
            sum += num;
            count++;
        }
        mean = static_cast <double>(sum) / count;
        cout << "The mean is " << mean << endl;
    }
    else
        cout << "Error Not Reading the File.";
    inputFile.close();
    cin.get();
    return 0 ;
}

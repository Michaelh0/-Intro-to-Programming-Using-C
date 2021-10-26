// Michael Hom
// CS102 Laboratory 6A Program C Part 2
// This program creates a file with 1000 numbers

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //declare variables
    int num;
    const int NUM_OF_NUM = 100;
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10000;

    //create file
    ofstream outputFile;
    outputFile.open("Randnums.txt");

    unsigned int seed = time(0);

    srand(seed);

    for (int count = 1; count <= NUM_OF_NUM; count++)
    {
        num = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;

        outputFile << num << endl;
    }
    outputFile.close();
    cout << "File Randnums.txt has been created.";
    cin.get();
    return 0;
}

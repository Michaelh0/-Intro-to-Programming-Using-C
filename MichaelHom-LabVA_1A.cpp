// Michael Hom
// CS102 Laboratory 6A Program A Part 1
// This program creates a file containing
// the sales for a number of business days

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    //declare variables

    int businessDays, count = 1;
    double sales;

    //create file

    ofstream outputFile;
    outputFile.open("Sales.txt");

    cout << "Enter the number of business days: ";

    cin >> businessDays;

    for (; count <= businessDays; count++)
    {
        cout << "Enter Sales for day " << count << " : ";
        cin >> sales;
        outputFile << sales << endl;
    }
    outputFile.close();
    cout << "File Sales.txt has been created.";
    cin.ignore();
    cin.get();
    return 0;
}

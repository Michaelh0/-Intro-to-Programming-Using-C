// Michael Hom
// CS102 Laboratory 6B Program C
// This program calculates employee pay increase

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    //declare variables
    string infileName, outfileName, employeeName;
    double employeePay;
    double employeeIncrease;

    cout << "Enter the name of the input file: ";
    cin >> infileName;

    ifstream inputFile;
    inputFile.open(infileName);

    while (!inputFile.is_open())
    {
        cout << "Error. File does not exist. Try Again.\n";
        cout << "Enter the name of the input file: ";
        cin >> infileName;
        inputFile.open(infileName);

    }
    cout << "Enter the name of the output file: ";
    cin >> outfileName;

    ofstream outputFile;
    outputFile.open(outfileName);

    cout << "Salary Increase Report:\n";
    cout << left << setw(15) << "Employee";
    cout << setw(15) << "New Salary" << endl;

    outputFile << "Salary Increase Report:\n";
    outputFile << left << setw(15) << "Employee";
    outputFile << setw(15) << "New Salary" << endl;
    while (inputFile >> employeeName)
    {
        inputFile >> employeePay;
        inputFile >> employeeIncrease;

        employeePay = employeePay * (1 + (employeeIncrease / 100));
        cout << setprecision(2) << fixed;
        cout << left << setw(15) <<employeeName << " " << setw(15) <<employeePay << endl;
        outputFile << setw(15) <<employeeName << " " << setw(15) <<employeePay << endl;
    }

    cout << "\nThe data was sent over from "<< infileName << " to "<< outfileName;

    inputFile.close();
    outputFile.close();
    cin.ignore();
    cin.get();
    return 0;

}

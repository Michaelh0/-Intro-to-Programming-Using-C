// Michael Hom
// CS102 Laboratory 12B Program A
// This program creates a file with four different fields
// and using structure and binary files

#include <iostream>
#include <fstream>
using namespace std;

const int DIVISION_SIZE = 6;
const int CITY_SIZE = 50;

struct SalesFigures
{
    char division[DIVISION_SIZE];
    int quarter;
    double sales;
    char city[CITY_SIZE];
};

int main()
{
    SalesFigures record;
    char again;

    fstream sales("sales.dat", ios::out | ios::binary | ios::app);

    do
    {
        // Get data about a person.
        cout << "Enter the following data about your sales\n";
        cout << "Division: ";
        cin >> record.division;
        cout << "Quarter: ";
        cin >> record.quarter;
        cout << "Sales: ";
        cin >> record.sales;
        cin.ignore();
        cout << "City: ";
        cin.getline(record.city,CITY_SIZE);
        sales.write(reinterpret_cast<char *>(&record), sizeof(record));
        cout << "Do you want to enter another record (y / n)";
        cin >> again;
        cin.ignore(); // Skip over the remaining newline.
    } while (again == 'Y' || again == 'y');
    // Close the file.
    sales.close();
    return 0;
}

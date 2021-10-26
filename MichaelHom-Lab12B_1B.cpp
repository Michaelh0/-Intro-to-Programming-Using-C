// Michael Hom
// CS102 Laboratory 12B Program B
// This program displays the sales inputted from another program

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

    fstream sales("sales.dat", ios::in | ios::binary);

    if (!sales)
        cout << "File did not open or exist.";
    else
    {
        cout << "Here are the sales figures so far: \n";

        sales.read(reinterpret_cast<char *>(&record),sizeof(record));
        while (!sales.eof())
        {
            cout << "Division Name: ";
            cout << record.division << endl;
            cout <<"Quarter: ";
            cout << record.quarter << endl;
            cout <<"Quarterly Sales: ";
            cout << record.sales << endl;
            cout <<"City: ";
            cout << record.city << endl;
            sales.read(reinterpret_cast<char *>(&record),sizeof(record));
        }
    }
    sales.close();
    cin.get();
    return 0;
}

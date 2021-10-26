
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

struct record
{
    char name[50];
    int quarter;
    double sales;
    char city[50];
};

int main()
{
    int choice1;
    char choice2;

    cout << "                 Main  Menu                 " << endl;
    cout << "********************************************" << endl;
    cout << "1. Enter data " << endl;
    cout << "2. Display data " << endl;
    cout << "********************************************" << endl;
    do
    {
        cout << endl;
        cout << "Enter a menu choice: ";
        cin >> choice1;
        cin.ignore();
        cout << endl;


        switch (choice1)
        {
        case 1:
                record division;
                char choice;
                do
                {
                    fstream divisions("divisions.dat", ios::out | ios::binary | ios::app);
                    cout << "Enter the following data about a division:\n";
                    cout << "Name: ";
                    cin.getline(division.name,50);
                    cout << "Quarter: ";
                    cin >> division.quarter;
                    cin.ignore();
                    cout << "Quarterly sales: ";
                    cin >> division.sales;
                    cin.ignore();
                    cout << "City: ";
                    cin.getline(division.city,50);
                    divisions.write(reinterpret_cast<char *>(&division), sizeof(division));
                    divisions.close();
                    cout << "Do you want to enter another record? ";
                    cin >> choice;
                    cin.ignore();
                }
                while (choice == 'Y' || choice == 'y');
                cout << endl;
                cout << "Would you like to do something else? (y/n): ";
                cin >> choice2;
                cin.ignore();
                cout << endl;
                    break;
        case 2:
                fstream divisions("divisions.dat", ios::in | ios::binary);
                if (!divisions)
                    cout << "File did not open or exist.";
                else
                {
                    record division;
                    cout << "Here are the sales figures so far: \n";
                    divisions.read(reinterpret_cast<char *>(&division),sizeof(division));
                    while (!divisions.eof())
                    {
                        cout << "Division Name: ";
                        cout << division.name << endl;
                        cout <<"Quarter: ";
                        cout << division.quarter << endl;
                        cout <<"Quarterly Sales: ";
                        cout << division.sales << endl;
                        cout <<"City: ";
                        cout << division.city << endl;
                        divisions.read(reinterpret_cast<char *>(&division),sizeof(division));
                    }
                    divisions.close();
                }
                cout << endl;
                cout << "Would you like to do something else? (y/n): ";
                cin >> choice2;
                cin.ignore();
                cout << endl;
                    break;
        }
    }
    while (choice2 == 'y' || choice2 == 'Y');
    if (choice2 == 'n' || choice2 == 'N')
        cout << "Bye!" << endl;
    return 0;
}

// Michael Hom
//CS102 Laboratory 6C Program A
// This program grabs data from stock.txt
// and either stock profolio or profit /loss

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void displayStock ();
void displayProfit ();
void displayMenu(char &);
int main()
{
    //declare variables
    char stay;
    do
    {
        displayMenu(stay);
    }while (stay == '1' || stay == '2');
    cin.ignore();
    cin.get();
    return 0;
}

void displayMenu(char &choice)
{
    cout << "\tMenu Options \n";
    cout << "1\tDisplay Stock Portfolio \n";
    cout << "2\tDisplay Profit/Loss \n";
    cout << "3\tQuiting \n";
    cout << "Enter menu option: ";
    cin >> choice;
    switch (choice)
    {
        case '1':
            displayStock();
            cout << "Press Enter to continue.";
            cin.ignore();
            cin.get();
            break;
        case '2':
            displayProfit();
            cout << "Press Enter to continue.";
            cin.ignore();
            cin.get();
            break;
        case '3':
            cout << "Quitting...";
            break;
        default:
            cout << "Input was not 1, 2, or 3. Stay to retry.";
    }
}


void displayStock ()
{
    string stock;
    int shareNum;
    double purchase, current;
    ifstream inputFile;

    inputFile.open("stock2.txt");
    if (!inputFile)
    {
        cout << "File not read.";
    }
    else
    {
        cout << left << setw(15) << "Stock Name" << setw(15) << "# Shares";
        cout << setw(15) << "Purchase Price" << setw(15) << "Current Price" << endl;
        getline(inputFile, stock, '#');
        while (!inputFile.eof())
        {
            inputFile >> shareNum;
            inputFile >> purchase;
            inputFile >> current;
            cout << fixed << showpoint << setprecision(2);
            cout << left << setw(15)<< stock << setw(10)<< shareNum;
            cout << right << setw(15) << purchase << setw(15) << current << endl;
            inputFile.ignore();
            getline(inputFile, stock, '#');

        }
    }
    inputFile.close();
}
void displayProfit ()
{
    string stock;
    int shareNum;
    double purchase, current, profitLoss, sum = 0;
    ifstream inputFile;
    inputFile.open("stock.txt");
    if (!inputFile)
    {
        cout << "File not read.";
    }
    else
    {
        cout << left << setw(12) << "Stock Name" << right << setw(12) << "Profit(Loss)\n";
        getline(inputFile, stock, '#');
        while (!inputFile.eof())
        {
            inputFile >> shareNum;
            inputFile >> purchase;
            inputFile >> current;
            profitLoss = shareNum * (current - purchase);
            sum += profitLoss;
            cout << fixed << showpoint << setprecision(2);
            cout << left << setw(12) << stock << right << setw(12) << profitLoss << endl;
            inputFile.ignore();
            getline(inputFile, stock, '#');
        }
        cout << endl << left << setw(12)<<"Total value" << right << setw(12) << sum << endl;
    }
    inputFile.close();
}

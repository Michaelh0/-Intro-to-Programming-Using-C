// Michael Hom
// CS102 Laboratory 6B Program D
// This program translates store sales into revenue and profit

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    string item_name, infileName, outfileName;
    int qty_sold;
    double cost, price, revenue, profit, totalCost, totalRevenue = 0, totalProfit = 0;

    cout << "Enter input file name: ";
    cin >> infileName;

    ifstream inputFile;
    inputFile.open(infileName);

    while (!inputFile.is_open())
    {
        cout << "Error " << infileName << " does not exist.\n";
        cout << "Reenter input file name: ";
        cin >> infileName;
        inputFile.open(infileName);
    }
    cout << "Enter output file name: ";
    cin >> outfileName;

    ofstream outputFile;
    outputFile.open(outfileName);

    cout << left << setw(15)<< "Product" << setw(15) << "Revenue" << setw(15) << "Profit" << endl;
    outputFile << left << setw(15)<< "Product" << setw(15) << "Revenue" << setw(15) << "Profit" << endl;

    cout << setprecision(2)<< fixed;
    outputFile << setprecision(2)<< fixed;

    while(inputFile >> item_name)
    {
        inputFile >> qty_sold;
        inputFile >> cost;
        inputFile >> price;

        revenue = price * qty_sold;
        totalCost = cost * qty_sold;
        profit = revenue - totalCost;

        totalRevenue += revenue;
        totalProfit += profit;

        cout << left << setw(15) << item_name;
        cout << setw(15) << revenue << setw(15) << profit << endl;

        outputFile << setw(15) << item_name;
        outputFile << setw(15) << revenue << setw(15)<< profit << endl;
    }

    cout << endl << setw(15) << "Totals" << setw(15) << totalRevenue << setw(15) << totalProfit << endl;
    outputFile << endl << setw(15) << "Totals" << setw(15) << totalRevenue << setw(15) << totalProfit << endl;

    cout << "The data was sent over from " << infileName << " to " << outfileName;

    inputFile.close();
    outputFile.close();
    cin.ignore();
    cin.get();
    return 0;
}

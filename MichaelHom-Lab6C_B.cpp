// Michael Hom
// CS102 Laboratory 6C Program B
// This program creates a file for stock.txt

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void getInput(ofstream &);
int main()
{
    ofstream outputFile;
    outputFile.open("stock2.txt");
    char stay;
    cout << "Do you want to add a stock (Y / N)?";
    cin >> stay;
    cin.ignore();
    while (stay == 'y' || stay == 'Y')
    {
        getInput(outputFile);
        cout << "Do you want to add another stock (Y / N)?";
        cin >> stay;
        cin.ignore();
    }
    outputFile.close();
    cin.ignore();
    cin.get();
    return 0;
}
void getInput(ofstream &file)
{
    string stock;
    int shareNum;
    double purchase, current;
    cout << "what is the name of stock? ";
    getline(cin, stock);
    cout << "what is the number of shares? ";
    cin >> shareNum;
    cout << "what is the purchase price? ";
    cin >> purchase;
    cout << "what is the current price? ";
    cin >> current;
    file << stock << "#";
    file << shareNum << " ";
    file << purchase << " ";
    file << current << "\n";
}

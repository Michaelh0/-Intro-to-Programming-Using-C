// Michael Hom
//CS102 Laboratory 2 Program A
//Rewriting Mismatched Code

#include <iostream>
using namespace std;

int main()
{
    //declare variables
    int shares = 220;
    double avgPrice = 14.67, total;

    //Calculate total after selling
    total = shares * avgPrice;

    //output variables
    cout << "There were " << shares << " shares sold at $" << avgPrice << " per share.\n";
    cout << "The total after selling the shares is $" << total << ".\n";

    cin.get();
    return 0;
}

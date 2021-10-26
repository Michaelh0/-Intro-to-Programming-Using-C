//Michael Hom
//CS-102 Laboratory 2 Program A
//Converting Farenheit to Celsius

#include <iostream>
using namespace std;

int main()
{
    //declare variables
    double fTemp, cTemp;

    //get inputs
    cout << "Enter temp in farenheit: ";
    cin >> fTemp ;

    //convert to celsius
    cTemp = (fTemp - 32)* 5 / 9;

    //display output
    cout << fTemp << " farenheit = " << cTemp << " celsius" << endl;

    cin.ignore();
    cin.get();
    return 0;
}

/*
fTemp = 80 , cTemp = 26.6667
*/

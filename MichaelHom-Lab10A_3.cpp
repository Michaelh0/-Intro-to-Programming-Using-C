// Michael Hom
// CS102 Laboratory 10A Program C
// This program enters commas in thousand places

#include <iostream>
#include <string>
using namespace std;

string format(unsigned &);

int main ()
{

    unsigned input;
    string output;
    // Get the dollar amount from the user.
    cout << "Enter a integer: ";
    cin >> input;

    output = format(input);

    cout << "Here is the amount formatted:\n";
    cout << output << endl;

    cin.ignore();
    cin.get();
    return 0;
}

string format(unsigned &integer)
{
    string str = to_string(integer);
    int dp;

    dp = str.length();

    if (dp > 3) // Insert commas
    {
        for (int x = dp - 3; x > 0; x -= 3)
            str.insert(x, ",");
    }
    return str;
}

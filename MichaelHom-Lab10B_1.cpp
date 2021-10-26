// Michael Hom
// CS102 Laboratory 10B Program A
// This program converts a array of char to array of string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 11;
    char charArray[SIZE][25] = { "Joe Looney, 555-0097",
                                    "Geri Palmer, 555-8787",
                                    "Li Chen, 555-1212",
                                    "Holly Gaddis, 555-8878",
                                    "Sam Wiggins, 555-0998",
                                    "Alejandra Cruz, 555-1223",
                                    "Bob Kain, 555-8712",
                                    "Tim Haynes, 555-7676",
                                    "Warren Gaddis, 555-9037",
                                    "Jean James, 555-4939",
                                    "Ron Palmer, 555-2783"};

    string stringArray[SIZE];
    for (int i = 0; i < SIZE; i++)
        stringArray[i] = charArray[i];

    cout << "\nHere is the array of char.\n";
    for (int i = 0; i < SIZE; i++)
        cout << charArray[i] << endl;

    cout << "\nHere is the array of string.\n";
    for (int i = 0; i < SIZE; i++)
        cout << stringArray[i] << endl;

    cin.get();
    return 0;
}

// Michael Hom
// CS102 Laboratory 10A Program B
// This program converts array of string to array of char

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 11;
    string stringArray[SIZE] = { "Joe Looney, 555-0097",
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

    int maxSize = stringArray[0].length();
    for (int i = 1; i < SIZE; i++)
    {
        if (stringArray[i].length() > maxSize)
            maxSize = stringArray[i].length();
    }
    char charArray[SIZE][maxSize + 1];
    int count;
    for (int i = 0; i < SIZE; i++)
    {
        for (count = 0; count < stringArray[i].length() + 1; count++)
            charArray[i][count] = stringArray[i][count];
    }

    cout << "Here is the array of string.\n";
    for (int i = 0; i < SIZE; i++)
        cout << stringArray[i] << endl;

    cout << "Here is the array of char.\n";
    for (int i = 0; i < SIZE; i++)
        cout << charArray[i] << endl;


    cin.get();
    return 0;
}

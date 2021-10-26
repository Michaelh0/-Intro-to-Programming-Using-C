// Michael Hom
// CS102 Laboratory 10A Program A
// This program finds the names using c strings

#include <iostream>
#include <cstring>
using namespace std;


int main ()
{
    const int SIZE = 11;
    const int NUM_OF_CHAR = 80;
    char names[SIZE][NUM_OF_CHAR] = {"Alejandra Cruz, 555-1223",
                                    "Joe Looney, 555-0097",
                                    "Geri Palmer, 555-8787",
                                    "Li Chen, 555-1212",
                                    "Holly Gaddis, 555-8878",
                                    "Sam Wiggins, 555-0998",
                                    "Bob Kain, 555-8712",
                                    "Tim Haynes, 555-7676",
                                    "Warren Gaddis, 555-9037",
                                    "Jean James, 555-4939",
                                    "Ron Palmer, 555-2783"};

    char input[NUM_OF_CHAR];

    char *strPtr = nullptr;
    int index;
    bool found = false;

    cout << "Enter the name of someone: ";

    cin.getline(input,NUM_OF_CHAR - 1);

    for (index = 0; index < SIZE; index++)
    {
        strPtr = strstr(names[index], input);
        if (strPtr != nullptr)
        {
            cout << names[index] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "No matching index.";

    cin.ignore();
    cin.get();
    return 0;
}

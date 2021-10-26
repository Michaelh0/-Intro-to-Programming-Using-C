// Michael Hom
// CS102 Laboratory 9A Program B / D
// This program uses smart pointers
// so you don't have to delete the pointer at the end

#include <iostream>
// BEFORE #include <memory>
using namespace std;

int main ()
{
    // declare variables
    int max;
    int *ptr = nullptr;
    // Get the numbers of values stored

    cout << "How many numbers do you want to enter?";
    cin >> max;

    // Define a unique_ptr smart pointer, pointing
    // to a dynamically allocated array of ints.

    // BEFORE unique_ptr<int[]> ptr( new int [max]);

    ptr = new int[max];

    // Get values for the array.
    for (int index = 0; index < max; index++)
    {
        cout << "Enter an integer number: ";
        cin >> ptr[index];
    }

    // Display the values in the array.

    cout << "Here are the values you entered: \n";
    for (int index = 0; index < max; index++)
        cout << ptr[index] << endl;

    delete [] ptr;

    ptr = nullptr;

    cin.ignore();
    cin.get();
    return 0;
}

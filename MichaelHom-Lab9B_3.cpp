// Michael Hom
// CS102 Laboratory 9B Program A
// This program reverses he order of an array wth 50 nums
// using dynamic pointers

#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
int *reverseArray(int[], int);
void displayArray(const int[], int);
const int SIZE1 = 50;
int main()
{
    // Array of unsorted values
    int array1[SIZE1];
    int count = 0;
    int arraySize, maxIndex;

    ifstream inputFile;
    inputFile.open("GradeList.txt");

    while (count < SIZE1 && inputFile >> array1[count])
        count++;
    inputFile.close();

    // Define pointer for the reversed array.
    int *dup1 = nullptr;

    // Reverse the array.
    dup1 = reverseArray(array1, count);
    // Display the original array.
    cout << "Here is the original array contents:\n";
    displayArray(array1, count);

    // Display the new array.
    cout << "\nHere is the reversed array:\n";
    displayArray(dup1, count);

    cin.ignore();
    cin.get();

    // Free the dynamically allocated memory and
    // set the pointer to 0.
    delete [] dup1;
    dup1 = nullptr;
    return 0;
}
int *reverseArray(const int array [], int counter)
{
    int *array1 = nullptr;
    array1 = array;
    int *array2 = nullptr;
    array2 = new int[counter];

    for (int i = 0; i < counter; array2++, array1--, i++)
        *array2 = *(array1 + counter - 1);
    array2 -= counter;
    array1 = nullptr;
    return array2;
}
void displayArray(int array[], int counter)
{
    for (int i = 0;i < counter; array++,i++)
        cout << *array << " ";
    array -= counter;
}


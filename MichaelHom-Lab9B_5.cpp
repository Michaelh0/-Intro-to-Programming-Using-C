// Michael Hom
// CS102 Laboratory 9B Program A
// This program reverses he order of an array wth 50 nums
// using arrays and dynamic pointers

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Function prototype
int *reverseArray(vector <int> &, int);
void displayArray(const int [], int);
void displayVector(vector <int> &, int);
int main()
{
    // Array of unsorted values
    vector <int> array;
    int count = 0, temp;

    ifstream inputFile;
    inputFile.open("GradeList.txt");

    while (inputFile >> temp)
    {
        array.push_back(temp);
        count++;
    }

    inputFile.close();

    int *dup1 = nullptr;

    // Define pointer for the reversed array.
    dup1 = reverseArray(array, count);
    // Reverse the array.

    // Display the original array.
    cout << "Here is the original array contents:\n";
    displayVector(array, count);

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
int *reverseArray(vector <int> &array, int counter)
{
    int *array1 = nullptr;
    array1 = new int[counter];
    int *array2 = nullptr;
    array2 = new int[counter];

    for (int i = 0; i < counter;i++)
        array1[i] = array[i];

    for (int i = 0; i < counter; array2++, array1--, i++)
        *array2 = *(array1 + counter - 1);
    array2 -= counter;
    array1 = nullptr;
    return array2;
}
void displayArray(const int array[], int counter)
{
    for (int i = 0;i < counter; i++)
        cout << array[i] << " ";
}

void displayVector(vector <int> &array, int counter)
{
    for (int i = 0;i < counter; i++)
        cout << array[i] << " ";
}

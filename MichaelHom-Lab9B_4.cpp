// Michael Hom
// CS102 Laboratory 9B Program A
// This program reverses he order of an array wth 50 nums
// using dynamic pointers

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Function prototype
int *reverseArray(vector <int> &, int);
void displayVector(vector <int> &, int);
void displayArray(const int [], int);
const int SIZE1 = 50;
int main()
{
    // Array of unsorted values
    vector <int> array1;
    int count = 0, temp;

    ifstream inputFile;
    inputFile.open("GradeList.txt");

    while (inputFile >> temp && count < SIZE1)
    {
        array1.push_back(temp);
        count++;
    }

    inputFile.close();

    // Define pointer for the reversed array.
    int *dupl = nullptr;
    // Reverse the array.
    dupl = reverseArray(array1, count);
    // Display the original array.
    cout << "Here is the original array contents:\n";
    displayVector(array1, count);
    // Display the new array.
    cout << "\nHere is the reversed array:\n";
    displayArray(dupl, count);
    cin.ignore();
    cin.get();

    // Free the dynamically allocated memory and
    // set the pointer to 0.

    delete [] dupl;
    dupl = nullptr;

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

void displayVector(vector <int> &array, int counter)
{
    for (int i = 0;i < counter; i++)
        cout << array[i] << " ";
}

void displayArray(int array[], int counter)
{
    for (int i = 0;i < counter; i++, array++)
        cout << *array << " ";
    array -= counter;
}

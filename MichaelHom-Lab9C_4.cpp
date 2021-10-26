// Michael Hom
// CS102 Laboratory 9C Program A
// This program sorts using pointers

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void arrSelectSort (string *[], int);
void showArray(const string [], int);
void showArrPtr (string *[], int);

int main()
{
    const int NUM_DONATIONS = 15;
    int count = 0;

    ifstream inputFile;
    inputFile.open("RandomList.txt");

    string donations[NUM_DONATIONS] = { "The", "Woods", "Are", "Lovely", "Dark",
                                        "And", "Deep", "But", "I", "Have",
                                        "Promises", "To", "Keep", "Robert", "Frost" };
    string *arrPtr[NUM_DONATIONS] = {nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr};

    count = NUM_DONATIONS;

    for (int i = 0; i < count; i++)
        arrPtr[i] = &donations[i];

    arrSelectSort(arrPtr, count);

    cout << "The words in the original order: \n";
    showArray(donations, count);

    cout << "The words in the ascending order: \n";
    showArrPtr(arrPtr, count);

    cin.get();

    return 0;
}

void arrSelectSort (string *arr[], int size)
{
    int startScan, minIndex;
    string *minElem;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];

        for (int index = (startScan + 1); index < size; index++)
        {
            if (*(arr[index]) < *minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

void showArray(const string arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

void showArrPtr(string *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}


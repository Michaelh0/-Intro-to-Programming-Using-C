// Michael Hom
// CS102 Laboratory 9C Program A
// This program sorts using pointers

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void arrSelectSort (int *[], int);
void showArray(const int [], int);
void showArrPtr (int *[], int);
void showMedian (int *[], int);

int main()
{
    const int NUM_DONATIONS = 30;
    int count = 0;

    ifstream inputFile;
    inputFile.open("RandomList.txt");

    int donations[NUM_DONATIONS];
    int *arrPtr[NUM_DONATIONS] = {nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr};

    while (inputFile >> donations[count] && count < NUM_DONATIONS)
        count++;

    for (int i = 0; i < count; i++)
        arrPtr[i] = &donations[i];

    arrSelectSort(arrPtr, count);

    cout << "The donations in the original order: \n";
    showArray(donations, count);

    cout << "The donations in the ascending order: \n";
    showArrPtr(arrPtr, count);

    showMedian(arrPtr, count);

    cin.get();

    return 0;
}

void arrSelectSort (int *arr[], int size)
{
    int startScan, minIndex;
    int *minElem;

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

void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}

void showMedian(int *arr[], int size)
{
    cout << "The median is ";
    cout << setprecision(2) << fixed;
    if (size % 2 == 0)
        cout << (*(arr[size/2]) + *(arr[size/2 - 1])) / 2.0;
    else
        cout << *(arr[(size-1)/2]);

}


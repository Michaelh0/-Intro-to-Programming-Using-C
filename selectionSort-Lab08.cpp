// Michael Hom
// CS102 Laboratory 8A Program A
// This program will selection sort number from 1000 to 300,000
// using arrays

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <chrono>
using namespace std;
void selectionSort(vector<int> &,int num);
int bigRand(int, int);
void showStats(vector<int> &,int num);
const int MAX_NUM = 300000; // This you will change
const int MAX_VALUE = 100000000;
const int MIN_VALUE = 0;

int main()
{
    vector<int>a(MAX_NUM);
    int i;
    int elapsed_msecs;
    unsigned seed = time(0);
    srand(seed);
    for(i=0;i<MAX_NUM;i++)
        a[i]=bigRand(MAX_VALUE, MIN_VALUE);
    cout << "The clock has now started:" << endl << endl;
    auto started = chrono::high_resolution_clock::now(); // Starts the clock
    selectionSort(a,MAX_NUM);
    auto done = chrono::high_resolution_clock::now(); // Stops the clock
    elapsed_msecs = chrono::duration_cast<chrono::milliseconds>(done-started).count();
    cout << "Elapsed time = " << elapsed_msecs << " milliseconds." << endl;
    showStats(a,MAX_NUM);
    cin.get();
    return 0;
}

void selectionSort(vector<int> &array, int size)
{
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan ;
        minValue = array[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
    }
}

int bigRand(int upper, int lower)
{
    const int twoToFifteenth = 32768;
    int rand_num, rand_num1, rand_num2, randnum;
    rand_num1 = 1 + rand() ;
    rand_num2 = rand() ;
    rand_num = twoToFifteenth*rand_num1 + rand_num2;
    randnum = rand_num%(upper - lower) + lower;
    return randnum;
}

void showStats(vector <int> &bigV,int size)
{
    int i;
    int smallest = bigV[0];
    int largest = bigV[0];
    long long total = bigV[0];
    for (i=1; i < size; i++)
    {
        largest = largest > bigV[i] ? largest : bigV[i];
        smallest = smallest < bigV[i] ? smallest : bigV[i];
        total += bigV[i];
    }
    cout << "\n" << "Number of numbers: " << size << endl;
    cout << "\n" << "Mean of numbers: " << total/size << endl;
    cout << "\n" << "Median number: " << bigV[size/2] << endl;
    cout << "\n" << "Smallest number: " << smallest << endl;
    cout << "\n" << "Largest number: " << largest << endl;
}

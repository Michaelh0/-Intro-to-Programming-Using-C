// Michael Hom
// CS102 Laboratory 8B Program A
// This program looks for 99,999,999 using linear search and binary search

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <chrono>
#include <vector>
using namespace std;

void quick_sort(vector<int> &, int, int);
int partition(vector<int> &, int, int);
int bigRand(int, int);
void showStats(vector<int> &, int);
int searchList(vector<int> &, int, int);
int binarySearch(vector<int> &, int, int);


const int MAX_NUM = 100000000;
const int MAX_VALUE = 100000000;
const int MIN_VALUE = 0;

int main()
{
    int num = 99999999, number;
    vector<int>a(MAX_NUM);
    int elapsed_msecs, i;
    unsigned seed = time(0);
    srand(seed);
    for(i=0;i<MAX_NUM;i++)
        a[i]=bigRand(MAX_VALUE, MIN_VALUE);
    cout << "The clock has now started:" << endl << endl;
    auto started = chrono::high_resolution_clock::now(); // Starts the clock
    quick_sort(a,0,MAX_NUM-1);
    auto done = chrono::high_resolution_clock::now(); // Stops the clock
    elapsed_msecs = chrono::duration_cast<chrono::milliseconds>(done-started).count();
    //number = searchList(a,MAX_NUM,num);
    number = binarySearch(a,MAX_NUM,num);
    cout << "Elapsed time = " << elapsed_msecs << " milliseconds." << endl;
    if (number == -1)
        cout << "Did not find " << num;
    cin.get();
    return 0;
}

int bigRand(int upper, int lower)
{
    const int twoToFifteenth = 32768;
    int rand_num, rand_num1, rand_num2, randnum;
    int top = 32768;
    rand_num1 = 1 + rand() ;//% top; // Check this out
    rand_num2 = rand() ;//% top;
    rand_num = twoToFifteenth*rand_num1 + rand_num2;
    randnum = rand_num%(upper - lower) + lower;
    return randnum;
}

void quick_sort(vector<int> & a,int k,int u)
{
    int j;
    if(k<u)
    {
        j=partition(a,k,u);
        quick_sort(a,k,j-1);
        quick_sort(a,j+1,u);
    }
}

int partition(vector<int> & a,int k,int u)
{
    int v,i,j,temp;
    v=a[k];
    i=k;
    j=u+1;
    do
    {
        do
            i++;
        while(a[i]<v&&i<=u);
        do
            j--;
        while(v<a[j]);
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    a[k]=a[j];
    a[j]=v;
    return(j);
}

int searchList(vector<int> &list , int numElems, int value)
{
    int index = 0; // Used as a subscript to search array
    int position = -1; // To record position of search value
    bool found = false; // Flag to indicate if the value was found
    while(index < numElems && !found)
    {
        if (list[index] == value) // If the value is found
        {
            found = true; // Set the flag
            position = index; // Record the value’s subscript
        }
        index++; // Go to next element
    }
    return position; // Return the position, or -1
}


int binarySearch(vector<int> &array , int numElems, int value)
{
    int first = 0, // First array element
        last = numElems - 1, // Last array element
        middle, // Mid point of search
        position = -1; // Position of search value
    bool found = false; // Flag
    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate mid point
        if (array[middle] == value) // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1; // If value is in upper half
    }
    return position;
}

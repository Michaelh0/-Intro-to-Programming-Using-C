// Michael Hom
// CS102 Laboratory 7B Program D
// This program creates a vector with the number of inputs by user
// and measures the time it takes to pass the vector by value

#include <iostream>
#include <chrono>
#include <vector>
#include <iomanip>
using namespace std;


void showStats(vector<int>&,int);

int main()
{
    int index, num, startTime, endTime;
    vector <int> bigVector;
    cout << "How many numbers do you want in your Vector? ";
    cin >> num;
    for (index = 0; index < num; index++)
        bigVector.push_back(index);

    auto started = chrono::high_resolution_clock::now(); // starts the clock
    showStats(bigVector, num);
    auto done = chrono::high_resolution_clock::now(); // starts the clock

    cout << chrono::duration_cast<chrono::milliseconds>(done-started).count();
    cout << " milliseconds required to pass by value ";
    cout << "a Vector having " << num << " elements!" << endl;
    cin.ignore();
    cin.get();
    return 0;
}

void showStats (vector<int> &vect, int numOfNum)
{
    long double sum = 0;
    double mean, median;
    for (int val : vect)
        sum += val;
    mean = static_cast<double>(sum) / numOfNum;
    if (numOfNum % 2 == 0)
        median = (vect[(numOfNum) / 2 - 1] + vect[(numOfNum) / 2]) / 2.0;
    else
        median = vect[(numOfNum - 1) / 2.0];
    cout << fixed << showpoint << setprecision(2);
    cout << "The mean is " << mean << endl;
    cout << "The median is " << median << endl;

    cout << "Passed all the data by Value!" << endl << endl;

}

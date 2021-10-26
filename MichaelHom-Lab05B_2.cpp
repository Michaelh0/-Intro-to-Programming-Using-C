// Michael Hom
// CS102 Laboratory 5B Program B
// This program calculate the sum of numbers from
// 1 to user entered number

#include <iostream>
using namespace std;

int main()
{
    //declare variables
    int num, sum = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    while (num < 2)
    {
        cout <<"Must be greater than 2, reenter: ";
        cin >> num;
    }

    for (int count = 1; count <= num; count++)
        sum += count;

    cout << "The sum of the integers from 1 to "<< num <<" is: "<< sum;

    cout << "\nCoded By Michael Hom";
    cin.ignore();
    cin.get();

}

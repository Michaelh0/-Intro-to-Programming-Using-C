// Michael Hom
// CS102 Laboratory 6A Program B
// This program counts how many prime numbers
// are between 1 and 200

#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
    //declare variables
    bool check;
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 200;

    int count = MIN_NUMBER;
    int counter2 = 0;

    for (; count <= MAX_NUMBER; count++)
    {
        check = isPrime(count);
        if (check)
        {
            cout << count << " ";
            counter2++;
        }
    }
    cout << "There are " << counter2 << " prime numbers between ";
    cout << MIN_NUMBER << " and " << MAX_NUMBER;
    cin.ignore();
    cin.get();
    return 0;

}

bool isPrime (int refnum)
{
    bool status = true;
    int remainder;

    for (int count = 1; count <= refnum; count++)
    {
        remainder = refnum % count;
        if (remainder == 0)
        {
            if (!(count == 1) && !(count == refnum))
            {
                status = false;
                return status;
            }
            else if (refnum == 1)
            {
                status = false;
                return status;
            }
        }
    }
    if (refnum == 0)
        status = false;
    return status;
}

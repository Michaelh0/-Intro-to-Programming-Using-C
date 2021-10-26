// Michael Hom
//CS102 Laboratory 6A Program C
// This program detects how many prime numbers
// for 1 digits, 2 digits, til 6 digits

#include <iostream>
using namespace std;

bool isPrime(int);
int countPrime(int, int);

int main()
{
    //declare variables
    int numOfPrime;
    double percent;

    numOfPrime = countPrime(1,9);
    percent = numOfPrime / 9.0 * 100;
    cout << "The percent is " << percent << endl;

    numOfPrime = countPrime(11,99);
    percent = numOfPrime / 89.0 * 100;
    cout << "The percent is " << percent << endl;

    numOfPrime = countPrime(101,999);
    percent = numOfPrime / 899.0 * 100;
    cout << "The percent is " << percent << endl;

    numOfPrime = countPrime(1001,9999);
    percent = numOfPrime / 8999.0 * 100;
    cout << "The percent is " << percent << endl;

    numOfPrime = countPrime(10001,99999);
    percent = numOfPrime / 89999.0 * 100;
    cout << "The percent is " << percent << endl;

    numOfPrime = countPrime(100001,999999);
    percent = numOfPrime / 899999.0 * 100;
    cout << "The percent is " << percent << endl;
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

int countPrime (int minRange, int maxRange)
{
    bool check;

    int count = minRange;
    int counter2 = 0;

    for (; count <= maxRange; count++)
    {
        check = isPrime(count);
        if (check)
        {
            counter2++;
        }

    }

    cout << "\nThere are " << counter2 << " prime numbers between ";
    cout << minRange << " and " << maxRange << endl;
    return counter2;
}

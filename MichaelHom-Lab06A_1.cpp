// Michael Hom
// CS102 Laboratory 6A
// Determine if a number is prime or not prime

#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
    //declare variables
    int num;
    bool check;

    cout << "Enter number: ";
    cin >> num;

    check = isPrime(num);
    if (check)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";
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


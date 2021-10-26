//Michael Hom
//CS102 Laboratory 3 Program A Part 2
//This program flips a coin.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //constants
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 1;
    //declare variable(s)
    int coin;

    //Get system time
    unsigned seed = time(0);

    //Seed the random generator
    srand(seed);

    cout << "Flipping the coin ...\n";

    coin = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

    if (coin == 1)
        cout << "HEADS" << endl;
    else
        cout << "TAILS" << endl;

    cout << "Coded by Michael Hom";

    cin.ignore();
    cin.get();
    return 0;
}

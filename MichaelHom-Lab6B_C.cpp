// Michael Hom
// CS102 Laboratory 6B Program C
// This program rolls tow dice using reference variables

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void rollDice(int &, int &);
void quit (char &);
int main()
{
    // declare variables
    int dice1, dice2;
    char leave;

    unsigned int seed = time(0);
    srand(seed);
    do
    {
        rollDice(dice1,dice2);
        cout << dice1 << " " << dice2 << endl;
        quit(leave);
    } while (leave == 'Y' || leave == 'y');
    cin.ignore();
    cin.get();
    return 0;
}

void rollDice(int &arg1, int &arg2)
{
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 6;

    arg1 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
    arg2 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
}

void quit (char &exit)
{
    cout << "Do you want to roll again (Y / N)?\n" ;
    cin >> exit;
}

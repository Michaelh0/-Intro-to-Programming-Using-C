// Michael Hom
// CS-102 Laboratory 7A Program A
// This program determines whether the numbers typed in produces a Lo Shu Magic square

#include <iostream>
using namespace std;

    //declare variables
    const int ROWS = 3;
    const int COLUMNS = 3;
    const int DIAGONALS = 3;

    int magSquare[ROWS][COLUMNS] = {{0,0,0},
                        {0,0,0},
                        {0,0,0}};

bool showIfSquare();
int main()
{
    //declare variables
    bool status = false;
    bool dups = false;
    for (int count = 0; count < ROWS; count++)
    {
        for (int i = 0; i < COLUMNS; i++)
        {
            cout << "Enter row " << (count + 1) << " column " << (i + 1) <<": ";
            cin >> magSquare[count][i];
        }
    }
    for (int count2 = 0; count2 < 9; count2++)
    {
        int i2 = 0;
        for (int count = 0; count < 3; count++)
        {
            int i = 0;
            if (count2 == i && i2 == count){}
            else if (magSquare[count2][i2]== magSquare[i][count])
                dups = true;
            i++;
        }
        i2++;
    }
    if (!dups)
    {
        cout << (showIfSquare() ? "It's a Lo Shu!" : "It's not a Lo Shu!");
    }
    else
    {
        cout << "The inputs you entered were duplicates." ;
    }

    cin.ignore();
    cin.get();
    return 0;
}

bool showIfSquare()
{
    bool ifSquare = true;
    int sum, prevSum;
    for (int count = 0; count < ROWS; count++)
    {
        sum = 0;
        for (int i = 0; i < COLUMNS; i++)
        {
            cout << "Checking row " << (count + 1)<< endl;
            sum += magSquare[count][i];
        }
        if (count == 0)
            prevSum = sum;
        else if (sum != prevSum)
        {
            ifSquare = false;
            return ifSquare;
        }

    }
    for (int count = 0; count < COLUMNS; count++)
    {
        sum = 0;
        for (int i = 0; i < ROWS; i++)
        {
            cout << "Checking column " << (count + 1) << endl;
            sum += magSquare[i][count];
        }
        if (sum != prevSum)
        {
            ifSquare = false;
            return ifSquare;
        }
    }
    sum = 0;
    for (int count = 0; count < ROWS; count++)
    {
        cout << "Checking diagonal 1"<< endl;
        sum += magSquare[count][count];
    }
    if (sum != prevSum)
    {
        ifSquare = false;
        return ifSquare;
    }
    sum = 0;
    for (int count = 0; count < ROWS; count++)
    {
        int count2 = 2;
        cout << "Checking diagonal 2"<< endl;
        sum += magSquare[count2][count];
        count2--;
    }
    if (sum != prevSum)
    {
        ifSquare = false;
        return ifSquare;
    }
    return ifSquare;
}

// Michael Hom
// CS102 Laboratory 10C Program C
// This program is checks if the password meets certain requirements

#include <iostream>
#include <cctype>
using namespace std;

void passwordChecker(const char[], int);

int main()
{
    const int SIZE = 1000;
    char password[SIZE];
    cout << "Get that password: ";
    cin.getline(password,SIZE);
    passwordChecker(password, SIZE);
    cin.ignore();
    cin.get();
    return 0;
}

void passwordChecker (const char array[], int size)
{
    const int minLower = 1, minUpper = 1, minNum = 8, minDigit = 2,
    minPunct = 1;

    int lowerCount = 0, upperCount = 0, punctCount = 0;
    int digitCount = 0, numCount = 0;
    int i = 0;
    bool correct = true;
    while (i < size && array[i] != '\0')
    {

        if(isalpha(array[i]))
        {
            if (islower(array[i]))
                lowerCount++;
            else
                upperCount++;
        }
        else if (ispunct(array[i]))
            punctCount++;
        else if (isdigit(array[i]))
            digitCount++;
        else if (isspace(array[i]))
        {
            cout << "Your password can't have a space.\n";
            correct = false;
        }
        i++;
        numCount++;
    }
    if (numCount < minNum)
    {
        cout << "Your password needs " << minNum - numCount << " more character(s).\n";
        correct = false;
    }
    if (lowerCount < minLower)
    {
        cout << "Your password needs " << minLower - lowerCount << " more lowercase letter(s).\n";
        correct = false;
    }
    if (upperCount < minUpper)
    {
        cout << "Your password needs " << minUpper - upperCount << " more uppercase letter(s).\n";
        correct = false;
    }
    if (punctCount < minPunct)
    {
        cout << "Your password needs " << minPunct - punctCount << " more punctuation(s).\n";
        correct = false;
    }
    if (digitCount < minDigit)
    {
        cout << "Your password needs " << minDigit - digitCount << " more digit(s).\n";
        correct = false;
    }
    if (correct)
        cout << "Your password is valid.";
}

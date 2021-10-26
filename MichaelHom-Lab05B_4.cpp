//Michael Hom
//CS102 Laboratory 5B Program 4
// This program is a math tutor for operations
// add, subtract, multiply, and divide
// with menus and user can quit using Q or q

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //declare variables
    int num1, num2, answer, rightAnswer;
    int MIN_NUMBER = 1;
    int MAX_NUMBER = 12;
    char sign;

    do
    {
        cout << "Welcome to the Math Tutor!" << endl;
        cout << "Select an operation (+ - / *) or press q to quit: ";
        cin >> sign;

        while (sign != '+' && sign != '-' && sign != '/' && sign != '*' && sign != 'q' && sign != 'Q' )
        {
            cout << "The input was not a +, -, *, / or q. " ;
            cout << "Reenter: ";
            cin >> sign;
        }

        unsigned seed = time(0);

        srand(seed);

        num1 = rand() % (MAX_NUMBER - MIN_NUMBER +1) + MIN_NUMBER;
        num2 = rand() % (MAX_NUMBER - MIN_NUMBER +1) + MIN_NUMBER;

        switch (sign)
        {
            case '+':
                cout << num1 << " + " << num2 << " = ";
                cin >> answer;
                rightAnswer = num1 + num2;
                if (answer == rightAnswer)
                    cout << "That's right." << endl;
                else
                    cout << "The answer is " << rightAnswer << endl;
                break;
            case '-':
                cout << (num1 > num2 ? num1 : num2) << " - ";
                cout << (num1 > num2 ? num2 : num1) << " = ";
                cin >> answer;
                rightAnswer = (num1 > num2 ? num1 : num2) - (num1 > num2 ? num2 : num1);
                if (answer == rightAnswer)
                    cout << "That's right." << endl;
                else
                    cout << "The answer is " << rightAnswer << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = ";
                cin >> answer;
                rightAnswer = num1 * num2;
                if (answer == rightAnswer)
                    cout << "That's right." << endl;
                else
                    cout << "The answer is " << rightAnswer << endl;
                break;
            case '/':
                num1 *= num2;
                cout << num1 << " / ";
                cout << num2 << " = ";
                cin >> answer;
                rightAnswer = num1 / num2;
                if (answer == rightAnswer)
                    cout << "That's right." << endl;
                else
                    cout << "The answer is " << rightAnswer << endl;
                break;
        }
    } while (sign != 'q' && sign != 'Q');

    cout << "Coded By Michael Hom";
    cin.ignore();
    cin.get();
    return 0;
}

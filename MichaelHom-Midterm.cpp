// Michael Hom
// CS102 Midterm Program A
// This program will prompt for a number and whether or not
// they want to have a sum or product of 1 to their number

#include <iostream>
using namespace std;

const int MIN_NUMBER = 1;

int getNum();
int calcSum(int);
int calcProd(int);

int main()
{
    //declare variables
    int userNum, sum, product;
    char choice, stay;
    do
    {
        cout << "Enter S for sum, P for prod: ";
        cin >> choice;
        //checks user's choice
        switch(choice)
        {
            case 's':
            case 'S':
                userNum = getNum();
                sum = calcSum(userNum);
                cout << "The sum of the numbers from " << MIN_NUMBER << " to ";
                cout << userNum << " is " << sum << endl;
                break;
            case 'p':
            case 'P':
                userNum = getNum();
                product = calcProd(userNum);
                cout << "The product of the numbers from " << MIN_NUMBER << " to ";
                cout << userNum << " is " << product << endl;
                break;
            default:
                cout << "Invalid Input\n";
        }
        cout << "Again(y/n)? ";
        cin >> stay;
    }while (stay == 'y' || stay == 'Y');
    cin.ignore();
    cin.get();
    return 0;
}
int getNum()
{
    //retrieves number from user
    int num;
    cout << "Enter an integer greater than " << MIN_NUMBER << ": ";
    cin >> num;
    while (num <= MIN_NUMBER)
    {
        cout << "Must be greater than "<< MIN_NUMBER <<", re-enter: ";
        cin >> num;
    }
    return num;
}
int calcSum(int num)
{
    //calculate sum
    int sum = 0;
    for(int count = MIN_NUMBER; count <= num; count++)
        sum += count;
    return sum;
}
int calcProd(int num)
{
    //calculates product
    int product = 1;
    for(int count = MIN_NUMBER; count <= num; count++)
        product *= count;
    return product;
}

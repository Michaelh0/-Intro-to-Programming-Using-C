// Michael Hom
// CS102 Laboratory 6B Program D
// This program calculates BMI

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void getInput(double&, int&, double&);
double convertInches (int, double);
double calculateBMI (double, double);
void exit(char&);

int main()
{
    //declare variables
    int heightFT;
    char stay;
    double weight, BMI, heightIN, newHeight;

    do
    {
        getInput(weight, heightFT, heightIN);
        newHeight = convertInches(heightFT, heightIN);
        BMI = calculateBMI (weight, newHeight);
        cout << setprecision(2) << fixed;
        cout << "Your BMI is " << BMI << endl;
        exit(stay);
    } while (stay == 'Y' || stay == 'y');
    cin.ignore();
    cin.get();
    return 0;
}

void getInput(double &arg1, int &arg2, double &arg3)
{
    cout << "Enter weight: ";
    cin >> arg1;
    cout << "Enter height (feet): ";
    cin >> arg2;
    cout << "Enter height (inches): ";
    cin >> arg3;
}

double convertInches (int feet, double inches)
{
    double newInches;
    newInches = 12 * feet + inches;
    return newInches;
}

double calculateBMI (double userWeight, double UserHeight)
{
    double newBMI;
    newBMI = static_cast<double>(userWeight * 703) / pow (UserHeight, 2.0);
    return newBMI;
}

void exit (char &quit)
{
    cout << "Do you want to do it again?";
    cin >> quit;
    cout << endl;
}

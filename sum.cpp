// Michael Hom
// This program adds 1 - 9 and subtracts user num;

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter num";
    cin >> num;
    for (int count = 1; count <= 9; count++)
        sum += count;
    sum -= num;
    cout << sum;
    cout << static_cast<double>(sum / 4);



    cin.ignore();
    cin.get();
    return 0;
}

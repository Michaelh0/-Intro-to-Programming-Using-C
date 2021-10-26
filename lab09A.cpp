#include <iostream>
using namespace std;

int main()
{
    int max;
    int *num = nullptr;

    cout << "Enter a number: ";
    cin >> max;

    num = new int[max];

    if(num == NULL)
    {
        cout << "Failure" << endl;
    }
    else
        cout << "Success" << endl;
    delete [] num;
    num = nullptr;

    return 0;
}

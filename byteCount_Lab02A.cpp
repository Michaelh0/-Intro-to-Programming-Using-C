// Michael Hom
// Number of Bytes for each data types
#include <iostream>
using namespace std;

int main()
{
    //Output byte size for each date type
    cout << "The size of a char is " << sizeof(char)<< " bytes.\n";
    cout << "The size of a short int is " << sizeof(short)<< " bytes.\n";
    cout << "The size of a int is " << sizeof(int)<< " bytes.\n";
    cout << "The size of a long int is " << sizeof(long)<< " bytes.\n";
    cout << "The size of a long long int is " << sizeof(long long)<< " bytes.\n";
    cout << "The size of a float is " << sizeof(float)<< " bytes.\n";
    cout << "The size of a double is " << sizeof(double)<< " bytes.\n";
    cout << "The size of a long double is " << sizeof(long double)<< " bytes.\n";
    cin.get();
    return 0;
}

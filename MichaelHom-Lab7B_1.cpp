// Michael Hom
// CS102 Laboratory 7B Program A
// This program loops through strings and loops

#include <iostream>
using namespace std;

int main()
{
    // define an array of integers

    //int number[] = {10,20,30,40,50};

    string planet[] = { "Mercury","Venus","Earth",
                        "Mars","Jupiter","Saturn",
                        "Uranus","Nepture","Pluto (a dwarf planet)"} ;

    // display the values in an array
    //for (int count = 0; count < 5; count++)
        //cout << number[count] << endl;

    for (int count = 0; count < 9; count++)
        cout << planet[count] << endl;

    cin.get();
    return 0;
}

// Michael Hom
// CS102 Laboratory 9A Program E
// This program tests the limits of the dynamic array

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    int *testSizeArray = nullptr;
    int max;

    cout << "How large do you want to search for the limit?";
    cin >> max;

    cout << "still running";
    int count = 100000;
    //while (count < max && !found)
    //{
        testSizeArray = new int[count];
        //if (testSizeArray == NULL)
        //{
 //           cout << "FAILURE";
   //         found = true;
     //   }
        //cout << count << endl;
        //count += 100000;
        delete [] testSizeArray;
        testSizeArray = nullptr;
    //}

    //testSizeArray = new int[max];
    //if (testSizeArray == NULL)
        //cout << "Error allocating memory";

    cin.ignore();
    cin.get();
    return 0;
}

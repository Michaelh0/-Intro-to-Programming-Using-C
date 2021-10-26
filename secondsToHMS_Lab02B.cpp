// Michael Hom
// This program converts seconds to minutes and seconds.
#include <iostream>
using namespace std;

int main()
{
    // Variables for total seconds
    int totalSeconds;
    cout << "Enter number of seconds: ";
    cin >> totalSeconds;

    // Variables for hours, minutes, seconds
    int hours, minutes, seconds;

    minutes = totalSeconds / 60;

    // Get the remaining seconds.
    seconds = totalSeconds % 60;

    //Get the number of hours

    hours = minutes / 60;

    //Get the remainder for new minutes

    minutes = minutes % 60;

    // Display the results.
    cout << totalSeconds << " is equivalent to:\n";
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    cin.ignore();
    cin.get();
    return 0;
}

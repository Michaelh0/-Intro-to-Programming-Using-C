// Michael Hom
// CS102 Laboratory 8B Program B
// This program allows the user to look up a product

#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int NUM_PRODS = 9; // The number of products produced
const int MIN_PRODNUM = 914; // The lowest product number
const int MAX_PRODNUM = 922; // The highest product number

// Function prototypes
int getProdNum();
int searchList (vector<int> &, int, int);
void displayProd(vector<string> &, vector<string> &, vector<double> &, int);

int main()
{

    // Array of product IDs
    vector <int>id = {914, 915, 916, 917, 918, 919, 920, 921, 922};
    // Array of product titles
    vector <string> title =
    { "Six Steps to Leadership",
    "Six Steps to Leadership",
    "The Road to Excellence",
    "Seven Lessons of Quality",
    "Seven Lessons of Quality",
    "Seven Lessons of Quality",
    "Teams Are Made, Not Born",
    "Leadership for the Future",
    "Leadership for the Future"
    };

    // Array of product descriptions
    vector <string> description =
    { "Book", "Audio CD", "DVD",
    "Book", "Audio CD", "DVD",
    "Book", "Book", "Audio CD"
    };
    // Array of product prices
    vector <double> prices = {12.95, 14.95, 18.95, 16.95, 21.95,
    31.95, 14.95, 14.95, 16.95};
    int prodNum; // To hold a product number
    int index; // To hold search results
    char again; // To hold a Y or N answer
    do
    {
        // Get the desired product number.
        prodNum = getProdNum();
        // Search for the product number.
        index = searchList(id, NUM_PRODS, prodNum);
        // Display the results of the search.
        if (index == -1)
            cout << "That product number was not found.\n";
        else
            displayProd(title, description, prices, index);
        // Does the user want to do this again?
        cout << "Would you like to look up another product? (y/n) ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    return 0;

}

//***************************************************
// Definition of getProdNum function *
// The getProdNum function asks the user to enter a *
// product number. The input is validated, and when *
// a valid number is entered, it is returned. *
//***************************************************

int getProdNum()
{
    int prodNum; // Product number
    cout << "Enter the item's product number: ";
    cin >> prodNum;
    // Validate input
    while (prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM)
    {
        cout << "Enter a number in the range of " << MIN_PRODNUM;
        cout <<" through " << MAX_PRODNUM << ".\n";
        cin >> prodNum;
    }
    return prodNum;
}

int searchList(vector<int> &list , int numElems, int value)
{
    int index = 0; // Used as a subscript to search array
    int position = -1; // To record position of search value
    bool found = false; // Flag to indicate if the value was found
    while(index < numElems && !found)
    {
        if (list[index] == value) // If the value is found
        {
            found = true; // Set the flag
            position = index; // Record the value’s subscript
        }
        index++; // Go to next element
    }
    return position; // Return the position, or -1
}

void displayProd(vector<string> &title, vector <string> &desc, vector <double> &price, int index)
{
    cout << "Title: " << title[index] << endl;
    cout << "Description: " << desc[index] << endl;
    cout << "Price: $" << price[index] << endl;
}

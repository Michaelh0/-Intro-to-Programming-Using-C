// Team F
// CS102 Laboratory 11A Program
// This program is a menu function for editing structures

#include <iostream>
#include <fstream>
using namespace std;

const int NAME_SIZE = 31;
const int NUM_RECORDS = 5;

struct InventoryItem
{
    char name[NAME_SIZE];
    int id;
    double balance;
};

void create();
void display_all();
void edit();
void display_one();
void deletes();

int main()
{
    const int       CREATE_CHOICE = 1,
                    DISPLAY_ALL_CHOICE = 2,
                    EDIT_CHOICE = 3,
                    DISPLAY_ONE_CHOICE = 4,
                    DELETE_CHOICE = 5,
                    QUIT_CHOICE = 6;

    int choice;
    do
    {
        cout << "\n\t\tMain Menu\n\n";
        cout << "1. Create file of empty accounts\n";
        cout << "2. Display the contents of all the accounts\n";
        cout << "3. Make changes to a particular account\n";
        cout << "4. Search and display a particular account\n";
        cout << "5. Delete an account\n";
        cout << "6. Quit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case CREATE_CHOICE:
                create();
                break;

            case DISPLAY_ALL_CHOICE:
                display_all();
                break;

            case EDIT_CHOICE :
                edit();
                break;

            case DISPLAY_ONE_CHOICE:
                display_one();
                break;

            case DELETE_CHOICE:
                deletes();
                break;

            case QUIT_CHOICE:
                cout << "Quiting program.";
                break;

            default:
                cout << "The valid choices are 1 through 6. Run the\n";
                cout << "program again and select one of those.\n";
        }
    } while (choice != QUIT_CHOICE);
    cin.ignore();
    cin.get();
    return 0;
}

void create()
{
    // Create an empty InventoryItem structure.
    InventoryItem record = { "", 0, 0.0 }; // To hold an inventory record
    long recNum; // To hold a record number
    // Open the file in binary mode for input and output.
    fstream inventory("Inventory.dat", ios::in | ios::out | ios::binary);
    // Get the new record data.
    for (int count = 0; count < NUM_RECORDS; count++)
        inventory.write(reinterpret_cast<char *>(&record),sizeof(record));

    /*int i =0;
    char create = 'y';
    while (i < NUM_RECORDS && (create == 'y' || create == 'Y'))
    {
        recNum = i;
        inventory.seekg(recNum * sizeof(record), ios::beg);
        cout << "Enter the data for record "<< i + 1<<" :\n";
        cout << "Name: ";
        cin.ignore();
        cin.getline(record.name, NAME_SIZE);
        cout << "Id Number: ";
        cin >> record.id;
        cout << "Balance: ";
        cin >> record.balance;

        // Move back to the beginning of the this record's position.
        inventory.seekp(recNum * sizeof(record), ios::beg);
        // Write the new record over the current record.
        inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
        i++;
        cout << "Do you want to create another account (y / n)?";
        cin >> create;
    }*/
    // Close the file.
    inventory.close();
}

void display_all()
{
    InventoryItem record; // To hold an inventory record
    // Open the file for binary input.
    fstream inventory("Inventory.dat", ios::in | ios::binary);
    // Now read and display the records.
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    while (!inventory.eof())
    {
        cout << "Name: ";
        cout << record.name << endl;
        cout << "Id Number: ";
        cout << record.id << endl;
        cout << "Balance: ";
        cout << record.balance << endl << endl;
        inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    }
    // Close the file.
    inventory.close();
}
void edit()
{
    InventoryItem record; // To hold an inventory record
    long recNum; // To hold a record number
    // Open the file in binary mode for input and output.
    fstream inventory("Inventory.dat", ios::in | ios::out | ios::binary);
    // Get the record number of the desired record.
    cout << "Which record do you want to edit? ";
    cin >> recNum;
    // Move to the record and read it.
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    // Display the record contents.
    cout << "Name: ";
    cout << record.name << endl;
    cout << "Id Number: ";
    cout << record.id << endl;
    cout << "Balance: ";
    cout << record.balance << endl;
    // Get the new record data.
    cout << "Enter the new data:\n";
    cout << "Name: ";
    cin.ignore();
    cin.getline(record.name, NAME_SIZE);
    cout << "Id Number: ";
    cin >> record.id;
    cout << "Balance: ";
    cin >> record.balance;
    // Move back to the beginning of the this record's position.
    inventory.seekp(recNum * sizeof(record), ios::beg);
    // Write the new record over the current record.
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
    // Close the file.
    inventory.close();

}
void display_one()
{
    InventoryItem record; // To hold an inventory record
    long recNum; // To hold a record number
    // Open the file in binary mode for input and output.
    fstream inventory("Inventory.dat", ios::in | ios::binary);
    // Get the record through name or by number.
    cout << "Which record do you want to display? ";
    cin >> recNum;
    /*char find;
    char findvalue[NAME_SIZE];
    cout << "How do you want to find an account?\n";
    cout << "By name (n) OR By id number (i)\n";
    cin >> find;
    while (find != 'n' || find != 'i')
    {
        cout << "The input you entered was neither n nor i\n";
        cout << "Reenter: "
        cin >> find;
    }

    if (find == 'n')
    {
        cout << "Enter the name: ";
        cin >> findvalue;

    }
    else if (find == 'i')
    {
        cout << "Enter the id number: ";
        cin >> findvalue;
    }*/
    // Move to the record and read it.
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    // Display the record contents.
    cout << "Name: ";
    cout << record.name << endl;
    cout << "Id Number: ";
    cout << record.id << endl;
    cout << "Balance: ";
    cout << record.balance << endl;
    // Close the file.
    inventory.close();

}
void deletes()
{
    InventoryItem record; // To hold an inventory record
    long recNum; // To hold a record number
    // Open the file in binary mode for input and output.
    fstream inventory("Inventory.dat", ios::in | ios::out | ios::binary);
    // Get the record number of the desired record.
    cout << "Which record do you want to delete? ";
    cin >> recNum;
    // Move to the record and read it.
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    // Display the record contents.
    cout << "Name : ";
    cout << record.name << endl;
    cout << "Id Number: ";
    cout << record.id << endl;
    cout << "Balance: ";
    cout << record.balance << endl;

    // Get the new record data.
    record.name[0] = '\0';
    record.id = 0;
    record.balance = 0.0;
    // Move back to the beginning of the this record's position.
    inventory.seekp(recNum * sizeof(record), ios::beg);
    // Write the new record over the current record.
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
    // Close the file.
    inventory.close();
}



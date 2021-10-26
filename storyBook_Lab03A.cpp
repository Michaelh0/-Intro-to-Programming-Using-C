//Michael Hom
//CS102 Laboratory 3 Program A
//This program creates a story using strings inputted by user

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    //declare variables
    string name, city, college, profession, animal, petName;
    int age;

    cout << "Coded by Michael Hom\n";

    //input variables
    cout << "Enter your full name: ";
    getline(cin,name);

    cout << "Enter the age (in numbers) when you started attending college: ";
    cin >> age;
    cin.ignore();

    cout << "Enter the city you live in: ";
    getline(cin,city);

    cout << "Enter the name of the college: ";
    getline(cin,college);

    cout << "Enter your profession: ";
    getline(cin,profession);

    cout << "Enter a type of animal you like: ";
    getline(cin,animal);

    cout << "Enter your pet's name or what you would name it if you had one: ";
    getline(cin,petName);

    //output story
    cout << "\nThere once was a person named " << name << " who lived in "<< city << "."<< endl;
    cout << "At the age of " << age <<", " << name << " went to college at " << college << "." << endl;
    cout << name <<" graduated and went to work as a(n) " << profession << "." << endl;
    cout << "Then, "<< name << " adopted a(n) "<< animal <<" named " << petName << ". They both lived happily ever after!";

    cin.ignore();
    cin.get();

    return 0;
}

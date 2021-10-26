// Michael Hom
// CS102 Laboratory 12B Program C
// This program counts words and unique words

#include <iostream>
#include <fstream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    fstream textfile("Gettysburg.txt");
    int count = 0, index = 0;
    set <string> s;
    string word;
    string temp;
    char chtemp[20];
    bool punct = false;
    while (textfile >> word)
    {
        punct = false;
        if (word != "--")
        {
            int i = 0;
            while (i < word.length() && word[i] != '\0')
            {
                if (ispunct(word[i]))
                    word.erase(i,1);
                if (isupper(word[i]))
                    word[i] = tolower(word[i]);
                i++;
            }
            s.insert(word);
            count++;
        }
    }

    int counter = 0;
    set <string>::iterator iter;
    for (iter = s.begin(); iter !=s.end(); iter++)
    {
        cout << *iter << " ";
        counter++;
    }

    cout << "\nThere are "<< counter << " unique word(s) in your sentence.";
    cout << "\nThere are "<< count << " word(s) in your sentence.";
    textfile.close();
    cin.ignore();
    cin.get();
    return 0;
}

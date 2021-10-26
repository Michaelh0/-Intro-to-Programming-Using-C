// Michael Hom
// CS102 Laboratory 11A Program B
// This program accepts a sequence and finds unique words
// enumerating the set

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    string str;
    vector<string> vecinput;
    int start = 0;
    string word;
    cout << "Input your data:";
    getline(cin,str);
    str = str + " ";
    for (int i = 0; i < str.length(); i++)
    {
        bool letter = false;
        if (isalpha(str[i]) && !letter)
            letter = true;
        else if (isspace(str[i]))
        {
            for(int index = start; index < i;index++)
            {
                if (index == start)
                    word = str[index];
                else
                    word = word + str[index];
            }
            start = i;
            vecinput.push_back(word);
            letter = false;
        }
    }
    vector<string> vecoutput(vecinput);
    for (int i = 0; i < vecoutput.size();i++)
    {
        int index = 0;
        while (index < vecoutput[i].length())
        {
            if (ispunct(vecoutput[i][index]))
                vecoutput[i].erase(index,1);
            if (isupper(vecoutput[i][index]))
                vecoutput[i][index] = tolower(vecoutput[i][index]);
            index++;
        }
    }
    for (int i = 0; i < vecoutput.size();i++)
    {
        int index = 0;
        while (index < vecoutput[i].length())
        {
            if (isspace(vecoutput[i][index]))
                vecoutput[i].erase(index,1);
            index++;
        }
    }
    for (int i = 0; i < vecoutput.size();i++)
    {
        int index = 0;
        bool same = false;
        while(same == false && index != i)
        {
            if (vecoutput[index] == vecoutput[i])
                same = true;
            index++;
        }
        word = vecoutput[i];
        if (same)
        {
            vecoutput[i] = "";
        }
    }
    for (int i = 0; i < vecoutput.size();i++)
    {
        cout << vecoutput[i] << " ";
    }
    cin.ignore();
    cin.get();
    return 0;
}

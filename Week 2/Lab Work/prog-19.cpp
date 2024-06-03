/*
Define a function named getLetter that takes one upper case English letter character argument and
that returns the English letter that is ten letters away from the argument.
*/

#include <iostream>

using namespace std;

char getLetter(char ch)
{
    int newPosition = ch + 10;
    char new_ch;
    if (newPosition > 90)
    {
        new_ch = newPosition - 26;
    }
    else
    {
        new_ch = newPosition;
    }
    return new_ch;
}

int main()
{
    char ch, new_ch;
    cout << "Enter a letter: " << endl;
    cin >> ch;
    new_ch = getLetter(ch);
    cout << "The letter ten steps away from " << ch << " is " << new_ch << endl;
}
/*
Define a C++ function named isDigit that takes a character argument and returns true if the argument is
a digit and returns false otherwise. Write also a test program to test main program your function.
*/
#include <iostream>

using namespace std;

bool isDigit(char ch)
{
    if (ch > 57 || ch < 48)
        return false;
    else
        return true;
}

int main()
{
    char ch;
    cout << "Please enter your character: " << endl;
    cin >> ch;
    bool decision = isDigit(ch);
    cout << decision << endl;
}
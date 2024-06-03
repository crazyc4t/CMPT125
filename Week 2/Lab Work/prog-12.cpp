/*
Define a function named printIncreasingOrder that takes three float arguments and prints them in
increasing order. What does your function return? Write also a test program to test main program your
function
*/
#include <iostream>

using namespace std;

void printIncreasingOrder(float x, float y, float z)
{
    if (x >= y && x >= z)
    {
        if (y >= z)
        {
            cout << z << endl;
            cout << y << endl;
            cout << x << endl;
        }
        else
        {
            cout << y << endl;
            cout << z << endl;
            cout << x << endl;
        }
    }
    else if (y >= x && y >= z)
    {
        if (x >= z)
        {
            cout << z << endl;
            cout << x << endl;
            cout << y << endl;
        }
        else
        {
            cout << x << endl;
            cout << z << endl;
            cout << y << endl;
        }
    }
    else
    {
        if (x >= y)
        {
            cout << y << endl;
            cout << x << endl;
            cout << z << endl;
        }
        else
        {
            cout << x << endl;
            cout << y << endl;
            cout << z << endl;
        }
    }
}

int main()
{
    float f1, f2, f3;
    cout << "Please enter your first digit: " << endl;
    cin >> f1;
    cout << "Please enter your second digit: " << endl;
    cin >> f2;
    cout << "Please enter your third digit: " << endl;
    cin >> f3;
    printIncreasingOrder(f1, f2, f3);
}
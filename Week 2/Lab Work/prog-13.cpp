/*
Define a function named reversedInteger that takes one integer argument and returns an integer
made up of the digits of the argument in reverse order. Write also a test program to test main program
your function.
 */
#include <iostream>

using namespace std;

int reversedInteger(int num)
{
    int reversedNum = 0;
    while (num != 0)
    {
        reversedNum *= 10;
        reversedNum += num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main()
{
    int num, revNum;
    cout << "Please enter your number to be reversed: " << endl;
    cin >> num;
    revNum = reversedInteger(num);
    cout << revNum;
}
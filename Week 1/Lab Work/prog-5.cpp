/*
Write a complete C++ program that reads two integer values d1 and d2 each of which is in the range [1,
30] representing calendar days of the same month from the user. Then your program must print the
number of days from d1 to d2. For example if you enter 5 for d1 variable and 27 for d2 variable, then your
program must print "There are 22 days from day 5 to day 27".
*/
#include <iostream>

using namespace std;

int main()
{
    int d1, d2;
    cout << "Insert the day 1: ";
    cin >> d1;
    cout << "Insert the day 2: ";
    cin >> d2;
    cout << "The total amount of days from Day " << d1 << " and Day " << d2 << " is: " << d2 - d1;
}
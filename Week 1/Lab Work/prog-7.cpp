/*
Write a complete C++ program that reads two integer values y1 and y2 each of which is some positive
number representing calendar years from the user. Then your program must print the number of days
from y1 to y2. For example if you enter 1965 for y1 variable and 1974 for y2 variable, then your program
must print "There are 3240 days from year 1965 to year 1974"
*/
#include <iostream>

using namespace std;

int main()
{
    int y1, y2;
    cout << "Insert the year 1: ";
    cin >> y1;
    cout << "Insert the year 2: ";
    cin >> y2;
    cout << "The total amount of days from year " << y1 << " and year " << y2 << " is: " << 360 * (y2 - y1);
}
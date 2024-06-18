/*
Write a complete C++ program that reads two integer values m1 and m2 each of which is in the range [1,
12] representing calendar months of the same year from the user. Then your program must print the
number of days from m1 to m2. For example if you enter 5 for m1 variable and 9 for m2 variable, then
your program must print "There are 120 days from month 5 to month 9".
*/
#include <iostream>

using namespace std;

int main()
{
    int m1, m2;
    cout << "Insert the month 1: ";
    cin >> m1;
    cout << "Insert the month 2: ";
    cin >> m2;
    cout << "The total amount of days from month " << m1 << " and month " << m2 << " is: " << 30 * (m2 - m1);
}
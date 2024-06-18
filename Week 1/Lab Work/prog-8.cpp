/*
Write a C++ program that declares six variables named y1, m1, d1, y2, m2, and d2 all as integer data types.
Now read the birth date of a child 1 in y1, m1 and d1 variables where y1, m1 and d1 represent the year,
month and day of birth date of child 1. Then read the birth date of child 2 in y2, m2, and d2 variables.
Finally print the number of days from the day child 1 is born until the day child 2 is born. It is ok if your
program prints the number of days as negative or positive depending on the inputs (see questions 5, 6,
and 7 above). Assume the input values for days are in the range [1, 30], the input values for months are in
the range [1, 12], and the input values for the years are some positive numbers. This means a month has
30 days and a year has 12 months ( = 360 days)
*/
#include <iostream>

using namespace std;

int main()
{
    int y1, y2, m1, m2, d1, d2, ty, tm, td;
    cout << "Insert the year 1: ";
    cin >> y1;
    cout << "Insert the year 2: ";
    cin >> y2;
    cout << "Insert the month 1: ";
    cin >> m1;
    cout << "Insert the month 2: ";
    cin >> m2;
    cout << "Insert the day 1: ";
    cin >> d1;
    cout << "Insert the day 2: ";
    cin >> d2;
    ty = 360 * (y2 - y1);
    tm = 30 * (m2 - m1);
    td = d2 - d1;
    cout << "The total amount of days from year " << y1 << " and year " << y2 << " is: " << ty << endl;
    cout << "The total amount of days from month " << m1 << " and month " << m2 << " is: " << tm << endl;
    cout << "The total amount of days from Day " << d1 << " and Day " << d2 << " is: " << td << endl;
}
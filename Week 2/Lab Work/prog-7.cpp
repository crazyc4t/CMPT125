/*
Write a complete C++ program that declares six variables named y1, m1, d1, y2, m2, and d2 all as integer
data types. Now read the birth date of a child1 in the d1, m1 and y1 variables where d1, m1 and y1
represent the day, month and year of the birth date of child1. Then read the birth date of child2 in d2, m2,
and y2 variables. Finally print the number of days BETWEEN the birth dates of the two children. Assume
each month has 30 days and each year has 12 months ( = 360 days).
For example, if d1 = 18, m1 = 4, y1 = 1998 and d2 = 10, m2 = 9, y2 = 1995 then your program must print
There are 938 days between the birth dates.
As another example, if d1 = 10, m1 = 9, y1 = 1995 and d2 = 18, m2 = 4, y2 = 1998 then your program must
still print There are 938 days between the birth dates.
*/

#include <iostream>

using namespace std;

int main()
{
    int y1, y2, m1, m2, d1, d2, ty, tm, td, diff;
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
    diff = abs(td + tm + ty);
    cout << "There are " << diff << " between the birth dates" << endl;
}
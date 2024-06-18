#include <iostream>
#include <cmath>

using namespace std;

struct RationalNumber
{
    int a, b;
};

int main()
{
    RationalNumber r1, r2, r3, r4, r5;
    r1.a = 1;
    r1.b = 3;
    cout << "r1 is " << r1.a << "/" << r1.b << endl;
    r2.a = 2;
    r2.b = 3;
    cout << "r2 is " << r2.a << "/" << r2.b << endl;
    r3 = r1 + r2;
    cout << "r3 which is assigned r1+r2 is " << r3.a << "/" << r3.b << endl;
    r1 += r2;
    cout << "After the statement r1 += r2, r1 is " << r1.a << "/" << r1.b << endl;
    bool flag = r1 > r2;
    cout << "After the statement flag = r1 > r2, flag is " << flag << endl;
    r4 = -r2;
    cout << "After the statement r4 - r2, r4 is " << r1.a << "/" << r1.b;
    cout << " and r4 is " << r4.a << "/" << r4.b << endl;
    r4 = r2++;
    cout << "After the statement r4 = r2++, r2 is " << r2.a << "/" << r2.b;
    cout << " and r4 is " << r4.a << "/" << r4.b << endl;
    cout << "Enter a rational number";
    cin >> r5;
    cout << "The value of r5 is ";
    cout << r5;
    cout << endl;
    return 0;
}
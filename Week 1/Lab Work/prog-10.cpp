// Answer Question number #9 above but this time without using modulo operator.
#include <iostream>

using namespace std;

int main()
{
    int num, b1, b2, b3, b4, b5, b6, b7, b8, q, p, r;
    cout << "Please input the decimal number to convert to binary: ";
    cin >> num;
    q = num / 2;
    p = 2 * q;
    r = num - p;
    num /= 2;
    b1 = r;
    cout << "The left most binary bit is: " << b1 << endl;
    q /= 2;
    p = 2 * q;
    r = num - p;
    num /= 2;
    b2 = r;
    cout << "The following binary bit is: " << b2 << endl;
    q /= 2;
    p = 2 * q;
    r = num - p;
    num /= 2;
    b3 = r;
    cout << "The following binary bit is: " << b3 << endl;
    q /= 2;
    p = 2 * q;
    r = num - p;
    num /= 2;
    b4 = r;
    cout << "The following binary bit is: " << b4 << endl;
    q /= 2;
    p = 2 * q;
    r = num - p;
    num /= 2;
    b5 = r;
    cout << "The following binary bit is: " << b5 << endl;
    q /= 2;
    p = 2 * q;
    r = num - p;
    num /= 2;
    b6 = r;
    cout << "The following binary bit is: " << b6 << endl;
    q /= 2;
    p = 2 * q;
    r = num - p;
    num /= 2;
    b7 = r;
    cout << "The following binary bit is: " << b7 << endl;
    q /= 2;
    p = 2 * q;
    r = num - p;
    num /= 2;
    b8 = r;
    cout << "The right most binary bit is: " << b8 << endl;
    cout << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << endl;
}
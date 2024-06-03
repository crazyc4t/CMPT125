#include <iostream>

using namespace std;

int main()
{
    char c1 = -206, c2 = '3';
    int a = c1;
    cout << a << endl;
    bool f1 = 56 > c2;
    cout << f1 << endl;
    float x = a + c2;
    cout << x << endl;
    bool f2 = c1 > 'A';
    cout << f2 << endl;
    cout << c1 << endl;
    cout << c2 << endl;
    char c3 = c1 + c2;
    cout << c3 << endl;
    cout << c1 + c2 << endl;
    return 0;
}
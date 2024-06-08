#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int a = 2;
    // float x = 1.2;
    // double y = 3.76;
    // bool f = true;
    // char c = 'y';
    // string b = "miau";
    // cout << a << ", " << x << ", " << y << ", " << f << ", " << c << ", " << b << endl;
    // cout << &a << endl;
    // cout << &x << endl;
    // cout << &y << endl;
    // cout << &f << endl;
    // cout << &c << endl;
    // cout << &b << endl;
    int *a;
    a = new int[3];
    cout << "The memory address of the variable a is: " << &a << endl;
    cout << "The memory address of the dynamic array of size 3: " << a << endl;
    delete[] a;
    return 0;
}
/* Write a C++ program that reads in the height and base of a triangle and then prints the area of the
triangle. You must decide what data types are appropriate for your variables. */
#include <iostream>

using namespace std; // Standard library

int main()
{
    float height, base;
    cout << "Please enter the height: ";
    cin >> height;
    cout << "Please enter the width: ";
    cin >> base;
    cout << "The area of the triangle is:" << (base * height) / 2;
}
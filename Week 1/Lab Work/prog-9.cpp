/*
Write a program that asks the user to enter a non-negative integer in the range [0, 255] and prints the
unsigned binary representation of the number in byte pattern. Assume the user will always enter a
number in the range [0, 255]. Use modulo operator in order to make the computation easy.
Hint:- Declare eight int data type variables b1, b2, b3,...,b8 corresponding to the eight binary bits. You may
assume b1 is the most significant bit and b8 is the least significant bit. Now compute the value of each of
the bits and finally print the eight bit binary number. Because of the assumption made that b1 is the most
significant bit and b8 is the least significant bit, this means the binary number must be printed in the order
cout << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << endl.
For example, if the user input number is 153, then your program must print 10011001
*/
#include <iostream>

using namespace std;

int main()
{
    int num, b1, b2, b3, b4, b5, b6, b7, b8;
    cout << "Please input the decimal number to convert to binary: ";
    cin >> num;
    b1 = num % 2;
    b2 = (num / 2) % 2;
    b3 = ((num / 2) / 2) % 2;
    b4 = (((num / 2) / 2) / 2) % 2;
    b5 = ((((num / 2) / 2) / 2) / 2) % 2;
    b6 = (((((num / 2) / 2) / 2) / 2) / 2) % 2;
    b7 = ((((((num / 2) / 2) / 2) / 2) / 2) / 2) % 2;
    b8 = (((((((num / 2) / 2) / 2) / 2) / 2) / 2) / 2) % 2;
    cout << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << endl;
}
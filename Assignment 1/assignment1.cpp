// Said Neder - NEDSD2302
// Works and compiles successfully on gcc version 14.1.1 20240522 (Red Hat 14.1.1-4)
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string getUnsignedBinary(int x, int L)
{
    // Pre-condition: x >= 0 and L > 0
    // Post-condition: the unsigned binary representation of x in L bit pattern is returned as a C++ string data type
    // Any overflow bits are ignored

    // PUT YOUR CODE HERE
    string binaryNum = "";
    for (int i = 0; i < L; i++)
    {
        int r = x % 2;
        x /= 2;
        if (r == 1)
            binaryNum.insert(0, "1");
        else
            binaryNum.insert(0, "0");
    }

    if (binaryNum.size() > L)
        binaryNum.erase(0, 1);

    cout << "Returning binary number: " << binaryNum << endl;
    return binaryNum;
}

int getUnsignedDecimal(string s)
{
    // Pre-condition: s is the unsigned binary representation of a decimal number
    // Post-condition: The unsigned decimal number value of s is returned

    // PUT YOUR CODE HERE
    int pattern = s.length();
    int decimal = 0;
    for (int i = 0; i < pattern; i++)
        if (s[(pattern - 1) - i] == '1')
            decimal += pow(2, i);
    return decimal;
}
string getBinarySum(string A, string B)
{
    // Pre-condition: A and B are non-empty, have equal lengths, and store '0's and '1's characters
    // Post-condition: The binary sum of A and B is returned as a C++ string data type with the same length as A and B
    // Any overflow bits are ignored

    // PUT YOUR CODE HERE
    string binarySum = "";
    int carry = 0;
    for (int i = A.length() - 1; i >= 0; i--)
    {
        int sum = (A[i] - '0') + (B[i] - '0') + carry;
        char char_digit = (sum % 2) + '0';
        binarySum = char_digit + binarySum;
        carry = sum / 2;
    }
    if (carry > 0)
        binarySum = "1" + binarySum;
    if (binarySum.length() > A.length())
        binarySum.erase(0, 1);
    cout << "Returning Binary Sum: " << binarySum << endl;
    return binarySum;
}

string flipBits(string A)
{
    // Helper function
    // Pre-condition: A is a non-empty string that stores "1"s and "0"s characters
    // Post-condition: To return string A binary representation flipped, where's there's 1s replace with 0 and vice-versa
    string flippedBinary = "";
    for (int i = A.length() - 1; i >= 0; i--)
    {
        if (A[i] == '1')
            flippedBinary = '0' + flippedBinary;
        else
            flippedBinary = '1' + flippedBinary;
    }
    cout << "Returning flipped bits: " << flippedBinary << endl;
    return flippedBinary;
}

string onePattern(int L)
{
    string onePattern = "1";
    for (int i = 1; i < L; i++)
    {
        onePattern = '0' + onePattern;
    }
    return onePattern;
}
string getTwosComplementBinary(int x, int L)
{
    // Pre-condition: x is a signed integer and L > 0
    // Post-condition: the two's complement binary representation of x in L bit pattern is returned as a C++ string data type
    // Any overflow bits are ignored

    // PUT YOUR CODE HERE
    string twosComplement = "";
    if (x < 0)
    {
        string one = onePattern(L);
        string binary = getUnsignedBinary(abs(x), L);
        string flippedBinary = flipBits(binary);
        twosComplement = getBinarySum(flippedBinary, one);
    }
    else
    {
        twosComplement = getUnsignedBinary(x, L);
    }
    return twosComplement;
}
int getSignedDecimal(string s)
{
    // Pre-condition: s is the twos complement binary representation of a decimal number
    // Post-condition: The signed decimal number value of s is returned
    // PUT YOUR CODE HERE
    if (s[0] == '1')
    {
        string flippedBinary = flipBits(s);
        string one = onePattern(s.length());
        string onesComplement = getBinarySum(flippedBinary, one);
        int signedDecimal = getUnsignedDecimal(onesComplement);
        return signedDecimal * -1;
    }
    else
    {
        int signedDecimal = getUnsignedDecimal(s);
        return signedDecimal;
    }
}
int selectComputation()
{
    cout << "Select your computation" << endl;
    cout << "   1. Unsigned Binary Representation Computation" << endl;
    cout << "   2. Two's Complement Representation Computation" << endl;
    cout << "   3. Exit Program" << endl;
    int selection;
    cout << "Enter your selection (1, 2, or 3): ";
    cin >> selection;
    while (selection != 1 && selection != 2 && selection != 3)
    {
        cout << "Please enter a correct choice: ";
        cin >> selection;
    }
    return selection;
}
int main()
{
    cout << "This program demonstrates numeric information representation including" << endl;
    cout << " *** Unsigned Binary Representation," << endl;
    cout << " *** Conversion from unsigned binary to decimal," << endl;
    cout << " *** Two's Complement Binary Representation," << endl;
    cout << " *** Two's complement binary addition, and" << endl;
    cout << " *** Conversion from two's complement to decimal." << endl
         << endl;
    do
    {
        int selection = selectComputation();
        if (selection == 1)
        {
            int bit_pattern_size, num;
            cout << endl
                 << "Enter a positive integer for the bit pattern size: ";
            cin >> bit_pattern_size;
            while (bit_pattern_size <= 0)
            {
                cout << "You must enter a positive integer. Enter again please: ";
                cin >> bit_pattern_size;
            }
            cout << "Enter a non-negative integer: ";
            cin >> num;
            while (num < 0)
            {
                cout << "You must enter a non-negative integer. Enter again please: ";
                cin >> num;
            }
            string s = getUnsignedBinary(num, bit_pattern_size);
            cout << "The unsigned binary representation of " << num << " in " << bit_pattern_size << " bit is " << s << endl;
            int value = getUnsignedDecimal(s);
            cout << "This unsigned binary represents the decimal number " << value << endl;
            if (value == num)
                cout << "This is a correct result." << endl;
            else
                cout << "This is not correct result because our bit pattern is too small to store the given decimal number." << endl;
            cout << endl;
        }
        else if (selection == 2)
        {
            int bit_pattern_size, num1, num2;
            cout << endl
                 << "Enter a positive integer for the bit pattern size: ";
            cin >> bit_pattern_size;
            while (bit_pattern_size <= 0)
            {
                cout << "You must enter a positive integer. Enter again please: ";
                cin >> bit_pattern_size;
            }
            cout << "Enter an integer: ";
            cin >> num1;
            string s1 = getTwosComplementBinary(num1, bit_pattern_size);
            cout << "The two's complement binary representation of " << num1 << " in " << bit_pattern_size << " bit is " << s1 << endl;
            cout << endl;
            cout << "Enter a second integer: ";
            cin >> num2;
            string s2 = getTwosComplementBinary(num2, bit_pattern_size);
            cout << "The two's complement binary representation of " << num2 << " in " << bit_pattern_size << " bit is " << s2 << endl;
            cout << endl;
            string s3 = getBinarySum(s1, s2);
            cout << "The binary sum of " << s1 << " and " << s2 << " is " << s3 << endl;
            int sum = getSignedDecimal(s3);
            cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << " and the integer value of the binary sum is " << sum << endl;
            if (sum == num1 + num2)
                cout << "This is a correct result." << endl;
            else
                cout << "This is not correct result because our bit pattern is too small to store the sum." << endl;
        }
        else
            break;
        // system("Pause");
        cout << endl
             << endl;
    } while (true);

    // system("Pause");
    return 0;
}
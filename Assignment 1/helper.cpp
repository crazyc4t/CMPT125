#include <iostream>
#include <string>

using namespace std;

int main()
{
    // this program adds two decimal numbers stored as C++ string
    string s1, s2;
    cout << "Enter a string of digits: ";
    cin >> s1;
    cout << "Enter a string of digits: ";
    cin >> s2;
    string s3 = "";
    int carry = 0;
    for (int i = s1.length() - 1; i >= 0; i--)
    {
        cout << "Accessing characters: " << s1[i] << ", " << s2[i] << endl;
        int sum = (s1[i] - '0') + (s2[i] - '0') + carry;
        cout << "Decimal sum of the two digits: " << sum << endl;
        char char_digit = (sum % 10) + '0';
        s3.insert(0, char_digit);
        carry = sum / 2;
        cout << "Total binary number for now: " << s3 << endl;
    }
    // if (carry > 0)
    //     s3 = "1" + s3;
    cout << "The sum is: " << s3 << endl;
    return 0;
}
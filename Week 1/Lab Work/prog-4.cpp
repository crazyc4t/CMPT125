/*
Write a program that reads in the principal amount in a saving account, its interest rate, and the number
of years since the account was opened. Your program then should calculate and print the total amount
(i.e. the principal amount plus the interest) in the saving account after the time period specified. You must
decide what data types are appropriate for your variables. Use simple interest.
*/
#include <iostream>

using namespace std;

int main()
{
    double principal_amount, interest_percentage, years, total_amount, interest;
    cout << "Please insert the principal amount in your savings account: ";
    cin >> principal_amount;
    cout << "Please insert the interest rate in percentage: ";
    cin >> interest_percentage;
    cout << "Please insert the number of years the account has been opened: ";
    cin >> years;
    interest = interest_percentage / 100;
    total_amount = principal_amount * (1 + (interest * years));
    cout << "The total amount of money with interest is: " << total_amount << endl;
}
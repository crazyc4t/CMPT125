/*
In Canadian currency, the available coin denominations are toonie (2 dollar coin), loonie (one dollar
coins), quarter (25 cents), dime (10 cents), nickel (5 cents) and penny (1 cent). Write a C++ program that
reads an amount of money from the user as a double data type (for example 17.69 to mean seventeen
dollars and 59 cents) and prints the number of coins of each denomination such that the number of coins
you need is the minimum among all possible combination of coins that give rise to the amount of money
the user entered. For example an amount of money 17.69 must print 8 toonies, 1 loonie, 2 quarters, 1
dime, 1 nickel and 4 pennies.
*/
#include <iostream>

using namespace std;

int main()
{
    double amount, pennies;
    int toonies, loonies, quarters, dimes, nickels;
    cout << "Please enter the full Canadian Dollars (CAD) amount to convert to coin denominations:" << endl;
    cin >> amount;
    toonies = amount / 2;
    loonies = (amount - (toonies * 2)) / 1;
    quarters = (amount - ((toonies * 2) + loonies)) / 0.25;
    dimes = (amount - ((toonies * 2) + loonies + (quarters * 0.25))) / 0.10;
    nickels = (amount - ((toonies * 2) + loonies + (quarters * 0.25) + (dimes * 0.10))) / 0.05;
    pennies = (amount - ((toonies * 2) + loonies + (quarters * 0.25) + (dimes * 0.10) + (nickels * 0.05))) * 100;
    cout << "You have in total:" << endl;
    cout << toonies << " toonies" << endl;
    cout << loonies << " loonies" << endl;
    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickels << " nickles" << endl;
    cout << pennies << " pennies" << endl;
    cout << "In total: " << amount << " CAD" << endl;
}

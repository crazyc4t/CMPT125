/*
 Define a C++ function named printPrimes that takes one integer argument n and prints all the primes in
the range [2, n]. Write also a test program to test main program your function.
*/
#include <iostream>

using namespace std;

void printPrimes(int n)
{
    bool isPrime = true;
    if (n > 2)
    {
        cout << "Prime Number Found: 2" << endl;
    }
    else if (n == 2)
    {
        cout << "Prime Number Found: 2" << endl;
        exit(0);
    }
    for (int i = 2; i <= n; i++)
    {

        for (int j = 2; j < i; j++)
        {
            cout << "Current iteration: " << j << endl;
            if (i % j == 0)
            {
                cout << "Not Prime" << endl;
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << "Prime Number Found: " << i << endl;
        }
        else
        {
            isPrime = true;
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    printPrimes(n);
}
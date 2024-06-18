/*
Define a function named allEven that takes one positive integer argument n. Your function then must
generate n random integers in the range [-20, 20], prints each of the random numbers generated, and
finally return true if all the randomly generated integers are even numbers and returns false otherwise.
Write also a test program to test main program your function
*/
#include <iostream>
#include <ctime>

using namespace std;

bool isPrime(int n)
{
    if (n < 0)
        n *= -1;
    for (int j = 2; j < n; j++)
    {
        // cout << "Current iteration: " << j << endl;
        if (n % j == 0)
        {
            // cout << "Not Prime" << endl;
            return false;
        }
    }
    return true;
}

bool allPrime(int n)
{
    bool decision = true;
    for (int i = 1; i <= n; i++)
    {
        int r = rand() % (20 + 20 + 1) - 20;
        cout << "Random number # " << i << " is: " << r << endl;
        if (isPrime(r) == false)
        {
            cout << r << " is not a prime number" << endl;
            decision = false;
        }
        else
            cout << "Prime number found! " << r << endl;
    }
    return decision;
}

int main()
{
    srand(time(0));
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    bool areAllPrime = allPrime(n);
    if (areAllPrime)
        cout << "All random numbers generated are prime." << endl;
    else
        cout << "Not all random numbers generated are prime." << endl;
}
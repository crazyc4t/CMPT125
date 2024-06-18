/*
Define a function named allEven that takes one positive integer argument n. Your function then must
generate n random integers in the range [-20, 20], prints each of the random numbers generated, and
finally return true if all the randomly generated integers are even numbers and returns false otherwise.
Write also a test program to test main program your function
*/
#include <iostream>
#include <ctime>

using namespace std;

bool allEven(int n)
{
    bool isEven = true;
    for (int i = 1; i <= n; i++)
    {
        int r = rand() % (20 + 20 + 1) - 20;
        cout << "Random number # " << i << " is: " << r << endl;
        if (r % 2 != 0)
            isEven = false;
    }
    return isEven;
}

int main()
{
    srand(time(0));
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    bool isEven = allEven(n);
    if (isEven)
        cout << "All random numbers generated are even." << endl;
    else
        cout << "Not all random numbers generated are even." << endl;
}
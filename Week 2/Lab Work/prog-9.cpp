// Write a C++ program that prints randomly one of the following three messages: Yes, No or Not-Sure
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int decision = rand() % (2 - 0 + 1) + 0;
    if (decision == 0)
        cout << "Yes" << endl;
    if (decision == 1)
        cout << "No" << endl;
    if (decision == 2)
        cout << "Not sure" << endl;
}
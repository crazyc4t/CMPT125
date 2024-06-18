#include <iostream>

using namespace std;

int main()
{
    int n, i;
    double y;
    i = 0;
    cout << "Please enter a positive integer: " << endl;
    cin >> n;
    while (i <= n)
    {
        i++;
        y += 1 / static_cast<double>(i);
    };
    cout << y << endl;
}
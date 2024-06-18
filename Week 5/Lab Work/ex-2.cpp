#include <cmath>
#include <iostream>

using namespace std;

int quadraticSolver(double a, double b, double c, double &s1, double &s2)
{
    // determine discriminant = b^2-4ac
    int n = 0;
    double d = pow(b, 2) - 4 * a * c;
    if (d > 0)
    {
        n = 2;
        s1 = (-b + sqrt(d)) / 2 * a;
        s2 = (-b - sqrt(d)) / 2 * a;
    }
    else if (d == 0)
    {
        n = 1;
        s1 = (-b + sqrt(d)) / 2 * a;
        s2 = s1;
    }
    else
        n = -1;
    return n;
}

int main()
{
    double a, b, c;
    cout << "Enter the coefficientes a, b, c: ";
    cin >> a >> b >> c;

    double s1, s2;

    int n = quadraticSolver(a, b, c, s1, s2);
    if (n == 0)
        cout << "The quadratic equation has no real solution" << endl;
    else if (n == 1)
    {
        cout << "The quadratic equation has one real solution " << s1 << endl;
        cout << "The second same solution is " << s2 << endl;
    }
    else
        cout << "The quadratic equation has two real solutions " << s1 << " and " << s2 << endl;
    return 0;
}
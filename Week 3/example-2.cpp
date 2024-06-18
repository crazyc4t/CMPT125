#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void doubleArrayElements(float x[], int size)
{
    for (int i = 0; i < size; i++)
    {
        x[i] *= 2;
    }
}

int main()
{
    float A[] = {0.1,
                 0.2,
                 0.3,
                 0.4,
                 0.5};
    char B[3] = {'a', 'b', 'c'};
    cout << A << endl;
    cout << B << endl;
    for (int i = 0; i < 5; i++)
        cout << "Element at index " << i << " = " << A[i] << endl;

    doubleArrayElements(A, 5);
    cout << "The elements of the array after doubling each element are:" << endl;
    for (int i = 0; i < 5; i++)
        cout << "Element at index " << i << " is " << A[i] << endl;

    return 0;
}
// Define a function that takes a dynamic array of floats and its size and returns a new array of floats whose
// elements are the elements of the argument array in reverse order
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

float *reversedArray(float *A, const int size)
{
    float *revA = new float[size];
    cout << "New reversed array created" << endl;
    for (int i = 0; i < size; i++)
    {
        revA[i] = A[(size - 1) - i];
    }
    return revA;
}

int main()
{
    srand(0);
    int arraySize;
    cout << "Enter the size of the array to be created: ";
    cin >> arraySize;
    float *A = new float[arraySize];
    srand(time(0));
    for (int i = 0; i < arraySize; i++)
    {
        A[i] = rand() % (25 - 2 + 1) + 2;
    }
    cout << "The array has been populated" << endl;

    for (int i = 0; i < arraySize; i++)
        cout << "Element at index: " << i << " is: " << A[i] << endl;
    float *reversed_arr = reversedArray(A, arraySize);
    cout << "The array has been reversed" << endl;
    for (int i = 0; i < arraySize; i++)
        cout << "Element at index: " << i << " is: " << reversed_arr[i] << endl;
    delete[] reversed_arr;
    delete[] A;
}
// Define a function that takes an array of integers and its size as arguments and returns true if all the
// elements of the array are different from each other and returns false otherwise
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

bool isDistinct(int *A, const int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // cout << "Comparing index: " << i << " with index: " << j << endl;
            // cout << "Elements: " << A[i] << " " << A[j] << endl;
            if (A[i] == A[j])
            {
                // cout << "Not equal" << endl;
                return false;
            }
        }
    }
    // cout << "Equal" << endl;
    return true;
}

int main()
{
    srand(0);
    int arraySize;
    cout << "Enter the size of the array to be created: ";
    cin >> arraySize;
    int *A = new int[arraySize];
    srand(time(0));
    for (int i = 0; i < arraySize; i++)
    {
        A[i] = rand() % (2 - 1 + 1) + 1;
    }
    cout << "The array has been populated" << endl;

    for (int i = 0; i < arraySize; i++)
        cout << "Element at index: " << i << " is: " << A[i] << endl;

    cout << "Checking if every integer in the array is distinct..." << endl;
    bool decision = isDistinct(A, arraySize);
    if (decision)
        cout << "Elements in the array are distinct" << endl;
    else
        cout << "Elements in the array are not distinct" << endl;
    delete[] A;
}
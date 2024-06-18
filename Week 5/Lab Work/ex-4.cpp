// Write a program that creates a C++ dynamic array of integers of user desired size, populates the elements
// of the array with random integers in the range [-10, 10] and then prints the maximum and minimum
// elements of the array. Please note that the array size must be read from the user as follows:
// int arraySize;
// cout << "Please enter the size of the array to be created: ";
// cin >> arraySize;
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

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
        A[i] = rand() % (10 + 10 + 1) - 10;
    }
    cout << "The array has been populated" << endl;

    for (int i = 0; i < arraySize; i++)
        cout << "Element at index: " << i << " is: " << A[i] << endl;

    int max = A[0];
    int min = A[0];
    for (int i = 0; i < arraySize; i++)
    {
        if (A[i] > max)
            max = A[i];
        if (A[i] < min)
            min = A[i];
    }
    cout << "The minimum element in the array is: " << min << endl;
    cout << "The maximum element in the array is: " << max << endl;
    delete[] A;
}
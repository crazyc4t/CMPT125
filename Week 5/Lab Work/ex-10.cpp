/*
Define a function that takes two dynamic arrays of integers A and B and their sizes sizeA and sizeB
respectively and returns a new dynamic array of integers of size sizeA+sizeB and whose elements are
those elements of A followed by the elements of B
*/
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int *mixArr(const int *A, const int *B, const int sizeA, const int sizeB)
{
    int sizeC = sizeA + sizeB;
    int *mixedArr = new int[sizeC];
    for (int i = 0; i < sizeA; i++)
    {
        mixedArr[i] = A[i];
    }
    for (int i = 0; i < sizeA; i++)
    {
        mixedArr[sizeA + i] = B[i];
    }
    return mixedArr;
}
int main()
{
    srand(time(0));
    int sizeA, sizeB;
    cout << "Enter the size of the array 1 to be created: ";
    cin >> sizeA;
    cout << "Enter the size of the array 2 to be created: ";
    cin >> sizeB;
    int *A = new int[sizeA];
    int *B = new int[sizeB];
    srand(time(0));
    for (int i = 0; i < sizeA; i++)
    {
        A[i] = rand() % (25 - 2 + 1) + 2;
    }
    for (int i = 0; i < sizeB; i++)
    {
        B[i] = rand() % (25 - 2 + 1) + 2;
    }
    cout << "The arrays has been populated" << endl;
    cout << "Reading array A" << endl;
    for (int i = 0; i < sizeA; i++)
    {
        cout << "Element at index: " << i << " is: " << A[i] << endl;
    }

    cout << "Reading array B" << endl;
    for (int i = 0; i < sizeB; i++)
    {
        cout << "Element at index: " << i << " is: " << B[i] << endl;
    }
    int *C = mixArr(A, B, sizeA, sizeB);
    cout << "Reading mixed array" << endl;
    for (int i = 0; i < sizeA + sizeB; i++)
    {
        cout << "Element at index: " << i << " is: " << C[i] << endl;
    }
    delete[] A;
    delete[] B;
}
/*
Define a function that takes a C++ dynamic array of integers and its size as arguments and returns the
number of prime numbers in the array. Assume all the elements of the array are positive integers greater
than 1.
Test your function by writing a main program that creates a dynamic array of integers of user defined size,
populates the array with random integers in the range [2, 100] and calls the function to determine how
many prime number elements are there in the array and finally prints the message "A prime number is
Fraser International College CMPT125 Week 5 Lab Work – Dr. Yonas T. Weldeselassie (Ph.D.) Page 2
found the array " if there is at least one prime number element in the array; otherwise it prints the
message "No prime number is found the array ".
*/
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            cout << "Found! Prime Number: " << n << endl;
        return true;
    }
    return false;
}

int primeQuantity(int *A, const int size)
{
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        if (isPrime(A[i]))
            n++;
    }
    return n;
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
        A[i] = rand() % (100 - 2 + 1) + 2;
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

    cout << "Finding prime numbers..." << endl;
    int primes = primeQuantity(A, arraySize);
    if (primes > 0)
        cout << "There were at least one prime found!" << endl;
    else
        cout << "No prime number was found" << endl;

    delete[] A;
}
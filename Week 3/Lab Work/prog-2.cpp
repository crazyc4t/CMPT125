/*
Write a program that declares a static array of char data type of size 11, populates the first ten elements of
the array with random charscters in the range ['a', 'z'] and assigns the last element of the array a NULL
character, prints the cstring, reverses the cstring, and finally prints the reversed cstring
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void populateArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (25 + 25 + 1) - 25;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Element at index " << i << " = " << arr[i] << endl;
    }
}

void reverseArray(int arr[], int revArr[], int size)
{
    int i = 0;
    for (int j = size - 1; j >= 0; j--)
    {
        revArr[i] = arr[j];
        i++;
    }
}

int main()
{
    srand(time(0));
    int arr[10], revArr[10];
    populateArray(arr, 10);
    cout << "After populating the array is: " << endl;
    printArray(arr, 10);
    cout << "After reversing the array is: " << endl;
    reverseArray(arr, revArr, 10);
    printArray(revArr, 10);
}

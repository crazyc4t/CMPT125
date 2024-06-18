// Define a function that takes a C++ dynamic array of characters and its size as arguments and returns the
// number of alphabets in the array. Alphabet means any upper case or lower case English letter.
// Test your function by writing a main program that creates a dynamic array of characters of user defined
// size, populates the array with random characters whose ascii codes are in the range [48, 122] and calls the
// function to determine how many alphabet character elements are there in the array and finally prints the
// message "An alphabet is found the array " if there is at least one alphabet character element in the array;
// otherwise it prints the message "No alphabet character is found the array"
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

// 65 - 122
bool isChar(char ch)
{
    if (ch > 'z')
        return false;
    else if (ch < 'A')
        return false;
    return true;
}

int charQuantity(char *A, const int size)
{
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        if (isChar(A[i]))
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
    char *A = new char[arraySize];
    srand(time(0));
    for (int i = 0; i < arraySize; i++)
    {
        A[i] = rand() % (122 - 48 + 1) + 48;
    }
    cout << "The array has been populated" << endl;

    for (int i = 0; i < arraySize; i++)
        cout << "Element at index: " << i << " is: " << A[i] << endl;

    cout << "Finding characters in the array..." << endl;
    int total = charQuantity(A, arraySize);
    if (total > 0)
        cout << "There is at least one alphabet letter in the array!" << endl;
    else
        cout << "There no alphabet characters in the array" << endl;
    delete[] A;
}
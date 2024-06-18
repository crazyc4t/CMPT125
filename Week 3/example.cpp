#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int arr[10];
    srand(time(0));
    for (int i = 0; i < 10; i++)
        arr[i] = rand() % 21 + 5;
    for (int i = 0; i < 10; i++)
        cout << "Element at index " << i << " = " << arr[i] << endl;

    int s = 0;
    for (int i = 0; i < 10; i++)
        s += arr[i];
    cout << "The sum of all the elements of the array is " << s << endl;
    int e = 0, o = 0;
    for (int i = 0; i < 10; i++)
        arr[i] % 2 == 0 ? e++ : o++;
    cout << "The array has " << e << " even and " << o << " odd elements" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a value for the element at index " << i << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
        cout << "Element at index " << i << " = " << arr[i] << endl;
    int min = arr[0];
    for (int i = 1; i < 10; i++)
        if (arr[i] < min)
            min = arr[i];
    cout << "The minimum element is " << min << endl;

    return 0;
}
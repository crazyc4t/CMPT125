#include <iostream>
using namespace std;
int cstringlen(const char C[])
{
    int len = 0;
    for (int i = 0; C[i] != '\0'; i++)
        len++;
    return len;
}

int main()
{
    char C1[] = {
        'a',
        'b',
        'c',
        '\0',
    };
    cout << "The cstring is " << C1 << endl;
    int length = cstringlen(C1);
    cout << "The length of the cstring is " << length << endl;
    for (int i = 0; i < length; i++)
        C1[i]++;
    cout << "After modification, the cstring is " << C1 << endl;
}

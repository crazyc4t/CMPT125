#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> A1;
    vector<float> A2(2);
    vector<string> A3(3, "FIC");
    cout << "A1 size is: " << A1.size() << ", A2 size is: " << A2.size() << ", A3 size is: " << A3.size() << endl;

    cout << "Elements of A1 are: ";
    for (int i = 0; i < A1.size(); i++)
        cout << A1[i] << "  ";
    cout << endl;
    cout << "Elements of A2 are: ";
    for (int i = 0; i < A2.size(); i++)
        cout << A2[i] << "  ";
    cout << endl;
    cout << "Elements of A3 are: ";
    for (int i = 0; i < A3.size(); i++)
        cout << A3[i] << "  ";
    cout << endl;

    // system("Pause");
    return 0;
}
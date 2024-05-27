#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void displayArray(struct Array arr)
{
    cout << "Elements of Array are: -" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

int main()
{
    struct Array arr;

    cout << "Enter the size of array: -" << endl;
    cin >> arr.size;

    arr.A = new int[arr.size];

    cout << "Enter the number of numbers: -" << endl;
    cin >> arr.length;

    cout << "Enter the elements of array: -" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }

    displayArray(arr);

    return 0;
}

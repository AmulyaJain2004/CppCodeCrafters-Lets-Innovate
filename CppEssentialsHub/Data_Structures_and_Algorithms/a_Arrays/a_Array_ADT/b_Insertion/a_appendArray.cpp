#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void appendArray(struct Array *arr, int element)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = element;
    }
}

void displayArray(struct Array arr)
{
    cout << "Elements of array are: -" << endl;
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

    arr.A = new int[arr.length];

    cout << "Enter the number of numbers: -" << endl;
    cin >> arr.length;

    cout << "Enter the elements of array: -" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }

    int x;
    cout << "Enter the element to append: -" << endl;
    cin >> x;

    appendArray(&arr, x);

    displayArray(arr);

    return 0;
}

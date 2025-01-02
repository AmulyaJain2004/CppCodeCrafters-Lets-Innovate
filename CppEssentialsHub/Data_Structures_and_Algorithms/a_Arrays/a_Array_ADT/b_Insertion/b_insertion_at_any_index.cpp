#include <iostream> 
using namespace std;

struct Array 
{
    int *A;
    int size;
    int length;
};

void insertArray(struct Array *arr, int index, int element)
{
    if ((index >= 0)&&(index <= arr->length - 1))
    {
        for (int i = arr->length; i> index; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = element;
    }
    else 
    {
        cout << endl << "Index entered is not valid" << endl;
    }
}

void displayArray(struct Array arr)
{
    cout << "Elements of array are: -" << endl;
    for (int i = 0 ; i< arr.length; i++)
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

    cout << "Enter the elements: -" << endl;
    for (int i = 0 ; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }

    int index, x; 
    cout << "Enter the index and element to insert: -" << endl;
    cin >> index >> x;
    
    insertArray(&arr, index, x);

    displayArray(arr);
    
    return 0;
}

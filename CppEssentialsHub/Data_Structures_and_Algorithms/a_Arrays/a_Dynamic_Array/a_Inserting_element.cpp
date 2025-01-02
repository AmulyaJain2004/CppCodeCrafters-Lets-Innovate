#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: -" << endl;
    cin >> n;

    int *arr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n ; i++)
    {
        cout << "Enter "<< i+1 << "element: ";
        cin >> arr[i];
    }
    free(arr);
    return 0;
}

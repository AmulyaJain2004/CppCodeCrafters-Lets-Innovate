#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: -" << endl;
    cin >> n;

    int *arr = (int*)malloc(n*sizeof(int));
    int *cpy_arr = (int*)malloc(n*sizeof(int));

    cout << "Taking input in Reference array: -"<< endl;
    for (int i = 0; i < n ; i++)
    {
        cout << "Enter "<< i+1 << " element: ";
        cin >> arr[i];
    }
    
    cout << "\nReference array: -" << endl;
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nNew Array before copying: -" << endl;
    for (int i = 0; i < n ; i++)
    {
        cout << cpy_arr[i] << " ";
    }

    cout << "\n\nCopying Reference array to New Array: -"<< endl;
    for (int i = 0; i < n ; i++)
    {
        cpy_arr[i] = arr[i] ;
    } 
    
    cout << "\nDisplaying New copied array: -"<< endl;
    for (int i = 0; i < n ; i++)
    {
        cout << cpy_arr[i] << " ";
    }
    return 0;
}

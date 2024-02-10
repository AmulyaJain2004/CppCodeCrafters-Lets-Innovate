#include <iostream>
using namespace std;
int main()
{
    int m,n;

    cout<< "Enter number of rows and columns for 2d array: -" << endl;
    cin >> m >> n;

    int arr1[m][n], arr2[m][n], arr3[m][n];
    
    cout << "Enter elements in array 1: -" << endl;
    for (int i  = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
            cout << "Enter " << i+1 << " element: ";
            cin>> arr1[i][j];
        }
    }

    cout << "Enter elements in array 2: -" << endl;
    for (int i  = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
            cout << "Enter " << i+1 << " element: ";
            cin>> arr2[i][j];
        }
    }

    for (int i  = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
            arr3[i][j] = 0;
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            cout << arr3[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}

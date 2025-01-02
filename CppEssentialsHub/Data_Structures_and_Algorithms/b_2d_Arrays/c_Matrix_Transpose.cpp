#include <iostream>
using namespace std;
int main()
{
    int m,n;

    cout<< "Enter number of rows and columns for 2d array: -" << endl;
    cin >> m >> n;

    int arr[m][n];
    
    for (int i  = 0; i < m ; i++)
    {
        for (int j =0; j < n; j++)
        {
            cout << "Enter element: ";
            cin >> arr[i][j];
        }
    }
    for (int i  = 0; i < m ; i++)
    {
        for (int j =0; j < n; j++)
        {
            cout << arr[i][j] << "\t" ;
        }
        cout << endl;
    }

    int transp_arr[n][m];
    cout << "Transposed Array is: - " << endl;
    for (int i  = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
            transp_arr[j][i] = arr[i][j];
        }
        cout << endl;
    }

    for (int i  = 0; i< n ; i++)
    {
        for (int j =0; j< m; j++)
        {
            cout << transp_arr[i][j] << "\t" ;
        }
        cout << endl;
    }
    return 0;
}

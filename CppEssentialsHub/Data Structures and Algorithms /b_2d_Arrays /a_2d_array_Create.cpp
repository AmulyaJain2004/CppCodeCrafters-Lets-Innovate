#include <iostream>
using namespace std;
int main()
{
    int m,n;

    cout<< "Enter number of rows and columns for 2d array: -" << endl;
    cin >> m >> n;

    int arr[m][n];
    
    for (int i  = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
            cout << "Enter element: ";
            cin>> arr[i][j];
        }
    }
    for (int i  = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
            cout << arr[i][j] << "\t" ;
        }
        cout << endl;
    }
    return 0;
}

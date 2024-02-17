#include <iostream>
using namespace std;
int main()
{
    int row, col; 
    cout << "Enter the number of rows and columns for 2d array" << endl; 
    cin >>  row >> col;

    int arr[row][col];

    cout << "Enter the elements in lower trianguar matrix: -" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j =0; j <col; j++)
        {
            if (i>=j)
            {
                cout << "Enter " << "[" << i << j << "]"  << " element: " << endl;
                cin >> arr[i][j];
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }

    cout << "Traversing and printing lower triangular matrix: -" << endl;
    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j< col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
    return  0;
}

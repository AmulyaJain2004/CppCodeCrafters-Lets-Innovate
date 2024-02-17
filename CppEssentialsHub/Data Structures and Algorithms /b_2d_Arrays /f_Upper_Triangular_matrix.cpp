#include <iostream>
using namespace std;
int main ()
{
    int row, col;
    cout << "Enter the number of rows and columns of 2d matrix: -" << endl;
    cin >> row >> col;

    int arr[row][col];

    cout << "Enter the elements in upper triangular matrix: -" << endl;
    for (int i = 0; i<row; i++)
    {
        for (int j =0; j<col; j++)
        {
            if (j >= i)
            {
                cout << "Enter " << "[" << i << " " << j << "]" << " elememt: ";
                cin >> arr[i][j];
            } 
            else
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j= 0; j< col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

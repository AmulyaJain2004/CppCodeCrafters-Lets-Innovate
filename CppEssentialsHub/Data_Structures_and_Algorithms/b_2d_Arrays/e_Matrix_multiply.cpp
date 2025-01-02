#include <iostream>
using namespace std;
int main()
{
    int row1,col1,row2,col2;

    cout<< "Enter number of rows and columns for matrix 1: -" << endl;
    cin >> row1 >> col1;

    cout<< "Enter number of rows and columns for matrix 2: -" << endl;
    cin >> row2 >> col2;    
    
    if (col1 != row2)
    {
        cout << "Matrix multiplication cannot be done if column number of first matrix and row number of second matrix is not equal" <<endl;
        return 0;
    }

    int arr1[row1][col1];
    cout << "Enter the values of 1st matrix: -" << endl;
    for (int i  = 0; i< row1 ; i++)
    {
        for (int j =0; j< col1; j++)
        {
            cout << "Enter element: ";
            cin>> arr1[i][j];
        }
    }

    int arr2[row2][col2];
    cout << "Enter the values of 2nd matrix: -" << endl;
    for (int i  = 0; i< row2 ; i++)
    {
        for (int j =0; j< col2; j++)
        {
            cout << "Enter element: ";
            cin>> arr2[i][j];
        }
    }

    int arr3[row1][col2];

    for(int i = 0; i< row1; i++)
    {
        for (int j=0; j<col2; j++)
        {
            arr3[i][j] =0;
            for (int k=0; k<col1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "Dispaying elements of matrix 1: -"<< endl;
    for (int i = 0; i<row1; i++)
    {
        for (int j= 0; j<col1; j++)
        {
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Dispaying elements of matrix 2: -"<< endl;
    for (int i = 0; i<row2; i++)
    {
        for (int j= 0; j<col2; j++)
        {
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Matrix Multiplication: -" << endl;
    cout << "Dispaying elements of matrix 3: -"<< endl;
    for (int i = 0; i<row1; i++)
    {
        for (int j= 0; j<col2; j++)
        {
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

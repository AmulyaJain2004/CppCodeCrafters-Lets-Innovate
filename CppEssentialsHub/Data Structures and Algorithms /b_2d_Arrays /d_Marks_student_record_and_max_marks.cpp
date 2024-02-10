#include <iostream>
using namespace std;
int main()
{
    int m,n;

    cout<< "Enter number of students and number of subjects for Student marks record: -" << endl;
    cin >> m >> n;

    int arr[m][n];
    
    for (int i  = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
            cout << "Enter element: ";
            cin>> arr[i][j];
        }
        cout << i+1 << " record completed" << endl;
    }

    for (int i  = 0; i< m ; i++)
    {
        for (int j =0; j< n; j++)
        {
            cout << arr[i][j] << "\t" ;
        }
        cout << endl;
    }
    
    int max_marks = 0;
    for (int i  = 0; i< n ; i++)
    {
        for (int j =0; j< m; j++)
        {
            if (max_marks < arr[j][i])
            {
                max_marks = arr[j][i];
            } 
        }
        cout << "Maximum marks in subject " << i+1 << " is: " << max_marks << endl;
        max_marks = 0;
    }
    return 0;
}

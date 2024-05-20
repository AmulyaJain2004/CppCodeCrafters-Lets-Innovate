/*
Mixed parallelogram pointing right side for side length n = 5
* * * * *
    * * * *
        * * *
            * * 
                *
            * * 
        * * *
    * * * *
* * * * *

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of side: -" << endl;
    cin >> n;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i; j++)
        {
            if (i == n - 1)
            {
                flag = 1;
                break;
            }
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--)
        {
            if (i == n - 1)
            {
                flag = 1;
                break;
            }
            cout << "* ";
        }
        if (flag == 1)
        {
            break;
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 2 * (n - i - 1); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = i - 1; j < 2 * i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

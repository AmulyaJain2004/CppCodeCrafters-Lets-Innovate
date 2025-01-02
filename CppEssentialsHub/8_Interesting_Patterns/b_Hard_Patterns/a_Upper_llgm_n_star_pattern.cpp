/*
Upper parallelogram of side 5
* * * * *
    * * * *
        * * *
            * *
                *
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of side: -" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

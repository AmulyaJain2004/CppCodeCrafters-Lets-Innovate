/*
Down pointing Triangle height = 5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * * 
        *
*/

#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter the height of triangle: -" << endl;
    cin >> n;

    for (int i = 0; i< n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = (2*(n-i)-1); j > 0 ; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

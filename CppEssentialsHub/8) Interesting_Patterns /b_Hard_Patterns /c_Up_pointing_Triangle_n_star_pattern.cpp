/*
Up pointing triangle for height = 5
        *
      * * *
    * * * * * 
  * * * * * * *
* * * * * * * * *

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the height of triangle: -" <<endl;
    cin >> n;

    for (int i = 0 ; i < n; i++)
    {
        for (int j = n- i- 1; j >0; j--)
        {
            cout << "  " ;
        }
        for (int j = 0  ; j < ((2*i)+1); j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: -" << endl;
    cin >> n;

    float *arr = (float*)malloc(n*sizeof(int));

    for (int i = 0; i < n ; i++)
    {
        cout << "Enter "<< i+1 << "element: ";
        cin >> arr[i];
    }
    
    float sum_arr = 0;
    for (int i = 0; i < n ; i++)
    {
        sum_arr += arr[i];
    }
    
    float mean = sum_arr / n ;
    cout  << "Sum of Array elements and Mean of Array respectively: "<< sum_arr << " " << mean ;

    return 0;
}

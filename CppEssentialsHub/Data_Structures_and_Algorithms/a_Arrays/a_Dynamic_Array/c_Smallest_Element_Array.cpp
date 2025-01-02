#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: -" << endl;
    cin >> n;

    float *arr = (float*)malloc(n*sizeof(int));

    cout<< "Entering numbers in array: -"<< endl;
    for (int i = 0; i < n ; i++)
    {
        cout << "Enter "<< i+1 << " element: ";
        cin >> arr[i];
    }

    float min_element = arr[0];
    int min_position = 0;
    // Linear Search 
    for (int i = 1; i < n ; i++)
    {
        if (arr[i]<min_element)
        {
            min_element = arr[i];
            min_position = i;
        }
    }

    cout  << "Smallest element in Entered element is "<< min_element <<" and it's position is " << min_position+1 <<endl;
    return 0;
}

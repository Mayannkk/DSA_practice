// find the max and min no. in a single scan in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6, 2, 7, 4, 16, 9, 10, 1, 0, 14}, i, min, max;
    int n = sizeof(arr) / sizeof(arr[i]);
    min = max =arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        else if(arr[i]<min)
            min=arr[i];
    }
    cout << "minimum no. is: " << min << endl << "maximum no. is: " << max;
    return 0;
}
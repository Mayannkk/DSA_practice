//Find a pair in an unsorted array with sum k (a+b=k), where k could be any given no.
#include <iostream>
using namespace std;
/*
int main()
{
    int arr[]={6,2,7,16,4,9,10,1,0,14},i,j;
    int n = sizeof(arr) / sizeof(arr[i]);
    int k;
    cout << "Enter the value you want as a summation: "<< endl;
    cin >> k;
    for(i=0; i<n-1; i++)
    {
        for(j=(i+1); j<n; j++)
        {
            if(arr[i]+arr[j]==k)
                cout << arr[i] << "+" << arr[j] <<"=" << k << endl;
        }
    }
    return 0;
}
*/
int main()

{
    int arr[] = {6, 2, 7, 4, 16, 9, 10, 1, 0, 14, 6}, i;
    int n = sizeof(arr) / sizeof(arr[i]);
    int H[17] = {0};
    int k;
    cout << "Enter the value you want as a summation: " << endl;
    cin >> k;
    for (i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            if (H[k - arr[i]] != 0)
                cout << arr[i] << "+" << k - arr[i] << "=" << k << endl;
        }
        H[arr[i]]++;
    }
    return 0;
}
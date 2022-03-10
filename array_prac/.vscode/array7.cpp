// //Find a pair in an sorted array with sum k (a+b=k), where k could be any given no.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,3,4,6,8,10,11,14,17},i,j;
    int n = sizeof(arr) / sizeof(arr[i]);
    i=0,j=n-1;
    int k;
    cout << "Enter the value of as summation: "<< endl;
    cin >> k;
    while(i<j) // for(i=0,j=n-1; i<j; ) using for loop
    {
        if(arr[i]+arr[j]==k)
        {
            cout << arr[i] <<"+" << arr[j] << "=" << k << endl;
            i++,j--;
        }
        else if(arr[i]+arr[j]>k)
            j--;
        else
            i++;
    }
    return 0;
}
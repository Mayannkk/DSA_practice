#include <bits/stdc++.h>
using namespace std;
int kthsmallestele(int a[], int l, int r, int k)
{
    int i,s=0;
    sort(a, a+(r+1));
    for(i=0;i<=r;i++)
    {
        if(i+1==k){
            s=a[i];
            break;
        }
    }
    return s;
}
int main()
{
    int arr[]={1,11,23,10,4,8}, i;
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    
    //cout << n << endl;
    //for (i=0; i<n; i++)
    //    cout << arr[i] << " ";
    cout << kthsmallestele(arr,0,n-1,k);
    
}

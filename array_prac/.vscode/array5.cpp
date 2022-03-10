//Find the duplicate element in a sorted array.
//both are my methods, if u want to see sir method jaake video dkh. from vid 31 to 33
#include <iostream>
using namespace std;
/*
int main()
{
    int arr[]={1,2,3,3,4,5,6,6,6,7,8,9,10},i;
    int n = sizeof(arr) / sizeof(arr[i]);
    cout << "The duplicate digits are: ";
    for(i=0; i<n; i++)
    {
        if(arr[i+1]==arr[i])
            cout << arr[i] << " ";
    }
    return 0;
}
*/
int main()
{
    int arr[]={2,8,5,4,10,1,10,9,5,5},i;
    int n = sizeof(arr) / sizeof(arr[i]);
    int H[11]={0};
    for(i=0; i<n; i++)
        H[arr[i]]++;
    for(i=1; i<11; i++)
    {
        if(H[i]>1)
        {    
            cout << i << " is repeating "<< H[i] << " times " <<endl ;
        }
    }
    
    return 0;
}

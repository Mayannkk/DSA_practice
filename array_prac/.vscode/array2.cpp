//find the missing element from the unsorted array

#include <iostream>
using namespace std;
int main()
{
    int arr[]={3,6,1,4,8,9,12,11,10},i;
    int H[12]={0}; //This is called hash table(array with 0 values)
    int n = sizeof(arr)/sizeof(arr[i]);
    cout << "the missing terms are: ";
    for(i=0; i<n; i++)
    {
        H[arr[i]]++; // here, we increment the value from 0 to 1 of the index no. which present in arr[].
    }
    for(i=1; i<=12; i++)
    {
        if(H[i]==0)
            cout << i << " ";//Now, which ever index no. is filled with 0, that no. is not present arr[]. 
    }
    return 0;
}
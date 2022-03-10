// find multiple missing elements in a sorted array
#include <iostream>
using namespace std;

int main()
{
    int arr[]={6,7,8,11,12,13,14,15,17,18,20}, i=0;
    int n = sizeof(arr) / sizeof(arr[i]);
    int diff = arr[i]-i;
    cout << "the missing element is: ";
    for(i=0; i<n; i++)
    {
        if((arr[i]-i)!=diff)
        {
            while(diff<arr[i]-i)
            {
                cout << i+diff << " ";
                diff++;
            }
            
        }
    }
    return 0;
}
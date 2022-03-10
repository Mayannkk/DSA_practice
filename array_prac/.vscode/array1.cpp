// que:find a missing element in a sorted array
#include <iostream>
using namespace std;
/*
udemy's uncle method:-
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 10}, i;
    int sum = 0,s;
    int n = sizeof(arr) / sizeof(arr[i]);
    for (i = 0; i < n; i++)
        sum = sum + arr[i];
    s=arr[8]*(arr[8]+1)/2;
    cout << "the missing element from the array is: " << s-sum ;
    return 0;
}
*/
//my method:-
int main()
{
    int arr[] = {6, 7, 8, 10, 11, 12, 13, 14, 15, 16}, i;
    int n = sizeof(arr) / sizeof(arr[i]);
    int s = 0;
    for (i = 0; i < n; i++)
    {
        if ((arr[i + 1] - arr[i]) == 1)
            continue;
        else
        {
            s = arr[i] + 1;
            break;
        }
    }
    cout << "the missing digit is: " << s;
    return 0;
}
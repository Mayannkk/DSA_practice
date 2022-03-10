// find the min no. of jump(jitni a[i] ki value hai utni no.of jump krega)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, jump = 0, s = 0;
    while (i < n - 1)
    {
        s = i + arr[i];
        i = s;
        jump++;
    }
    cout << jump;
    return 0;
}
// find the N largest no. in a givrn array.

#include <bits/stdc++.h>
using namespace std;

int largest_num(int arr[], int n, int k)
{
    if (k > n)
    {
        cout << "Invalid value." << endl;
    }

    int max[10] = {0}, i, j;
    if (k < 1)
        cout << "invalid input" << endl;
    for (i = 0; i < n; i++)
    {
    }
}
int main(void)
{
    int arr[] = {23, 45, 12, 1, 3, 34, 10, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k, i;
    cout << "array is: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl
         << "Enter the no.of largest values you want: ";
    cin >> k;

    largest_num(arr, n, k);
    return 0;
}

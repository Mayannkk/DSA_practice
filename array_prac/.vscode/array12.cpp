// que:- majority element(no. of element > n/2) in a given array.

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int nums[], int n)
{
    int max = 0, majority;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
            max = nums[i];

        int hash[max] = {0};
        for (int i = 0; i < n; i++)
        {
            hash[nums[i]]++;
        }

        for (int i = 0; i <= max; i++)
        {
            if (hash[i] > n / 2)
                majority = i;
        }

        return majority;
    }
}

int main()
{
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "The majority Element is: " << majorityElement(nums, n);
}
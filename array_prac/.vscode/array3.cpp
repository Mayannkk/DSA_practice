// find the three largest of given array of integer

#include <iostream>
using namespace std;

void three_largest(int arr[], int arr_size)
{
    int i, first, second, third;

    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }

    third = first = second = INT8_MIN; //here INT8_MIN is having the minimum value (it is already present in the function)
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }

        else if (arr[i] > third)
            third = arr[i];
    }

    cout << "\nThree largest elements are: " << first << ", " << second << ", " << third;
}
int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, -70};
    int i,n = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array: ";
    for(i=0; i<n; i++)
        cout << nums[i] << " ";
    three_largest(nums, n);
    return 0;
}
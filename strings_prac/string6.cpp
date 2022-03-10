//find the duplicate in a string.

#include <bits/stdc++.h>
using namespace std;
/*method 1: using hash table
int main()
{
    char s[] = "finding";
    int H[26] = {0};
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        H[s[i] - 97] += 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << char(i+97) << " (";
            cout << H[i] << " Times)" << endl;
        }
    }
    return 0;
}

method two: using bitwise left shift, merging and masking*/
int main()
{
    char s[] = "finding";
    long int H = 0, x = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        x = 1;
        x = x << s[i] - 97;
        if ((x & H) > 0)
        {
            cout << s[i] << endl;
        }
        else
        {
            H=x|H;
        }
    }

    return 0;
}

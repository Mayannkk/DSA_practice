#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "finding";
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
            cout << s(i + 97) << " (";
            cout << H[i] << " Times)" << endl;
        }
    }
    return 0;
}
// Reverse a string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[] = "python is good";
    char temp;
    int n = strlen(ch);
    int i, j;
    cout << n << endl;
    cout << "the real string is: " << ch << endl;
    for (i = 0, j = n - 1; i <= j; i++, j--)
    {
        temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }
    cout << "reversed string is: " << ch;
    return 0;
}
/*

int main()
{
    string s1 = "python is good";
    string s2;
    int i, j;
    for (i = s1.size() - 1; i >= 0; i--)
    {
        s2 = s2 + s1[i];
    }

    cout << s2;

    return 0;
}
*/
// Check if a string is pallindrome or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[]="malayalam";
    int n = strlen(s);
    int i, j;
    for(i=0,j=n-1; i<=j; i++,j--)
    {
        if(s[i]!=s[j])
            break;
    }
    if(s[i]==s[j])
        cout << "the string is pallindrome: " << s << endl;
    else
        cout << "the string is not pallindrome: "<< s << endl;
    return 0;
}
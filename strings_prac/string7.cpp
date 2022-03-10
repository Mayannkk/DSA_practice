// check if two strings are anagram(same alphabets use at same no. of time).
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[] = "observe";
    char s2[] = "verbose";
    int H[26]={0},i;
    for(i=0;s1[i]!='\0';i++)
    {
        H[s1[i]-97]+=1;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        H[s2[i]-97]-=1;
        if(H[s2[i]-97]<0)
        {
            cout << "the strings are not anagram" << endl;
            break;
        }
    }
    if(s2[i]=='\0')
        cout << "strings are anagram";
    return 0;
    
}
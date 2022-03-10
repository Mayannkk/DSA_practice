//compare two strings
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[] = "painter";
    char s2[] = "painting";
    int i,j;
    for(i=0,j=0; s1[i]!='\0' && s2[j]!='\0'; i++,j++)
    {
       if(s1[i]!=s2[j])
        break;
    }
    if(s1[i]==s2[j])
        cout << "strins are same: " << s1 << endl;
    else if(s1[i]<s2[j])
        cout << "string 1 is smaller: " << s1 << endl;
    else
        cout << "string 2 is smaller: " << s2 << endl;
    return 0;
}
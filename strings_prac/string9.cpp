//check the string is pangram or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[]="The Quick Brown Fox Jumps Over The Lazy Dog";
    int i,H[26]={0};
    int flag =0;

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        H[s[i]-97]+=1;
    }
    for(i=0;i<26;i++)
    {
        if(H[i]==0)
        {
            flag++;
            break;
        }
    }
    if(flag == 1)
        cout << "string is not pangram" << endl;
    else
    {
        cout << "string is pangram" << endl;
    }
    
    cout << s << endl;
    return 0;
}
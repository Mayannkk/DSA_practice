//convert small letter string to upper and upper to small
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "HellO WorlD";
    int i;  
    for(i=0; A[i]!='\0'; i++)
    {
        if((A[i])>='A' && A[i]<='Z')
            A[i]+=32;
        else if(A[i]>='a' && A[i]<='z')
            A[i]-=32;
        cout << A[i];
    }   
    return 0;
}
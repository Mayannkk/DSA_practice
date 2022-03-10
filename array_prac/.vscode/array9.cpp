//give the union of two array.
#include <iostream>
using namespace std;
    
int largest(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}

int doUnion(int a[], int n, int b[], int m)  {

  int i,count=0,hashsize =0;
  
  int amax=largest(a,n);
  int bmax=largest(b,m);
  
  if(amax>bmax)
      hashsize = amax;

  else
     hashsize = bmax;
     
    int hash[hashsize + 1] = {0};
  
  for(i=0;i<n;i++){
      hash[a[i]]++;
  }
  for(i=0;i<m;i++){
      hash[b[i]]++;
  }
  for(i=0;i<=hashsize;i++){
      if(hash[i]>0){
          count++;
      }
  }
     return count;
}    
int main()
{
    int A[]={1,2,3,4,5}, B[]={1,2,3} ;
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(B)/sizeof(B[0]);
    cout << "the union of the array is: "<< doUnion(A,n,B,m);
}
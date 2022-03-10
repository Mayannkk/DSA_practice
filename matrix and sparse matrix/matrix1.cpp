//Diagonal matrix(n*n)
#include <bits/stdc++.h>
using namespace std;

class Diagonal
{
private:
    int *A; // pointer which points to the array
    int n; //size of array is 5*5 matrix "n" will be 5(the array which store non zero ele.)
public:
    Diagonal()//non-parameterized constructor
    {
        int n=2;// this is array of size 2 in case the size is not defined,
        A=new int[2];//we will take a array of size 2*2
    }
    Diagonal(int n)//parameterized constructor
    {
        this->n=n;//right side n is local parameter,where left side n is private int n.
        A=new int [n];
    }
    ~Diagonal()//destructor 
    {
        delete []A;// it will delete the array which is created inside the heap
    }
    void set(int i, int j, int x);//it will set the value in array taking parameters as row,col and value respt
    int get(int i, int j);//it will get the value of given row and col.
    void display();  
};
void Diagonal::set(int i,int j,int x)
{
    if(i==j)
        A[i-1]=x;
}
int Diagonal::get(int i,int j)
{
    if(i==j)
        return A[i-1];
    return 0;
}
void Diagonal::display()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                cout << A[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    Diagonal d(4);
    d.set (1,1,5);
    d.set (2,2,10);
    d.set (3,3,15);
    d.set (4,4,20);

    d.display();
    return 0;

}
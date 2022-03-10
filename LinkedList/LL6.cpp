#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int col;
    int data;
    node *next;
};
class SparseMatrix
{
private:
    node *A[5];

public:
    SparseMatrix(int m, int n, int num);
    ~SparseMatrix();

    void Display();
};

SparseMatrix::SparseMatrix(int m, int n, int num)
{
}
int main()
{
    SparseMatrix s(5, 6, 7);
}
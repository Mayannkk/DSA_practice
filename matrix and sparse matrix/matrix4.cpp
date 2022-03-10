//Tridiogonal matrix
#include <bits/stdc++.h>
using namespace std;

class tridigonal
{
private:
    int *A;
    int n;

public:
    tridigonal()
    {
        int n = 2;
        A = new int[(3 * 2) - 2];
    }
    tridigonal(int n)
    {
        this->n = n;
        A = new int[(3 * n) - 2];
    }
    ~tridigonal()
    {
        delete[] A;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void Display();
};

void tridigonal::set(int i, int j, int x)
{
    if (i - j == 1)
        A[i - 2] = x;
    else if (i - j == 0)
        A[(n - 1) + (i - 1)] = x;
    else if (i - j == -1)
        A[(2 * n - 1) + (i - 1)] = x;
}
int tridigonal::get(int i, int j)
{
    if (i - j == 1)
        return A[i - 2];
    else if (i - j == 0)
        return A[(n - 1) + (i - 1)];
    else if (i - j == -1)
        return A[(2 * n - 1) + (i - 1)];
    else
        return 0;
}
void tridigonal::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i - j == 1)
                cout << A[i - 2] << " ";
            else if (i - j == 0)
                cout << A[(n - 1) + (i - 1)] << " ";
            else if (i - j == -1)
                cout << A[(2 * n - 1) + (i - 1)] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    tridigonal m(4);
    m.set(1, 1, 9);
    m.set(1, 2, 1);
    m.set(2, 1, 19);
    m.set(2, 2, 9);
    m.set(2, 3, 12);
    m.set(3, 2, 10);
    m.set(3, 3, 4);
    m.set(3, 4, 6);
    m.set(4, 3, 2);
    m.set(4, 4, 8);

    m.Display();
}
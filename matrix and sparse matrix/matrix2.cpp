//triangular matrix
#include <bits/stdc++.h>
using namespace std;

class Lowtriangular
{
private:
    int *A;
    int n;

public:
    Lowtriangular()
    {
        int n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    Lowtriangular(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~Lowtriangular()
    {
        delete[] A;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};
void Lowtriangular::set(int i, int j, int x)
{
    if (i >= j)
        A[(i * (i - 1) / 2) + (j - 1)] = x;
}
int Lowtriangular::get(int i, int j)
{
    if (i >= j)
        return A[(i * (i - 1) / 2) + (j - 1)];
    else
        return 0;
}
void Lowtriangular::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << A[(i * (i - 1) / 2) + (j - 1)] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    Lowtriangular m(4);
    m.set(1, 1, 2);
    m.set(2, 1, 5);
    m.set(2, 2, 15);
    m.set(3, 1, 12);
    m.set(3, 2, 4);
    m.set(3, 3, 22);
    m.set(4, 1, 10);
    m.set(4, 2, 3);
    m.set(4, 3, 1);
    m.set(4, 4, 14);

    cout << m.get(2, 4) << endl;
    m.display();

    return 0;
}
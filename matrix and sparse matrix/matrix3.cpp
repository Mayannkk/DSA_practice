#include <bits/stdc++.h>
using namespace std;

class uppertri
{
private:
    int *A;
    int n;

public:
    uppertri()
    {
        int n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    uppertri(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~uppertri()
    {
        delete[] A;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void uppertri::set(int i, int j, int x)
{
    if (j >= i)
        A[(j * (j - 1) / 2) + i - 1] = x;
}

int uppertri::get(int i, int j)
{
    if (j >= i)
        return (A[(j * (j - 1) / 2) + i - 1]);
    else
        return 0;
}

void uppertri::display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
                cout << A[(j * (j - 1) / 2) + i - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    uppertri m(4);
    m.set(1, 1, 2);
    m.set(1, 2, 5);
    m.set(2, 2, 22);
    m.set(1, 3, 15);
    m.set(2, 3, 10);
    m.set(3, 3, 3);
    m.set(1, 4, 12);
    m.set(2, 4, 4);
    m.set(3, 4, 1);
    m.set(4, 4, 14);

    m.display();

    cout << m.get(2, 4);
    return 0;
}
//jaideep's logic
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node *create(int a[], int n)
{
    node *temp, *last, *root = nullptr;
    for (int i = 0; i < n; i++)
    {
        temp = new node(a[i]);

        if (root == nullptr)
            root = temp;

        else
            last->next = temp;

        last = temp;
    }
    return root;
}

int main()
{
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};

    node *root1 = create(a, 3);
    node *root2 = create(b, 3);

    node *temp = root1;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = root2;

    while (root1)
    {
        cout << root1->data << " ";
        root1 = root1->next;
    }

    return 0;
}

//circular linked list
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class CircularLL
{
private:
    node *head;

public:
    CircularLL() { head = NULL; }
    CircularLL(int A[], int n);
    ~CircularLL();

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int length();
};

CircularLL::CircularLL(int A[], int n)
{
    node *t, *last;
    int i = 0;

    head = new node;
    head->data = A[0];
    head->next = head;
    last = head;

    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

CircularLL::~CircularLL()
{
    node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    while (p != head)
    {
        p->next = head->next;
        delete head;
        head = p->next;
    }
    if (p == head)
    {
        delete head;
        head = nullptr;
    }
}

void CircularLL::Display()
{
    node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

void CircularLL::Insert(int index, int x)
{
    node *t, *p = head;
    if (index < 0 || index > length())
    {
        cout << "Invalid index.!!";
        return;
    }
    if (index == 0)
    {
        t = new node;
        t->data = x;
        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            t->next = head;
            while (p->next != head)
            {
                p = p->next;
            }
            p->next = t;
            head = t;
        }
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = new node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int CircularLL::length()
{
    int count = 0;
    node *p = head;
    do
    {
        count++;
        p = p->next;
    } while (p != head);
    return count;
}

int CircularLL::Delete(int index)
{
    node *q, *p = head;
    int x = -1;
    if (index < 0 || index > length())
    {
        cout << "Invalid Index..!!" << endl;
        return -1;
    }
    if (index == 0)
    {
        while (p->next != head)
        {
            p = p->next;
        }
        x = head->data;
        if (p == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        for (int i = 0; i < index - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    CircularLL c(A, 6);

    cout << "The deleted element is: " << c.Delete(5) << endl;
    cout << "Length of your linked list is: " << c.length() << endl;
    cout << "your linked list is:-" << endl;
    c.Display();
    return 0;
}
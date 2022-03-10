//doubly linked list

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;
};
class DoublyLL
{
private:
    node *first;

public:
    DoublyLL() { first = NULL; }
    DoublyLL(int A[], int n);
    ~DoublyLL();

    void insert(int index, int x);
    int Delete(int index);
    int length();
    void Display();
};

DoublyLL::DoublyLL(int A[], int n)
{
    node *t, *last;
    first = new node;
    first->prev = first->next = NULL;
    first->data = A[0];
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        last->next = t;
        t->prev = last;
        t->next = NULL;
        last = t;
    }
}

DoublyLL::~DoublyLL()
{
    node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void DoublyLL::Display()
{
    node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void DoublyLL::insert(int index, int x)
{
    node *t, *p = first;

    if (index < 1 || index > length() + 1)
    {
        cout << "Invalid Index..!!" << endl;
        return;
    }

    if (index == 1)
    {
        t = new node;
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        t = new node;
        t->data = x;
        for (int i = 0; i < index - 2; i++)
        {
            p = p->next;
        }
        t->prev = p;
        t->next = p->next;
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}

int DoublyLL::length()
{
    node *p = first;
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}

int DoublyLL::Delete(int index)
{
    node *p = first;
    int x = -1;
    if (index < 1 || index > length())
    {
        cout << "Inalid Index..!!" << endl;
        return -1;
    }
    if (index == 1)
    {
        first = first->next;
        if (first)
            first->prev = NULL;
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        x = p->data;
        delete p;
    }
    return x;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    DoublyLL d(A, 6);

    //d.insert(8, 7);

    cout << "The deleted element is: " << d.Delete(6) << endl;
    cout << "The length of the linked list is: " << d.length() << endl;
    cout << "your linked list is:- " << endl;
    d.Display();
    return 0;
}
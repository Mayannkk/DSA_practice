//circular doubly linked list
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *prev;
    int data;
    node *next;
};

class CircularDLL
{
private:
    node *head;

public:
    CircularDLL() { head = NULL; }
    CircularDLL(int A[], int n);
    ~CircularDLL();

    void insert(int index, int x);
    int Delete(int index);
    int length();
    void Display();
    int FindMid();
};

CircularDLL::CircularDLL(int A[], int n)
{
    node *t, *last;
    head = new node;
    head->prev = head;
    head->data = A[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        last->next = t;
        t->prev = last;
        t->next = head;
        head->prev = t;
        last = t;
    }
}

CircularDLL::~CircularDLL()
{
    node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    while (p != head)
    {
        p->next = head->next;
        p->next->prev = head->prev;
        delete head;
        head = p->next;
    }
    if (p == head)
    {
        delete head;
        head = nullptr;
    }
}

void CircularDLL::Display()
{
    node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

int CircularDLL::length()
{
    node *p = head;
    int count = 0;
    do
    {
        count++;
        p = p->next;
    } while (p != head);
    return count;
}
void CircularDLL::insert(int index, int x)
{
    node *t, *p = head;
    if (index < 1 || index > length() + 1)
    {
        cout << "Invalid Index..!!";
        return;
    }
    if (index == 1)
    {
        t = new node;
        t->data = x;
        if (head == NULL)
        {
            head = t;
            head->next = head;
            head->prev = head;
        }
        else
        {
            t->next = head;
            t->prev = head->prev;
            head->prev->next = t;
            head->prev = t;
            head = t;
        }
    }
    else
    {
        t = new node;
        t->data = x;
        for (int i = 1; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        t->prev = p;
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}

int CircularDLL::Delete(int index)
{
    node *p = head;
    int x = -1;
    if (index < 1 || index > length())
    {
        cout << "Invalid Index.!!";
        return -1;
    }
    if (index == 1)
    {
        p->prev->next = p->next;
        p->next->prev = p->prev;
        x = p->data;
        p = p->next;
        delete head;
        head = p;
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        p->next->prev = p->prev;
        x = p->data;
        delete p;
    }
    return x;
}
//find the middle element of liked list
int CircularDLL::FindMid()
{
    node *p = head;
    int x = -1;
    if (length() % 2 == 0)
    {
        for (int i = 1; i < length() / 2; i++)
        {
            p = p->next;
        }
        x = p->data;
    }

    else
    {
        for (int i = 1; i <= length() / 2; i++)
        {
            p = p->next;
        }
        x = p->data;
    }

    return x;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    CircularDLL l(A, 5);
    l.insert(1, 98);
    cout << "The deleted element is: " << l.Delete(2) << endl;
    cout << "The length of the list is: " << l.length() << endl;
    cout << "The middle element of the linked list is: " << l.FindMid() << endl;
    l.Display();
    return 0;
}
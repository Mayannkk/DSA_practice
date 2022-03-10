//basic functions of linear linked list.

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
private:
    node *first;

public:
    LinkedList() { first = NULL; }
    LinkedList(int A[], int n);
    ~LinkedList();

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int length();
    int MaxEle();
    int sum();
    int search(int index);
    void SearchKey(int key);
    int isSorted();
    void RemDuplicate();
    void Reverse();
    void concatinate();
};
LinkedList ::LinkedList(int A[], int n)
{
    node *last, *t;
    int i = 0;

    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
LinkedList::~LinkedList()
{
    node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}
void LinkedList ::Display()
{
    node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int LinkedList ::length()
{
    int counter = 0;
    node *p = first;
    while (p)
    {
        counter++;
        p = p->next;
    }
    return counter;
}

void LinkedList ::Insert(int index, int x)
{
    node *t, *p = first;
    if (index < 0 || index > length())
    {
        cout << "Invalid index!!" << endl;
        return;
    }
    t = new node;
    t->data = x;
    t->next = NULL;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}
int LinkedList::Delete(int index)
{
    node *p, *q = NULL;
    int x = -1;
    if (index < 1 || index > length())
    {
        cout << "Invalid Index!!" << endl;
        return -1;
    }
    if (index == 1)
    {
        p = first;
        x = p->data;
        first = first->next;
        delete p;
    }
    else
    {
        p = first;
        q = NULL;
        for (int i = 0; i < index - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

int LinkedList ::MaxEle()
{
    int x = INT8_MIN;
    node *p = first;
    for (int i = 0; i < length(); i++)
    {
        if (p->data > x)
            x = p->data;
        p = p->next;
    }
    return x;
}

int LinkedList::sum()
{
    int sum = 0;
    node *p = first;
    for (int i = 0; i < length(); i++)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

//searching via index, which index has what value.
int LinkedList::search(int index)
{
    node *p = first;
    int x = -1;
    if (index < 0 || index > length())
    {
        cout << "Invalid index!!" << endl;
        return -1;
    }
    if (index == 0)
        return p->data;
    else
    {
        for (int i = 0; i < index - 1 && p; i++)
        {
            p = p->next;
        }
        x = p->data;
    }
    return x;
}

//searching via key(is that number(key)present in a linked list or not.)
void LinkedList::SearchKey(int key)
{
    node *p = first;
    while (p)
    {
        if (key == p->data)
        {
            cout << "Key " << p->data << " is present in the linked list." << endl;
            return;
        }
        p = p->next;
    }
    if (p == NULL)
        cout << "key is not found" << endl;
}

int LinkedList::isSorted()
{
    node *p = first;
    int x = INT8_MIN;
    while (p)
    {
        if (p->data < x)
        {
            return -1;
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    return 0;
}

//remove duplicate elements from a sorted linked list
void LinkedList::RemDuplicate()
{
    node *p = first;
    node *q = first->next;
    while (q)
    {
        if (q->data == p->data)
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
        else
        {
            p = q;
            q = q->next;
        }
    }
}

void LinkedList::Reverse()
{
    node *p = first, *q = NULL, *r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
/*
void LinkedList::concatinate()
{
    node *p = first;
    while (p->next)
    {
        p = p->next;
    }
    p->next = second;
}
*/
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList l(A, 5);

    int B[] = {10, 20, 30, 40, 50};
    LinkedList l2(B, 5);

    /*
    l.Insert(3, 8);
    l.Insert(2, 18);
    l.Insert(1, 17);

    cout << "the length of the linked list is: " << l.length() << endl;
    cout << "The maximum element from the linked list is: " << l.MaxEle() << endl;
    cout << "The sumation of linked list: " << l.sum() << endl;
    cout << "the element at the typed index is: " << l.search(3) << endl;
    l.SearchKey(18);
    int x = l.isSorted();
    if (x == 0)
        cout << "the list is sorted" << endl;
    else
        cout << "the list is not sorted" << endl;
    cout << "your linked list is:-" << endl;
    l.RemDuplicate();
    l.Reverse();
    */

    l.Display();

    l2.Display();
    return 0;
}
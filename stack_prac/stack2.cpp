// stack with linked list.
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack() { top = NULL; }
    void push(int x);
    int pop();
    int peek(int pos);
    void Display();
};

void Stack::push(int x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop()
{
    int x = -1;
    if (top == NULL)
    {
        cout << "stack is empty" << endl;
        return x;
    }
    else
    {
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}

void Stack::Display()
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int Stack::peek(int pos)
{
    Node *p = top;
    int x = -1;
    if (pos < 1)
    {
        cout << "Invalid syntax" << endl;
        return x;
    }
    else
    {
        for (int i = 0; i < pos - 1 && p != NULL; i++)
            p = p->next;
        if (p != NULL)
            return p->data;
        else
        {
            cout << "Invalid syntax" << endl;
            return x;
        }
    }
}

int main()
{
    Stack s1;
    s1.push(3);
    s1.push(6);
    s1.push(10);
    s1.push(2);
    s1.push(13);

    cout << "The pop out element is: " << s1.pop() << endl;
    cout << s1.peek(4) << endl;
    s1.Display();
    return 0;
}
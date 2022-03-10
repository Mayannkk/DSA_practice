//stack using array
#include <bits/stdc++.h>
using namespace std;

template <class T> //template class independent of data type(generic class)
class Stack
{
private:
    int size;
    int top;
    T *st; //T can be any datatype we want
public:
    Stack()
    {
        size = 10;
        top = -1;
        st = new T[size];
    }

    Stack(int size)
    {
        this->size = size;
        top = -1;
        st = new T[this->size];
    }

    void push(T x);
    T pop();
    void Display();
    T peek(int index);
    T isEmpty();
    int isBalanced(T arr[]);
    int isOperand(T x);
    int precedence(T x);
    void convert(T arr[]);
};

template <class T>
void Stack<T>::push(T x)
{
    if (top == size - 1)
        cout << "Stack overflow" << endl;
    else
    {
        top++;
        st[top] = x;
    }
}

template <class T>
T Stack<T>::pop()
{
    T x = -1;
    if (top == -1)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    else
    {
        x = st[top];
        top--;
    }
    return x;
}

template <class T>
void Stack<T>::Display()
{
    for (int i = top; i >= 0; i--)
        cout << st[i] << " ";
    cout << endl;
}

template <class T>
T Stack<T>::peek(int index)
{
    T x = -1;
    if (top - index + 1 < 1)
        cout << "Invalid Index" << endl;
    else
        x = st[top - index + 1];

    return x;
}

template <class T>
T Stack<T>::isEmpty()
{
    if (top == -1)
        return -1;
    else
        return 0;
}

template <class T>
int Stack<T>::isBalanced(T arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '(')
            push(arr[i]);
        else if (arr[i] == ')')
        {
            if (top == -1)
                return 0;
            pop();
        }
    }
    if (top == -1)
        return -1;
    else
        return 0;
}

template <class T>
int Stack<T>::isOperand(T x)
{
    if (x == "+" || x == "-" || x == "*" || x == "/")
        return 0;
    else
        return 1;
}

template <class T>
int Stack<T>::precedence(T x)
{
    if (x == "+" || x == "-")
        return 1;
    else if (x == "*" || x == "/")
        return 2;
    else
        return 0;
}

template <class T>
void Stack<T>::convert(T arr[])
{
    Stack<char> st(5);
    char postfix[]
}

int main()
{
    Stack<char> s1(5);
    char arr[] = "((a+b)*(c-d))";
    cout << s1.isBalanced(arr) << endl;
    if (s1.isBalanced(arr) == 0)
        cout << "paranhesis mismatch" << endl;
    else
        cout << "paranthesis matched" << endl;
    // s1.push('a');
    // s1.push('b');
    // s1.push('f');
    // s1.push('w');
    // s1.push('o');

    // cout << s1.peek(4)<< endl;
    //cout<< "the deleted element is: "<< s1.pop() << endl;
    s1.Display();

    return 0;
}
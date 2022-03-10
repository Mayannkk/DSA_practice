#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *q;

public:
    Queue()
    {
        front = rear = -1;
        int size = 10;
        q = new int[size];
    }

    Queue(int size)
    {
        front = rear = -1;
        size = 10;
    }
};
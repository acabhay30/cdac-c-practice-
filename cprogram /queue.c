#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int rear;
    int front;
    int size;
    int *q;
};

struct queue s1;

int underflow()
{
    if (s1.front == -1 || s1.rear == -1)

    {
        printf("The queue underflowed");
        return 1;
    }
    else
    {
        return 0;
    }
}

int overflow()
{
    if (s1.rear == s1.size - 1)
    {
        printf("The queu will overflow");
        return 1;
    }
    else
    {
        return 0;
    }
}

int enque(int n)
{
    if (overflow())
    {
        printf("the queue is already full");
    }
    else
    {
        s1.rear++;
        s1.q[s1.rear] = n;

        if (s1.front == -1)
        {
            s1.front = 0;
        }
    }
}

void deque()
{
    if (underflow())
    {
        printf("The queue will underflow");
    }
    else
    {
        s1.front++;
        if (s1.front>s1.rear)
        {
            s1.front = -1;
            s1.rear = -1;
        }
        
    }
}

int peek()
{
    if (underflow())
    {
        printf("The queue is empty");
    }
    else
    {
        return s1.q[s1.front];
    }
}

int main()
{
    s1.front = -1;
    s1.rear = -1;
    s1.size = 5;
    s1.q = (int *)malloc(sizeof(s1.size));

    enque(10);
    printf("%d", peek());
}
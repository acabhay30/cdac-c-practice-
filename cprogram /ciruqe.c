#include <stdio.h>
#include <stdlib.h>

struct ciruqe
{
    int size;
    int rear;
    int front;
    int *q;
};

struct ciruqe s1;

int overflow()
{
    if ((s1.rear + 1) % s1.size == s1.front)
    {
        printf("The ques is overflown");
        return 1;
    }
    else
    {
        return 0;
    }
}

int underflow()
{
    if (s1.front == -1 || s1.rear == -1)
    {
        printf("The que underflowed");
        return 1;
    }
    else
    {
        return 0;
    }
}

void enque(int n)
{
    if (overflow())
    {
        printf("The que is full");
    }
    
    if (s1.front == -1 )
    {
        s1.front = s1.rear = 0;
    }
    else
    {
       s1.rear = (s1.rear + 1) % s1.size;
    }

    s1.q[s1.rear] = n;
    
}

void deque()
{
    if (underflow())
    {
        printf("the que will underflow");
    }
    
    
    if (s1.rear == s1.front)
    {
        s1.front = -1;
        s1.rear = -1;
    }
    else
    {
        s1.front = (s1.front + 1) % s1.size;
    }
}

int peek()
{
    if(underflow())
    {
        printf("Nothing is present in the que");
    }
    else
    {
        return s1.q[s1.front];
    }
    
}


int main()
{
    s1.size = 5;
    s1.rear = -1;
    s1.front = -1;
    s1.q = (int *)malloc(s1.size*sizeof(int));
    enque(12);
    enque(13);
    enque(14);
    enque(15);
    enque(12);
    enque(13);
    //printf("%d\n", peek());
    //deque();    
    //printf("%d", peek());
}
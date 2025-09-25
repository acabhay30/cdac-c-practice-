#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int *arr;
    int top;
    int size;
};

struct stack s1;

int isemp()
{
    if (s1.top == -1)
    {
        printf("The stack is empty");
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull()
{
    if (s1.top == s1.size - 1)
    {
        // printf("the stack is full");
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int n)
{
    if (isfull())
    {
        printf("The stack is full not able to psuh");
    }
    else
    {
        s1.top++;
        s1.arr[s1.top] = n;
    }
}

void pop()
{
    int n;
    if (isemp())
    {
        printf("The stack is empty");
    }
    else
    {
        s1.top--;
        n = s1.arr[s1.top];
        printf("The %d has been poped",n);
    }
}

int peek()
{
    return s1.arr[s1.top];
}

int main()
{
    s1.size = 5;
    s1.top = -1;
    s1.arr = (int *)malloc(sizeof(s1.size));
    push(12);
    push(13);
    push(12);
    push(13);
    pop();
    printf("%d", peek());
    free(s1.arr);
}
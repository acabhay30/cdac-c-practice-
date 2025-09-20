#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
struct stack s;

int is_empty()
{
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int is_full()
{
    if (s.top == s.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int val)
{
    if (is_full())
    {
        printf("the stack is full not able to add");
    }
    else
    {
        s.top++;
        s.arr[s.top] = val;
    }
}

void pop()
{
    if (is_empty())
    {
        printf("the stack is already empty not able to pop");
    }
    else
    {
        //val = s->arr[s->top];
        s.top--;
    }
}

int peek()
{
    return s.arr[s.top];
}

int main()
{
    // s = (struct stack *)malloc(sizeof(struct stack));  // ✅ Allocate memory for the struct first
    // if (s == NULL) {
    //     printf("Memory allocation for stack failed\n");
    //     return 1;
    }
    s.size = 5;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));
    if (s.arr == NULL)
    {
        printf("memory not allocated");
    }

    push(23);
    push (45);
    push(67);
    push(89);
    push(90);
    pop();
    printf("%d", peek());
    free(s.arr);
}

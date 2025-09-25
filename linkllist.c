#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void count(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("the link list is empty");
    }
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("%d", count);
}

void insert_end(struct node *head, int data)
{
    if (head == NULL)
    {
        printf("the link list is empty");
    }
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    } 
    ptr->next = temp;
}

void insert_beg(struct node *head, int data)
{
    struct node *ptr;
    ptr->next = head;
    head = ptr;

}

void delete_beg(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp); 
    temp = NULL;
    
}

void insert_pos(struct node *head, int data, int pos)
{
     struct node *ptr = head;
     struct node *ptr2 = malloc(sizeof(struct node));
     ptr2->data = 12;
     ptr2->next = NULL;

     pos--;
     while (pos!= 1)
     {
        ptr = ptr->next;
        pos--;
     }
     ptr2->next = ptr->next;
     ptr->next = ptr2;
     


}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    head->next = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 33;
    head->next->next = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 44;
    current->next = NULL;
    head->next->next->next = current;

    count(head);
}
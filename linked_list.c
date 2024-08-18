#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;

void add_note(int inp)
{
    struct node *temp;

    if(head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = inp;
        head->next = NULL;
        last = head;
    }
    else 
    {
        temp = malloc(sizeof(struct node));
        temp->data = inp;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display()
{
    struct node *i = head;
    for(i = head ; i!=NULL ; i = i->next)
    {
        printf(" %d" , i->data);
    }
}


void main()
{
    add_note(5);
    add_note(4);
    add_note(3);
    add_note(4);
    add_note(5);
    display();
}
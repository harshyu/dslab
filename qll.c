#include <stdio.h>
#include <stdlib.h>

struct node {
    int info ;
    struct node *next;

};

struct node *front = NULL;
struct node *rear = NULL;

void insert_end()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    if (p==NULL)
    printf("Overflow");
    else
    {
        if (front == NULL && rear == NULL)
        {
            front = rear ;
        }
    }else 
    {
        rear -> next = p;
        rear = p;
        rear -> next = NULL;

    }
}




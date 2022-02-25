/* Write c program to inplement a stack using single linked list. */

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int data;
    struct node *link;
}node;

void push(node **,int );
void pop(node **);
void peek(node **);
void Display(node **);

int main()
{
    node *top=NULL;
    push(&top,10);
    push(&top,20);
    push(&top,30);
    push(&top,40);
    push(&top,50);
    Display(&top);
    pop(&top);
    pop(&top);
    Display(&top);
    peek(&top);
    return 0;
}

void push(node **top_arg,int n)
{
    node *new=(node *)malloc(sizeof(node));
    if(new==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        new->data=n;
        new->link=NULL;
        if(*top_arg==NULL)
        {
            *top_arg=new;
        }
        else
        {
            new->link=*top_arg;
            *top_arg=new;
        }
    }
}

void pop(node **top_arg)
{
    if(*top_arg==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        node *temp=NULL;
        temp=*top_arg;
        *top_arg=temp->link;
        printf("Popping the element: %d\n",temp->data);
        free(temp);
    }
}

void peek(node **top_arg)
{
    if(*top_arg==NULL)
    {
        printf("Stack is empty\n");
    }
    node *temp=NULL;
    temp=*top_arg;
    printf("Top of element in the stack: %d\n",temp->data);
}

void Display(node **top_arg)
{
    node *temp=*top_arg;
    if(*top_arg==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->link;
            if(temp!=NULL)
            {
                printf("-->");
            }
        }
        printf("\n");
    }
}

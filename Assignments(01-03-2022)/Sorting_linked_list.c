/* Write a C program to Sort the Single linked list */

#include<stdio.h>
#include<stdlib.h>
#define NODE_SIZE 5

void Insert(int );
void Display();
void Sort_list();

typedef struct
{
    int data;
    struct node *link;
}node;

node *head=NULL;
int main()
{
    int n,i=0;
    while(i++<NODE_SIZE)
    {
        printf("Enter a data: ");
        scanf("%d",&n);
        Insert(n);
    }
    printf("Before Sorting the list: \n");
    Display();
    printf("After Sorting the list: \n");
    Sort_list();
    Display();
    return 0;
}

void Insert(int n)
{
    node *new=(node *)malloc(sizeof(node));
    node *temp=NULL;
    int i=0;
    if(new==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        new->data=n;
        new->link=NULL;
    }
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        temp=head;
        while((temp->link)!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
    }
}

void Display()
{
    node *temp=NULL;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL) // Go till the last node tp print the data
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

void Sort_list()
{
    node *a,*b;
    int temp;
    b=head;
    if(b==NULL)
    {
        printf("list is empty: \n");
    }
    else
    while(b!=NULL)
    {
        a=b->link;
        while(a!=NULL)
        {
            if(b->data<a->data)
            {
                temp=b->data;
                b->data=a->data;
                a->data=temp;
            }
            a=a->link;
        }
        b=b->link;
    }
}

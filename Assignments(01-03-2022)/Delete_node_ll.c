/* Write C program to deleting a node from a Linked list of 5 nodes. */

#include<stdio.h>
#include<stdlib.h>
#define NODE_SIZE 5


typedef struct stu
{
    int data;
    struct stu *link;
}node;

void Insert(node **,int );
void Delete_node(node **,int );
void Display(node **);

int main()
{
    int n,i=0,a,key;
    node *head=NULL;
    while(1)
    {
        printf("1.Insert\n2.Delete_node\n3.Display\n0.Quit\n");
        printf("Enter above choices: ");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
                    while(i++<NODE_SIZE)
                    {
                        printf("Enter a data: ");
                        scanf("%d",&n);
                        Insert(&head,n);
                    }
                    break;
            case 2: printf("Enter a element for delete node: ");
                    scanf("%d",&key);
                    Delete_node(&head,key);
                    break;
            case 3:Display(&head);
                    break;
            default: goto EXIT;
        }
    }
    EXIT:printf("Executed Successfully\n");
    return 0;
}

void Insert(node **head_arg,int n)
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
    if(*head_arg==NULL)
    {
        *head_arg=new;
    }
    else
    {
        temp=*head_arg;
        while((temp->link)!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
    }
}


void Delete_node(node **head_arg,int key)
{
    node *temp=NULL;
    temp=*head_arg;
    if(temp==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            if((temp->data)==key)
            {
                node *ptr=NULL;
                ptr=temp->link;
                temp->link=ptr->link;
                free(ptr);
            }
            temp=temp->link;
        }
    }
}


void Display(node **head_arg)
{
    node *temp=NULL;
    if(*head_arg==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp=*head_arg;
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

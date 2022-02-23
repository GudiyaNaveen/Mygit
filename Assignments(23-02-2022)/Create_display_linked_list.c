/* Write C program to create and display the linked list. */

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char ch;
    struct node *ptr;
}node;

node *head=NULL;
int main()
{
    node *new_node,*temp_node=0;
    int i,len;
    printf("Enter size of list: ");
    scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
        new_node=(node *)malloc(sizeof(node));
        printf("Enter elements in list: ");
        scanf("\n%c",&new_node->ch);
        new_node->ptr=NULL;
        if(head==0)
        {
            head=temp_node=new_node;
        }
        else
        {
            temp_node->ptr=new_node;
            temp_node=new_node;
        }
    }
    printf("Elements in an linked list: \n");
    for(i=1;i<=len;i++)
    {
        printf("%c",head->ch);
        head=head->ptr;
        if(i<len)
        {
            printf("-->");
        }
    }
    printf("\n");
    return 0;
}

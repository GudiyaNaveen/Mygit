#include<stdio.h>
#include<stdlib.h>

int My_strcmp(stu_1,stu_2);

typedef struct student
{
    char name[20];
    int id;
    struct student *ptr;
}stu_1;

typedef struct stu
{
    char name[20];
    int id;
    struct student *ptr;
}stu_2;

int main()
{
    stu_1 *s_heap,s_stack;
    stu_2 s2;
    int i,f;
#if 0
    s=(stu *)malloc(sizeof(stu));
    printf("Enter a name and rollnumber: ");
    scanf("%s%d",s->name,&s->id);
    printf("Name: %s\nRollNo: %d\n",s->name,s->id);
#endif
    printf("Enter a name and rollnumber: ");
    scanf("%s%d%s%d",s_stack.name,&s_stack.id,s2.name,&s2.id);
    //printf("Name: %s\nRollNo: %d\n",s_stack.name,s_stack.id,s2.name,s2.id);
   /* for(i=0;s_stack.name[i]!='\0';i++)
    {
        if(s_stack.name[i]!=s2.name[i])
        {
            flag=0;
            break;
        }
    }
    */
    f=My_strcmp(s_stack,s2);
    (f==1) ? printf("Both are equal\n"):printf("Both are not equal\n");
    return 0;
}

int My_strcmp(stu_1 s1,stu_2 s2)
{
    int i=0,flag=1;
    for(i=0;s1.name[i]!=0;i++)
    {
        if(s1.name[i]!=s2.name[i])
        {
            flag=0;
            break;
        }
    }
    return flag;
}

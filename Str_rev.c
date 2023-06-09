#include<stdio.h>

void Mystrrev(char *);
int main()
{
    char str[1000]="Thunder soft India private limited";
    Mystrrev(str);
    printf("Reverse of string: %s\n",str);
    return 0;
}

void Mystrrev(char *s)
{
    int i,len=0;
    char *x,*sp,*ep,temp;
    x=s;
    while(*x!='\0')
    {
        len++;
        x=x+1;
    }
    printf("length of string: %d\n",len);
    sp=s;
    ep=s;
    for(i=0;i<len-1;i++)
    {
        ep++;
    }
    for(i=0;i<len/2;i++)
    {
        temp=*sp;
        *sp=*ep;
        *ep=temp;
        sp++;
        ep--;
    }
}
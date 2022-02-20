#include<stdio.h>
#define SIZE 100
char first_capital(char *s);

int main()
{
    char str[SIZE],ch;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    ch=first_capital(str);
    (ch==0) ? printf("There is no capital letter in string: %s\n",str) : printf("There is a first capital letter in a string is %c\n",ch);
    return 0;
}

char first_capital(char *s)
{
    static int i=0,len=0;
    char *x;
    x=s;
    while(*x++!='\0')
    {
        len++;
    }
    if(i<len)
    {
        if(*(s+i)>='A' && *(s+i)<='Z')
        {
            return *(s+i);
        }
        else
        {
            i=i+1;
            return first_capital(s);
        }
    }
    else
        return 0;
}

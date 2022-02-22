/* Write a c program to compare 2 strings using pointers.
   use:macro, const , function poiniter.
*/

#include<stdio.h>
#define SIZE 100
int Mystrcmp(char *s1,char *s2);
int main()
{
    int (*fp)(char *,char *);
    char str1[SIZE],str2[SIZE];
    int n;
    printf("Enter a string1: ");
    scanf("%[^\n]s",str1);
    printf("Enter a string2: ");
    scanf("\n%[^\n]s",str2);
    fp=&Mystrcmp;
    n=fp(str1,str2);
    (n==1) ?  printf("Both are equal\n") : printf("Both are not equal\n");
    return 0;
}

int Mystrcmp(char *s1,char *s2)
{
    int i,f=1;
    const int *p=&f;
    for(i=0;*(s1+i)!='\0';i++)
    {
        if(*(s1+i)!=(*(s2+i)))
        {
            f=0;
            break;
        }
    }
    return f; 
}

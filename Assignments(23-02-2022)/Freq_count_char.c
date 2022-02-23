/* Write a C program to find frequency of character in a string. "abcabcddd" */

#include<stdio.h>
#include<string.h>
#define SIZE 500
void My_memcpy(char *,char *,int );
int main()
{
    char str1[SIZE],str2[SIZE];
    int n;
    printf("Enter a string: ");
    scanf("%[^\n]s",str1);
    printf("Enter how many bytes to copy a string: ");
    scanf("%d",&n);
    My_memcpy(str2,str1,n);
    printf("Copy the string from source to destination(dest<--src) of %d bytes: %s\n",n,str2);
    return 0;
}

void My_memcpy(char *d,char *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *(d+i)=*(s+i);
    }
    *(d+i)='\0';
}

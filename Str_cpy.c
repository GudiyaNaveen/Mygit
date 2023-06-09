#include<stdio.h>

void Mystrcpy(char *, char *);

int main()
{
    char str1[100],str2[100];
	
    printf("Enter a string: ");
    scanf("%[^\n]s",str1);
	
    Mystrcpy(str2,str1);
    printf("Copy of str2<--str1: %s\n",str2);
    return 0;
}

void Mystrcpy(char *s2, char *s1)
{
    while(((*s2++)=(*s1++))!='\0');
   
}
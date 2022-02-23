/* Write a C program to find frequency of character in a string. "abcabcddd" */

#include<stdio.h>
#define SIZE 1000

int freq_ch(char *s,char);
int main()
{
    int (*fp)(char *,char);
    char str[SIZE],ch;
    char *const ptr=&ch;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    printf("Enter a charcter for frequency: ");
    scanf("\n%c",&ch);
    fp=freq_ch;
    fp(str,ch);
    return 0;
}

int freq_ch(char *s,char ch)
{
    int i=0,count=0;
    for(i=0;*(s+i)!='\0';i++)
    {
        if(*(s+i)==ch)
        {
            count++;
        }
    }
    return count;
    printf("Frequency of '%c' charcter is: %d\n",ch,count);
}

#include <stdio.h>
#include <string.h>
#define SIZE 100

void print_com_vowel(char *,char *);

int main()
{
    void (*fp)(char *,char *);
    char str1[SIZE],str2[SIZE];
    int i;
    printf("Enter two strings:\n");
    scanf("%s%s",str1,str2);
    fp=&print_com_vowel;
    fp(str1,str2);
    printf("\n");
    return 0;
}


void print_com_vowel(char *s1,char *s2)
{
    int i,j,k;
    printf("Common vowels in a two strings:\n");
    for(i=0;*(s1+i)!='\0';i++)
    {
        for(k=0;k<i;k++)
        {
            if(*(s1+i)==(*(s1+k)))
                break;
        }
        if(i==k)
        {
            if((*(s1+i))=='a'||(*(s1+i))=='e'||(*(s1+i))=='i'||(*(s1+i))=='o'||(*(s1+i))=='u'||(*(s1+i))=='A'||(*(s1+i))=='E'||(*(s1+i))=='I'||(*(s1+i))=='O'||(*(s1+i))=='U')
            {
                for(j=0;*(s2+j)!='\0';j++)
                {
                
                    if((*(s1+i))==(*(s2+j)))
                    {
                        printf("%c,",*(s1+i));
                        break;
                    }
                }
            }
        }
    }
}

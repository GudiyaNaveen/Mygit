#include<stdio.h>
void Mystrcmp(char *s1,char *s2);
int main()
{
    char str1[100],str2[100];
    printf("Enter a string1: ");
    scanf("%[^\n]s",str1);
    printf("Enter a string2: ");
    scanf("\n%[^\n]s",str2);
    Mystrcmp(str1,str2);
    return 0;
}

void Mystrcmp(char *s1,char *s2)
{
    int i,f=1;
    for(i=0;*(s1+i)!='\0';i++)
    {
        if(*(s1+i)!=(*(s2+i)))
        {
            f=0;
            break;
        }
    }
    f ? printf("Both are equal\n") : printf("Both are not equal\n");
}

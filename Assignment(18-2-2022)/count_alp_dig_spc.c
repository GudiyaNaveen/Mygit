#include <stdio.h>
#define SIZE 1000
int main()
{
    char str[SIZE];
    int i,alp=0,dig=0,spc=0;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z') || str[i]>='a' && str[i]<='z')
            alp++;
        else if(str[i]>=48 && str[i]<=57)
            dig++;
        else
            spc++;
    }
    printf("No of Alphabets in a string: %d\nNo of Digits in a string: %d\nNo of Special characters in a string: %d\n",alp,dig,spc);
    return 0;
}


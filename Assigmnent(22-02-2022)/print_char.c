/*  Declare array of pointers Arr, pointing to array of characters c[]
    print them - use function to print the array of c[] through Arr.
    c[]={'a','e','i','o','u'};
    Arr[0]--->c[0]---> 'a'
*/

 #include<stdio.h>
#define N 5

void print(char (*arr)[N]);
int main()
{
    char ch[N]={'a','e','i','o','u'};
    char (*arr)[N];
    int i;
    arr=&ch;
    print(arr);
    return 0;
}

void print(char (*arr)[N])
{
    int i=0;
    for(i=0;i<N;i++)
    {
         printf("%c ",((*arr)[i]));
    }
}

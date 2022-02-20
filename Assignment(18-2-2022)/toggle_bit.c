#include <stdio.h>
#define toggle_bit(n,p) (n^(0x01<<p))
int main()
{
    int n,p,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a position to toggle a bit: ");
    scanf("%d",&p);
    x=toggle_bit(n,p);
    printf("After the toggle bit: %d\n",x);
    return 0;
}


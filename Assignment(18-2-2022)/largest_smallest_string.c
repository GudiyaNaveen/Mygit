#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],small[100],large[100],temp[100];
    int i,j,k=0,c=0,p=0,q=0,m,n;
    printf("Enter a string: ");
    scanf("%[^\n]s",a);
    n=strlen(a);
    for(i=0;i<=n;i++)
    {
        if(a[i]==' ' || a[i]=='\0')
        {
            for(j=c;j<i;j++)
            {
                temp[k]=a[j];
                if(c==0)
                {
                    small[k]=a[j];
                    large[k]=a[j];
                }
                k++;
            }
            m=i-c;
            if(c==0)
            {
                p=m;
                q=m;
            }
            else if(m<p)
            {
                for(j=0;j<m;j++)
                {
                    small[j]=temp[j];
                }
                p=m;
            }
            else if(m>q)
            {
                for(j=0;j<m;j++)
                {
                    large[j]=temp[j];
                }
                q=m;
            }
            k=0;
            c=i+1;
        }
    }
    printf("smallest word in astring: ");
    for(i=0;i<p;i++)
    {
        printf("%c",small[i]);
    }
    printf("\n");
    printf("largest word in astring: ");
    for(i=0;i<q;i++)
    {
        printf("%c",large[i]);
    }
    printf("\n");
    return 0;
}


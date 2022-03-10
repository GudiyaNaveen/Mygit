#include <stdio.h>

int main()
{
    static int arr[]={0,1,2,3,4}; //100 104 108 112 116
    int *p[]={arr,arr+1,arr+2,arr+3,arr+4};// 1000 1004 1008 1012 1016
    int **ptr=p;// 1000
    ptr++;//1004
    printf("\n%d %d %d",ptr-p,*ptr-arr,**ptr);
    /*
        ptr-p=(1004-1000)/4=1
        *ptr-p=(104-100)/4=1
        **ptr=1004->104=1;
    */
    *ptr++;//1008
    printf("\n%d %d %d",ptr-p,*ptr-arr,**ptr);
     /*
        ptr-p=(1008-1000)/4=2
        *ptr-p=(108-100)/4=2
        **ptr=1008->108=2;
    */
    *++ptr;//1012
    printf("\n%d %d %d",ptr-p,*ptr-arr,**ptr);
     /*
        ptr-p=(1012-1000)/4=3
        *ptr-p=(112-100)/4=3
        **ptr=1012->112=3;
    */
    ++*ptr;//1012
    printf("\n%d %d %d",ptr-p,*ptr-arr,**ptr);
     /*
        ptr-p=(1016-1000)/4=3
        *ptr-p=(116-100)/4=4
        **ptr=1016->116=4;
    */
    return 0;
}

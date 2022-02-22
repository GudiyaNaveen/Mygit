#include <stdio.h>

typedef struct
{
    char name[20];
    int id;
    enum stu{sun=1,mon=2,tue,wed,thurs,fri,sat}i;
}stu_1;


int main()
{
    printf("Size of structure: %d",sizeof(stu_1));
    return 0;
}

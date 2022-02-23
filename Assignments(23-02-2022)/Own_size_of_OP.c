/* Wrte C program to Implement a Own Size of operator. */

#include<stdio.h>
#define my_sizeof(n) (char *)(&n+1)-(char*)(&n)

typedef struct
{
    int a;
    char b;
    float f;
}struct_1;

typedef union
{
    int a;
    char b;
    float f;
    double d;
}union_1;

int main()
{
    int n;
    char ch;
    float f;
    double x;
    struct_1 s;
    union_1 u;
    printf("int: %ld bytes\n", my_sizeof(n));
    printf("Char: %ld bytes\n", my_sizeof(ch));
    printf("Float: %ld bytes\n", my_sizeof(f));
    printf("Double: %ld bytes\n", my_sizeof(x));
    printf("Structure: %ld bytes\n", my_sizeof(s));
    printf("Union: %ld bytes\n", my_sizeof(u));
    return 0;
}

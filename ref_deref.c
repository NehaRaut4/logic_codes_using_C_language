#include<stdio.h>
int main()
{
    char p[] = "Hello";
    char *a;
    a = p;
    printf("%c\n",*&*a);
}
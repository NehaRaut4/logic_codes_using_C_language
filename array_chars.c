#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char c[]="girl";
    char *x = c;
    n = strlen(x);
    *x = c[n];
    for ( i = 0; i < n; i++)
    {
        printf("%s\t",x);
        x++;
    }
    
}
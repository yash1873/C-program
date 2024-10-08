#include <stdio.h>
int Add(int, int);
int main()
{
    int a,b;
    int (*p)(int,int);
    printf ("enter 2 nos ");
    scanf ("%d %d", &a, &b);
    p=Add;
    int sum=(*p)(a, b);
    printf ("sum %d", sum);
    return 0;
}

int Add(int a, int b)
{
    int c = a + b;
    return c;
}
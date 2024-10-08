#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("It is a even number\n");
    }
    else
    {
        printf("It is an odd number\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the year\n");
    scanf("%d",&a);
    if (a%400==0 || a%4==0 && a%100!=0)
    {
        printf("It is a leap year\n");
    }
    else 
    {
        printf("Not a leap year\n");
    }
    return 0;
}
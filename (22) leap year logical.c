#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the year\n");
    scanf("%d",&a);
    b=(a%400==0 || a%4==0 && a%100!=0 ? 1:2);
    if (b==1)
    {
        printf("It is a leap year\n");
    }
    else 
    {
        printf("It is not a leap year\n");
    }
    return 0;
}
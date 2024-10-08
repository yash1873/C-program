#include <stdio.h>
int main()
{
    int s,h,d,t;
    printf("Enter basic salary\n");
    scanf("%d",&s);
    if (s<1500)
    {
        h=.1*s;
        d=.9*s;
        t=s+h+d;
        printf("The gross salary is =%d\n",t);
    }
    else if (s>=1500)
    {
        h=500;
        d=.98*s;
        t=s+h+d;
        printf("The gross salary is =%d\n",t);
    }
    return 0;
}
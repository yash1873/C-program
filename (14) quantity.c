#include <stdio.h>
int main()
{
    float q,p,dis,c,newc;
    printf ("Enter quantity and price per item\n");
    scanf("%f %f",&q,&p);
    if (q>1000)
    {
        c=q*p;
        dis=.1*c;
        newc=c-dis;
        printf("The total expenses are=%f\n",newc);
    }
    else
    {
        c=q*p;
        printf("The Total expenses are=%f\n",c);
    }
    return 0;
}
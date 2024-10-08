#include<stdio.h>
int main()
{
    int q,p,sum;
    float d,nsum;
    printf("Enter the quantity and price per item");
    scanf("%d %d",&q,&p);
    if (q>1000)
    {
      sum=q*p;
      d=0.1*sum;
      nsum=sum-d;
      printf("\nThe total expenses are=%f",nsum);
    }
    

}
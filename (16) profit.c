#include <stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter CP and SP of the item\n");
    scanf("%d %d",&cp,&sp);
    if (cp>sp)
    {
      l=cp-sp;
      printf("The loss is=%d\n",l);
    }
    else if(sp>cp)
    {
        p=sp-cp;
        printf("The profit is=%d\n",p);
    }
    else
    {
        printf("No profit No loss\n");
    }
    return 0;
}
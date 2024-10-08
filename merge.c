#include<stdio.h>
#include<malloc.h>
void merge(int*ptr,int*ptr1)
{
    int *p=(int*)malloc(6*sizeof(int));
    for(int i=0;i<=2;i++)
    {
        p[i]=ptr[i];
        p[i+3]=ptr1[i];
    } 
    for(int k=0;k<=5;k++)
    {
        printf("%d",p[k]);
    }
    free(p);
}
int main()
{
   int a[3]={1,2,3};
   int b[3]={4,5,6};
   merge(a,b);
   return 0;
}
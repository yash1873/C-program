#include<stdio.h>
int main ()
{
   int a[]={1,2,3,4,5};
   int *ptr = &a[0]; // initialize ptr to point to the first element of a
   *ptr=a[0];
   printf("%d\n",*(ptr)); // prints 1
   *ptr=0;
   printf("%d",*(ptr)); // prints 0

   return 0;

}

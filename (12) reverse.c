#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter the 5 digit number");
    scanf("%d",&a);
    printf("\nThe number is =%d",a);
    b=a%10; //first digit
    c=c*10+b;
    a=a/10;
    b=a%10; //2nd
    c=c*10+b;
    a=a/10;
    b=a%10; //3
    c=c*10+b;
    a=a/10;
    b=a%10; //4
    c=c*10+b;
    a=a/10;
    b=a%10; //5
    c=c*10+b;
    a=a/10;
    printf("\nThe reversed number is =%d",c);
    return 0;
}
#include <stdio.h>
int count(int num) 
{
    int count=0;
    while (num!=0) 
    {
        if (num%2==1) 
        {
            count++;
        }
        num /= 2;
    }
    return count;
}
int main() 
{
    int num ;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Number of 1s in %d: %d\n", num, count(num));
    return 0;
}
#include <stdio.h>
int digit(int n) 
{
    int sum=0;
    // calculate the sum of digits using modulo and division operations
    while (n!=0) 
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main() 
{
    int num;
    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);
    // check for error
    if (num<100 || num>999) 
    {
        printf("Invalid input please enter a 3-digit positive integer.\n");
    }
    printf("Sum of digits: %d\n", digit(num));
    return 0;
}
#include <stdio.h>
void bin (int n)
{
  int rem=0, temp=0, digit=1;
  while (n!=0)
  {
    rem=n%2;
    n=n/2;
    temp=temp+(rem*digit);
    digit=digit*10;
  }
  printf("%d",temp);
  
}
int main() 
{
    int num;
    printf("Enter a decimal number ");
    scanf("%d", &num);

    printf("Number in binary ");
    bin(num);

    return 0;
}
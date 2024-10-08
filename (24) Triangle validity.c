#include <stdio.h>
int main() 
{
    float a,b,c;
    printf("Enter the three sides\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a) 
    {
        printf("Triangle is valid\n");
    } else 
    {
        printf("Triangle is invalid\n");
    }
    return 0;
}

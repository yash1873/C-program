#include<stdio.h>
void large(int *ptr, int b)
{
    int max = *ptr;
    for(int j = 0; j < b; j++)
    {
        if((*(ptr+j)) > max)
            max = *(ptr+j);
    }
    printf("Largest number is %d", max);
}
int main()
{
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    large(a, n);
}
#include <stdio.h>
void shift(int*x, int*y, int*z) 
{
    int temp=*x; 
    *x=*z; 
    *z=*y; 
    *y=temp; 
}
int main() 
{
    int x = 5, y = 8, z = 10;
    printf("Before shift x = %d, y = %d, z = %d\n", x, y, z);
    shift(&x, &y, &z);
    printf("After shift x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
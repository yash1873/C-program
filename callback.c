#include <stdio.h>                            
// This is the callback function
void f1(int value) 
{
    printf("The value is %d\n", value);
}
// This is the function that takes a callback function as an argument
int f2(void (*callback)(int)) 
{
    int x;
    printf("Enter a value to print: ");
    scanf("%d", &x);
    // Call the callback function with the value as an argument
    callback(x);
}
int main() 
{
    // Call the f2 function and pass the f1 function as an argument
    f2(f1);
    return 0;
}
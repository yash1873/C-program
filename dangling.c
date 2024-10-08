#include <stdio.h>
#include <stdlib.h>
// Function to allocate memory dynamically, return a pointer to the allocated memory, and free the memory inside the function
int *fun() {
    int *ptr=(int*)malloc(sizeof(int)); // allocate memory for an integer
    *ptr = 10; // assign a value to the integer
    free(ptr); // free the memory
    return ptr; // return the pointer this is a dangling pointer now
}
int main() {
    int *ptr = fun();
    // ptr is a dangling pointer now, as the memory it points to has been freed
    printf("Accessing freed memory: %d\n", *ptr);
    return 0;
}
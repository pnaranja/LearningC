#include <stdio.h>

void swap(int*, int*); // params are pointers of objects of type integer

int main(void){
    int a = 21;
    int b = 17;

    // A useless block
    // Any variables created inside the block can only be referenced in the block
    // But it can access variables outside the block
    {
        int c = 1;
        printf("INSIDE EXTRA BLOCK: a = %d \n", a);
    }
    
    // The line below should throw a compiler error
    //printf("OUTSIDE EXTRA BLOCK: c = %d \n", c); 
    swap(&a,&b); // pass in the memory addresses of a and b
    printf("a = %d, b = %d\n", a, b);
}

void swap(int *aptr, int *bptr){
    printf("The aptr is a memory address: %p\n", aptr); 
    int t = *aptr; // t has the value of what aptr is pointing to
    *aptr = *bptr; // The value that aptr is pointing to is now the value what bptr is pointing to
    *bptr = t; // The value that bptr is pointing to is the value of t
}

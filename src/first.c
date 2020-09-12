#include <stdlib.h>
#include <stdio.h>
void aSaying();

int main(void){
    const int num = 1;

    puts("Wow, You can use puts!!!");
    puts("And no need for newline character!");
    printf("I am a simple ");
    printf("computer\n");
    printf("My favorite number is %d because...\n", num);
    aSaying();

    return EXIT_SUCCESS;
}

void aSaying(){
    printf("\nHello!!!\n");
}
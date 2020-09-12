#include <stdio.h>

int main(void){
    int age;

    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is: %d\n",age); 
    printf("You are at least %d days old\n",age*365); 
    printf("");

    return 0;
}

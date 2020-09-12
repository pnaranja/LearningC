#include<stdio.h>
    
int main(void) {
  int a = 12;
  int* b = &a; // b is the memory address of a
  int c = *b; // Dereference b ("go to the memory address that is stored in b" and access it's value) and save it in c.  The value of c DOES NOT change if b's value changes later in the program.
  int* d = &a; // d is the memory address of a

  // All of them are 12
  printf("a = %d, *b = %d, c = %d *d = %d \n", a, *b, c, *d);

  
  int e = 20;
  b = &e;

  // a, c are still 12
  // b is the memory address (of e) that contains the value 20
  // d is the memory address (of a) that contains the value 12
  printf("a = %d, *b = %d, c = %d *d = %d \n", a, *b, c, *d);

  
  a = 100;

  // a is 100
  // b is the memory address (of e) that contains the value 20
  // c is still 12
  // d is the memory address (of a) that contains the value 100
  printf("a = %d, *b = %d, c = %d *d = %d \n", a, *b, c, *d);

  
  int f = 25;
  d = &f;

  // a is 100
  // b is the memory address (of e) that contains the value 20
  // c is still 12
  // d is the memory address (of f) that contains the value 25
  printf("a = %d, *b = %d, c = %d *d = %d \n", a, *b, c, *d);

  printf("But the VALUES of the variables b and d are memory addresses: %p, %p respectively\n", b, d);
  
}  
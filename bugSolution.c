/*
 * This program demonstrates how to use pointers to modify variables correctly.
 */

 #include <stdio.h>

 int main() {
     int x = 10;
     int *ptr = &x;

     /*
      * Change the value of x using the pointer.
      */
     *ptr = 20;

     /*
      * Print the new value of x.
      */
     printf("The value of x is: %d\n", x);

     return 0;
 }
/*  CH1 Example
*
*   power-function.c
*
*   Introduction to functions.  Write an exponent function power(x,y) that takes x to the
*   power of y (x ^ y)
*
*   1.7; page 22
*/

#include <stdio.h>

/* function prototype goes here*/
int power(int m, int n);

int main(){

  int i;

  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(-3, i), power(2, i));

  return 0;
}

/* function definition goes here */
int power(int base, int n) {

  int i, p;

  p = 1;
  /* Use case: power(2, 3)

  iteration 1:    1 * 2 = 2; p = 2

  iteration 2:    2 * 2 = 4; p = 4

  iteration 3:    4 * 2 = 8; p = 8
  return 8
  */
  for (i = 1; i <= n; ++i)
    p = p * base;
  return p;
}



/*
OUTPUT:

0 1 1
1 -3 2
2 9 4
3 -27 8
4 81 16
5 -243 32
6 729 64
7 -2187 128
8 6561 256
9 -19683 512
*/

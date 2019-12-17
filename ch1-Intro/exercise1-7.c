/*
* CH1 Exercise 1-7
*
* exercise1-7.c
*
* Write a program to print EOF
*
* page 17
*/

#include <stdio.h>

int main() {

  int c;

  while ((c = getchar()) != EOF){ // The only way to see EOF (-1) is to hit CTRL-V then CTRL-D to make "^D" in the terminal
  // Then hit CTRL-D again for program to exit with EOF value displayed
    putchar(c);
  }

  printf("%d\n", c);

  /*
  OUTPUT:

  AAAAAAAAAAAAAAAAAAAAA^D
  AAAAAAAAAAAAAAAAAAAAA
  -1


  */

  return 0;
}

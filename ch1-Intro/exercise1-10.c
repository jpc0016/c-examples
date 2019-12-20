/*  CH1 Exercise 1-10
*
*   exercise1-10.c
*
*   Write a program to copy its inputs to its output, replacing each tab with \t,
*   each backspace by \b, and each backslash by \\.  This makes tabs and backspaces visible
*   in an unambiguous way.
*
*   page 19
*/

#include <stdio.h>

int main() {

  /*
  Start with basic getchar() while loop implementation
  to simply repeat an entered string
  */

  int c;    // declare character value of getchar()

  c = getchar();      // initialize first character
  while (c != EOF){

    /* Check for special characters one at a time
        Treat the backslash as a character followed by
        its escape type */
    if (c == '\t')
      printf("%ct",'\\');
    else if (c == '\b')
      printf("%cb",'\\');
    else if (c == '\\')
      printf("%c\\",'\\');
    else {
      putchar(c);
    }

    c = getchar();
  }

  return 0;
}

/*
OUTPUT:

hello\world
hello\\world

hello	world
hello\tworld
*/

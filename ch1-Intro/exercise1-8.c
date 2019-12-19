/*
* CH1 Exercise 1-8
*
* exercise1-8.c
*
* Write a program to count blanks, tabs, and newlines
*
* page 19
*/

#include <stdio.h>

int main() {

  int  c;      // value of character to be retrieved and compared to EOF
  long count;  // number of special characters

  count = 0;
  c = getchar();    // initialize character with first getchar()

  // implement if-statement for each type of blank character
  while (c != EOF) {
    if (c == '\n')
      ++count;
    if (c == '\t')
      ++count;
    if (c == ' ')
      ++count;
    if (c == '\v')
      ++count;

    // get next character for while loop
    c = getchar();
    printf("%ld\n", count);
  }

  /*
  OUTPUT:

  FA 18  J	9f
  0
  0
  1
  1
  1
  2
  3
  3
  4
  4
  4
  */
  return 0;
}
